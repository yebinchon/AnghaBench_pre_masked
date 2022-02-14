
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct debug_buffer {int str; } ;
typedef int DWORD ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct debug_buffer*,char*) ;
 char const* FUNC_3 (char*,char const*,int ,char const*) ;
 int FUNC_4 (int) ;

const char *FUNC_5(DWORD VAR_9)
{
    struct debug_buffer VAR_10;
    const char *VAR_11 = "";
    const char *VAR_12 = "";

    if (FUNC_4(VAR_9) > 16)
    {
        VAR_11 = "~(";
        VAR_9 = ~VAR_9;
        VAR_12 = ")";
    }

    FUNC_2(&VAR_10, "0");

    if (VAR_9 & VAR_1) { FUNC_0(&VAR_10, "WINED3D_LOCATION_DISCARDED", " | "); VAR_9 &= ~VAR_1; };
    if (VAR_9 & VAR_5) { FUNC_0(&VAR_10, "WINED3D_LOCATION_SYSMEM", " | "); VAR_9 &= ~VAR_5; };
    if (VAR_9 & VAR_8) { FUNC_0(&VAR_10, "WINED3D_LOCATION_USER_MEMORY", " | "); VAR_9 &= ~VAR_8; };
    if (VAR_9 & VAR_0) { FUNC_0(&VAR_10, "WINED3D_LOCATION_BUFFER", " | "); VAR_9 &= ~VAR_0; };
    if (VAR_9 & VAR_6) { FUNC_0(&VAR_10, "WINED3D_LOCATION_TEXTURE_RGB", " | "); VAR_9 &= ~VAR_6; };
    if (VAR_9 & VAR_7) { FUNC_0(&VAR_10, "WINED3D_LOCATION_TEXTURE_SRGB", " | "); VAR_9 &= ~VAR_7; };
    if (VAR_9 & VAR_2) { FUNC_0(&VAR_10, "WINED3D_LOCATION_DRAWABLE", " | "); VAR_9 &= ~VAR_2; };
    if (VAR_9 & VAR_3) { FUNC_0(&VAR_10, "WINED3D_LOCATION_RB_MULTISAMPLE", " | "); VAR_9 &= ~VAR_3; };
    if (VAR_9 & VAR_4) { FUNC_0(&VAR_10, "WINED3D_LOCATION_RB_RESOLVED", " | "); VAR_9 &= ~VAR_4; };

    if (VAR_9)
        FUNC_0("Unrecognized location flag(s) %#x.\n", VAR_9);

    return FUNC_3("%s%s%s", VAR_11, VAR_10.str, VAR_12);
}
