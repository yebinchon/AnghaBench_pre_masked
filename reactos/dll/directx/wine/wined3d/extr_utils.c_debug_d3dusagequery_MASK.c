
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct debug_buffer {int str; } ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct debug_buffer*,char*) ;
 char const* FUNC_3 (char*,int ) ;

const char *FUNC_4(DWORD VAR_8)
{
    struct debug_buffer VAR_9;

    FUNC_2(&VAR_9, "0");

    if (VAR_8 & VAR_0) { FUNC_0(&VAR_9, "WINED3DUSAGE_QUERY_FILTER", " | "); VAR_8 &= ~VAR_0; };
    if (VAR_8 & VAR_1) { FUNC_0(&VAR_9, "WINED3DUSAGE_QUERY_GENMIPMAP", " | "); VAR_8 &= ~VAR_1; };
    if (VAR_8 & VAR_2) { FUNC_0(&VAR_9, "WINED3DUSAGE_QUERY_LEGACYBUMPMAP", " | "); VAR_8 &= ~VAR_2; };
    if (VAR_8 & VAR_3) { FUNC_0(&VAR_9, "WINED3DUSAGE_QUERY_POSTPIXELSHADER_BLENDING", " | "); VAR_8 &= ~VAR_3; };
    if (VAR_8 & VAR_4) { FUNC_0(&VAR_9, "WINED3DUSAGE_QUERY_SRGBREAD", " | "); VAR_8 &= ~VAR_4; };
    if (VAR_8 & VAR_5) { FUNC_0(&VAR_9, "WINED3DUSAGE_QUERY_SRGBWRITE", " | "); VAR_8 &= ~VAR_5; };
    if (VAR_8 & VAR_6) { FUNC_0(&VAR_9, "WINED3DUSAGE_QUERY_VERTEXTEXTURE", " | "); VAR_8 &= ~VAR_6; };
    if (VAR_8 & VAR_7) { FUNC_0(&VAR_9, "WINED3DUSAGE_QUERY_WRAPANDMIP", " | "); VAR_8 &= ~VAR_7; };

    if (VAR_8)
        FUNC_0("Unrecognized usage query flag(s) %#x.\n", VAR_8);

    return FUNC_3("%s", VAR_9.str);
}
