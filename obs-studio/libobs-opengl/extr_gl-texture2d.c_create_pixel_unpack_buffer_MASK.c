
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int format; } ;
struct gs_texture_2d {int width; int height; TYPE_1__ base; int unpack_buffer; } ;
typedef int GLsizeiptr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static bool FUNC_6(struct gs_texture_2d *VAR_2)
{
 GLsizeiptr VAR_3;
 bool VAR_4 = 1;

 if (!FUNC_2(1, &VAR_2->unpack_buffer))
  return 0;

 if (!FUNC_1(VAR_1, VAR_2->unpack_buffer))
  return 0;

 VAR_3 = VAR_2->width * FUNC_4(VAR_2->base.format);
 if (!FUNC_5(VAR_2->base.format)) {
  VAR_3 /= 8;
  VAR_3 = (VAR_3 + 3) & 0xFFFFFFFC;
  VAR_3 *= VAR_2->height;
 } else {
  VAR_3 *= VAR_2->height;
  VAR_3 /= 8;
 }

 FUNC_0(VAR_1, VAR_3, 0, VAR_0);
 if (!FUNC_3("glBufferData"))
  VAR_4 = 0;

 if (!FUNC_1(VAR_1, 0))
  VAR_4 = 0;

 return VAR_4;
}
