
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * samplers; } ;
struct wined3d_gl_info {TYPE_1__ limits; } ;
struct fragment_caps {int wined3d_caps; int PrimitiveMiscCaps; int TextureOpCaps; int MaxSimultaneousTextures; int MaxTextureBlendStages; } ;


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
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 size_t VAR_31 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(const struct wined3d_gl_info *VAR_32, struct fragment_caps *VAR_33)
{
    VAR_33->wined3d_caps = VAR_29
            | VAR_30
            | VAR_28;
    VAR_33->PrimitiveMiscCaps = VAR_2
            | VAR_1;
    VAR_33->TextureOpCaps = VAR_14
            | VAR_25
            | VAR_26
            | VAR_19
            | VAR_18
            | VAR_17
            | VAR_5
            | VAR_4
            | VAR_3
            | VAR_27
            | VAR_6
            | VAR_7
            | VAR_9
            | VAR_10
            | VAR_8
            | VAR_11
            | VAR_20
            | VAR_21
            | VAR_23
            | VAR_22
            | VAR_15
            | VAR_24
            | VAR_16
            | VAR_12
            | VAR_13;
    VAR_33->MaxTextureBlendStages = VAR_0;
    VAR_33->MaxSimultaneousTextures = FUNC_0(VAR_32->limits.samplers[VAR_31], VAR_0);
}
