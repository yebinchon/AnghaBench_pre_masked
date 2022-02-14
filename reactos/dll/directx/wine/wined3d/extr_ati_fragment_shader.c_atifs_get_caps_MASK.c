
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_gl_info {int dummy; } ;
struct fragment_caps {int PrimitiveMiscCaps; int TextureOpCaps; int MaxSimultaneousTextures; int MaxTextureBlendStages; int wined3d_caps; } ;


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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;

__attribute__((used)) static void FUNC_0(const struct wined3d_gl_info *VAR_28, struct fragment_caps *VAR_29)
{
    VAR_29->wined3d_caps = VAR_27;
    VAR_29->PrimitiveMiscCaps = VAR_2 |
            VAR_1;
    VAR_29->TextureOpCaps = VAR_13 |
                           VAR_24 |
                           VAR_25 |
                           VAR_18 |
                           VAR_17 |
                           VAR_16 |
                           VAR_5 |
                           VAR_4 |
                           VAR_3 |
                           VAR_26 |
                           VAR_6 |
                           VAR_7 |
                           VAR_9 |
                           VAR_10 |
                           VAR_8 |
                           VAR_11 |
                           VAR_19 |
                           VAR_20 |
                           VAR_22 |
                           VAR_21 |
                           VAR_14 |
                           VAR_23 |
                           VAR_15 |
                           VAR_12;
    VAR_29->MaxTextureBlendStages = VAR_0;
    VAR_29->MaxSimultaneousTextures = 6;
}
