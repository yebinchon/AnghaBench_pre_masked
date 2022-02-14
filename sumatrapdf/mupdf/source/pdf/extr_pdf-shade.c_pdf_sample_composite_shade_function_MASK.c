
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pdf_function ;
struct TYPE_3__ {int** function; int colorspace; } ;
typedef TYPE_1__ fz_shade ;
typedef int fz_context ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *,float*,int,int*,int) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, fz_shade *VAR_1, pdf_function *VAR_2, float VAR_3, float VAR_4)
{
 int VAR_5, VAR_6;
 float VAR_7;

 VAR_6 = FUNC_0(VAR_0, VAR_1->colorspace);
 for (VAR_5 = 0; VAR_5 < 256; VAR_5++)
 {
  VAR_7 = VAR_3 + (VAR_5 / 255.0f) * (VAR_4 - VAR_3);
  FUNC_1(VAR_0, VAR_2, &VAR_7, 1, VAR_1->function[VAR_5], VAR_6);
  VAR_1->function[VAR_5][VAR_6] = 1;
 }
}
