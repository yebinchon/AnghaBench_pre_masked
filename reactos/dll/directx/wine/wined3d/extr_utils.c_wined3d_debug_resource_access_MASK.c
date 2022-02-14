
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct debug_buffer {int str; } ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct debug_buffer*,char*) ;
 char const* FUNC_3 (char*,int ) ;

const char *FUNC_4(DWORD VAR_4)
{
    struct debug_buffer VAR_5;

    FUNC_2(&VAR_5, "0");

    if (VAR_4 & VAR_1) { FUNC_0(&VAR_5, "WINED3D_RESOURCE_ACCESS_GPU", " | "); VAR_4 &= ~VAR_1; };
    if (VAR_4 & VAR_0) { FUNC_0(&VAR_5, "WINED3D_RESOURCE_ACCESS_CPU", " | "); VAR_4 &= ~VAR_0; };
    if (VAR_4 & VAR_2) { FUNC_0(&VAR_5, "WINED3D_RESOURCE_ACCESS_MAP_R", " | "); VAR_4 &= ~VAR_2; };
    if (VAR_4 & VAR_3) { FUNC_0(&VAR_5, "WINED3D_RESOURCE_ACCESS_MAP_W", " | "); VAR_4 &= ~VAR_3; };

    if (VAR_4)
        FUNC_1("Unrecognised access flag(s) %#x.\n", VAR_4);

    return FUNC_3("%s", VAR_5.str);
}
