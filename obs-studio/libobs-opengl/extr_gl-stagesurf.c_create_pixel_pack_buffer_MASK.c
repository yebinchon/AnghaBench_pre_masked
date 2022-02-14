
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gs_stage_surface {int width; int bytes_per_pixel; int height; int pack_buffer; } ;
typedef int GLsizeiptr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static bool FUNC_4(struct gs_stage_surface *VAR_2)
{
 GLsizeiptr VAR_3;
 bool VAR_4 = 1;

 if (!FUNC_2(1, &VAR_2->pack_buffer))
  return 0;

 if (!FUNC_1(VAR_1, VAR_2->pack_buffer))
  return 0;

 VAR_3 = VAR_2->width * VAR_2->bytes_per_pixel;
 VAR_3 = (VAR_3 + 3) & 0xFFFFFFFC;
 VAR_3 *= VAR_2->height;

 FUNC_0(VAR_1, VAR_3, 0, VAR_0);
 if (!FUNC_3("glBufferData"))
  VAR_4 = 0;

 if (!FUNC_1(VAR_1, 0))
  VAR_4 = 0;

 return VAR_4;
}
