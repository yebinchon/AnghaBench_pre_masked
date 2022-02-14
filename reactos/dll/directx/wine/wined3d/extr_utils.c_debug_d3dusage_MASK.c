
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct debug_buffer {int str; } ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int ) ;
 int VAR_18 ;
 int FUNC_2 (struct debug_buffer*,char*) ;
 char const* FUNC_3 (char*,int ) ;

const char *FUNC_4(DWORD VAR_19)
{
    struct debug_buffer VAR_20;

    FUNC_2(&VAR_20, "0");

    if (VAR_19 & VAR_9) { FUNC_0(&VAR_20, "WINED3DUSAGE_RENDERTARGET", " | "); VAR_19 &= ~VAR_9; };
    if (VAR_19 & VAR_0) { FUNC_0(&VAR_20, "WINED3DUSAGE_DEPTHSTENCIL", " | "); VAR_19 &= ~VAR_0; };
    if (VAR_19 & VAR_18) { FUNC_0(&VAR_20, "WINED3DUSAGE_WRITEONLY", " | "); VAR_19 &= ~VAR_18; };
    if (VAR_19 & VAR_14) { FUNC_0(&VAR_20, "WINED3DUSAGE_SOFTWAREPROCESSING", " | "); VAR_19 &= ~VAR_14; };
    if (VAR_19 & VAR_2) { FUNC_0(&VAR_20, "WINED3DUSAGE_DONOTCLIP", " | "); VAR_19 &= ~VAR_2; };
    if (VAR_19 & VAR_8) { FUNC_0(&VAR_20, "WINED3DUSAGE_POINTS", " | "); VAR_19 &= ~VAR_8; };
    if (VAR_19 & VAR_13) { FUNC_0(&VAR_20, "WINED3DUSAGE_RTPATCHES", " | "); VAR_19 &= ~VAR_13; };
    if (VAR_19 & VAR_5) { FUNC_0(&VAR_20, "WINED3DUSAGE_NPATCHES", " | "); VAR_19 &= ~VAR_5; };
    if (VAR_19 & VAR_3) { FUNC_0(&VAR_20, "WINED3DUSAGE_DYNAMIC", " | "); VAR_19 &= ~VAR_3; };
    if (VAR_19 & VAR_10) { FUNC_0(&VAR_20, "WINED3DUSAGE_RESTRICTED_CONTENT", " | "); VAR_19 &= ~VAR_10; };
    if (VAR_19 & VAR_12) { FUNC_0(&VAR_20, "WINED3DUSAGE_RESTRICT_SHARED_RESOURCE_DRIVER", " | "); VAR_19 &= ~VAR_12; };
    if (VAR_19 & VAR_11) { FUNC_0(&VAR_20, "WINED3DUSAGE_RESTRICT_SHARED_RESOURCE", " | "); VAR_19 &= ~VAR_11; };
    if (VAR_19 & VAR_1) { FUNC_0(&VAR_20, "WINED3DUSAGE_DMAP", " | "); VAR_19 &= ~VAR_1; };
    if (VAR_19 & VAR_16) { FUNC_0(&VAR_20, "WINED3DUSAGE_TEXTAPI", " | "); VAR_19 &= ~VAR_16; };
    if (VAR_19 & VAR_4) { FUNC_0(&VAR_20, "WINED3DUSAGE_LEGACY_CUBEMAP", " | "); VAR_19 &= ~VAR_4; };
    if (VAR_19 & VAR_17) { FUNC_0(&VAR_20, "WINED3DUSAGE_TEXTURE", " | "); VAR_19 &= ~VAR_17; };
    if (VAR_19 & VAR_7) { FUNC_0(&VAR_20, "WINED3DUSAGE_OWNDC", " | "); VAR_19 &= ~VAR_7; };
    if (VAR_19 & VAR_15) { FUNC_0(&VAR_20, "WINED3DUSAGE_STATICDECL", " | "); VAR_19 &= ~VAR_15; };
    if (VAR_19 & VAR_6) { FUNC_0(&VAR_20, "WINED3DUSAGE_OVERLAY", " | "); VAR_19 &= ~VAR_6; };

    if (VAR_19)
        FUNC_0("Unrecognized usage flag(s) %#x.\n", VAR_19);

    return FUNC_3("%s", VAR_20.str);
}
