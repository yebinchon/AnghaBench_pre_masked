
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int levels; int gl_internal_format; int gl_format; int texture; int format; } ;
struct gs_texture_cube {int size; TYPE_1__ base; } ;
typedef scalar_t__ GLenum ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,scalar_t__,int,int ,int ,int,int,int,int,int const***) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static inline bool FUNC_8(struct gs_texture_cube *VAR_3,
           const uint8_t **VAR_4)
{
 uint32_t VAR_5 = VAR_3->size * FUNC_5(VAR_3->base.format);
 uint32_t VAR_6 = VAR_3->size * VAR_5 / 8;
 uint32_t VAR_7 = VAR_3->base.levels;
 bool VAR_8 = FUNC_7(VAR_3->base.format);
 GLenum VAR_9 = FUNC_0(VAR_3->base.format);
 bool VAR_10 = 1;
 uint32_t VAR_11;

 if (!VAR_7)
  VAR_7 = FUNC_6(VAR_3->size, VAR_3->size);

 for (VAR_11 = 0; VAR_11 < 6; VAR_11++) {
  GLenum VAR_12 = VAR_1 + VAR_11;

  if (!FUNC_2(VAR_12, VAR_3->base.texture))
   VAR_10 = 0;

  if (!FUNC_3(VAR_12, VAR_9, VAR_7,
      VAR_3->base.gl_format,
      VAR_3->base.gl_internal_format, VAR_8,
      VAR_3->size, VAR_3->size, VAR_6, &VAR_4))
   VAR_10 = 0;

  if (!FUNC_2(VAR_12, 0))
   VAR_10 = 0;

  if (VAR_4)
   VAR_4++;
 }

 FUNC_1(VAR_0, VAR_2, VAR_7);
 if (!FUNC_4("glTexParameteri"))
  VAR_10 = 0;

 return VAR_10;
}
