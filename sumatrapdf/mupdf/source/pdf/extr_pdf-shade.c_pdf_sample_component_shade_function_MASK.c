
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pdf_function ;
struct TYPE_3__ {int** function; } ;
typedef TYPE_1__ fz_shade ;
typedef int fz_context ;


 int FUNC_0 (int *,int *,float*,int,int*,int) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, fz_shade *VAR_1, int VAR_2, pdf_function **VAR_3, float VAR_4, float VAR_5)
{
 int VAR_6, VAR_7;
 float VAR_8;

 for (VAR_6 = 0; VAR_6 < 256; VAR_6++)
 {
  VAR_8 = VAR_4 + (VAR_6 / 255.0f) * (VAR_5 - VAR_4);
  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
   FUNC_0(VAR_0, VAR_3[VAR_7], &VAR_8, 1, &VAR_1->function[VAR_6][VAR_7], 1);
  VAR_1->function[VAR_6][VAR_7] = 1;
 }
}
