
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {float* samples; } ;
struct TYPE_6__ {TYPE_1__ sa; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
typedef TYPE_3__ pdf_function ;



__attribute__((used)) static float
FUNC_0(pdf_function *VAR_0, int *VAR_1, int *VAR_2, int *VAR_3, float *VAR_4, int VAR_5, int VAR_6)
{
 float VAR_7, VAR_8;
 int VAR_9, VAR_10;

 VAR_9 = VAR_2[VAR_5] * VAR_1[VAR_5] + VAR_6;
 VAR_10 = VAR_3[VAR_5] * VAR_1[VAR_5] + VAR_6;

 if (VAR_5 == 0)
 {
  VAR_7 = VAR_0->u.sa.samples[VAR_9];
  VAR_8 = VAR_0->u.sa.samples[VAR_10];
 }
 else
 {
  VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5 - 1, VAR_9);
  VAR_8 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5 - 1, VAR_10);
 }

 return VAR_7 + (VAR_8 - VAR_7) * VAR_4[VAR_5];
}
