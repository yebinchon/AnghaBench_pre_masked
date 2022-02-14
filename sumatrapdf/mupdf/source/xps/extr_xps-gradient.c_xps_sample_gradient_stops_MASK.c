
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xps_document ;
struct stop {float offset; int a; int b; int g; int r; } ;
struct TYPE_3__ {void*** function; } ;
typedef TYPE_1__ fz_shade ;
typedef int fz_context ;


 void* FUNC_0 (int ,int ,float) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, xps_document *VAR_1, fz_shade *VAR_2, struct stop *VAR_3, int VAR_4)
{
 float VAR_5, VAR_6;
 int VAR_7, VAR_8;

 VAR_8 = 0;
 for (VAR_7 = 0; VAR_7 < 256; VAR_7++)
 {
  VAR_5 = VAR_7 / 255.0f;
  while (VAR_8 + 1 < VAR_4 && VAR_5 > VAR_3[VAR_8+1].offset)
   VAR_8++;

  VAR_6 = (VAR_5 - VAR_3[VAR_8].offset) / (VAR_3[VAR_8+1].offset - VAR_3[VAR_8].offset);

  VAR_2->function[VAR_7][0] = FUNC_0(VAR_3[VAR_8].r, VAR_3[VAR_8+1].r, VAR_6);
  VAR_2->function[VAR_7][1] = FUNC_0(VAR_3[VAR_8].g, VAR_3[VAR_8+1].g, VAR_6);
  VAR_2->function[VAR_7][2] = FUNC_0(VAR_3[VAR_8].b, VAR_3[VAR_8+1].b, VAR_6);
  VAR_2->function[VAR_7][3] = FUNC_0(VAR_3[VAR_8].a, VAR_3[VAR_8+1].a, VAR_6);
 }
}
