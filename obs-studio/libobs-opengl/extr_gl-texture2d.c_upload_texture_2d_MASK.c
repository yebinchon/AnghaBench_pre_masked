
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int levels; int gl_internal_format; int gl_format; int gl_type; int texture; int format; } ;
struct gs_texture_2d {int width; int height; TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int,int ,int ,int,int,int,int,int const***) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static bool FUNC_6(struct gs_texture_2d *VAR_2, const uint8_t **VAR_3)
{
 uint32_t VAR_4 = VAR_2->width * FUNC_3(VAR_2->base.format);
 uint32_t VAR_5 = VAR_2->height * VAR_4 / 8;
 uint32_t VAR_6 = VAR_2->base.levels;
 bool VAR_7 = FUNC_5(VAR_2->base.format);
 bool VAR_8;

 if (!VAR_6)
  VAR_6 = FUNC_4(VAR_2->width, VAR_2->height);

 if (!FUNC_0(VAR_0, VAR_2->base.texture))
  return 0;

 VAR_8 = FUNC_1(VAR_0, VAR_2->base.gl_type, VAR_6,
          VAR_2->base.gl_format,
          VAR_2->base.gl_internal_format, VAR_7,
          VAR_2->width, VAR_2->height, VAR_5, &VAR_3);

 if (!FUNC_2(VAR_0, VAR_1,
       VAR_6 - 1))
  VAR_8 = 0;
 if (!FUNC_0(VAR_0, 0))
  VAR_8 = 0;

 return VAR_8;
}
