
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int textures; } ;
struct wined3d_gl_info {TYPE_1__ limits; scalar_t__* supported; } ;
struct fragment_caps {int TextureOpCaps; int MaxSimultaneousTextures; int MaxTextureBlendStages; scalar_t__ PrimitiveMiscCaps; scalar_t__ wined3d_caps; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
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

__attribute__((used)) static void FUNC_0(const struct wined3d_gl_info *VAR_26, struct fragment_caps *VAR_27)
{
    VAR_27->wined3d_caps = 0;
    VAR_27->PrimitiveMiscCaps = 0;
    VAR_27->TextureOpCaps = VAR_5
            | VAR_6
            | VAR_7
            | VAR_17
            | VAR_18
            | VAR_19
            | VAR_23
            | VAR_24
            | VAR_14;

    if (VAR_26->supported[VAR_0]
            || VAR_26->supported[VAR_3]
            || VAR_26->supported[VAR_4])
    {
        VAR_27->TextureOpCaps |= VAR_10
                | VAR_12
                | VAR_11
                | VAR_9
                | VAR_16
                | VAR_25;
    }
    if (VAR_26->supported[VAR_2]
            || VAR_26->supported[VAR_4])
    {
        VAR_27->TextureOpCaps |= VAR_8
                | VAR_22
                | VAR_20
                | VAR_21
                | VAR_13;
    }
    if (VAR_26->supported[VAR_1])
        VAR_27->TextureOpCaps |= VAR_15;

    VAR_27->MaxTextureBlendStages = VAR_26->limits.textures;
    VAR_27->MaxSimultaneousTextures = VAR_26->limits.textures;
}
