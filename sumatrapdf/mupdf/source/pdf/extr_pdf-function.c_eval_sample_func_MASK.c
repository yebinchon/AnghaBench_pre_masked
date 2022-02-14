
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int* size; float* samples; int ** decode; int ** encode; } ;
struct TYPE_7__ {TYPE_1__ sa; } ;
struct TYPE_8__ {int m; int** domain; int n; int** range; TYPE_2__ u; } ;
typedef TYPE_3__ pdf_function ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (float) ;
 int FUNC_1 (float) ;
 float FUNC_2 (float const,int,int) ;
 float FUNC_3 (TYPE_3__*,int*,int*,int*,float*,int,int) ;
 float FUNC_4 (float,int,int,int ,int ) ;

__attribute__((used)) static void
FUNC_5(fz_context *VAR_1, pdf_function *VAR_2, const float *VAR_3, float *VAR_4)
{
 int VAR_5[VAR_0], VAR_6[VAR_0], VAR_7[VAR_0];
 float VAR_8[VAR_0];
 float VAR_9;
 int VAR_10;


 for (VAR_10 = 0; VAR_10 < VAR_2->m; VAR_10++)
 {
  VAR_9 = FUNC_2(VAR_3[VAR_10], VAR_2->domain[VAR_10][0], VAR_2->domain[VAR_10][1]);
  VAR_9 = FUNC_4(VAR_9, VAR_2->domain[VAR_10][0], VAR_2->domain[VAR_10][1],
   VAR_2->u.sa.encode[VAR_10][0], VAR_2->u.sa.encode[VAR_10][1]);
  VAR_9 = FUNC_2(VAR_9, 0, VAR_2->u.sa.size[VAR_10] - 1);
  VAR_5[VAR_10] = FUNC_1(VAR_9);
  VAR_6[VAR_10] = FUNC_0(VAR_9);
  VAR_8[VAR_10] = VAR_9 - VAR_5[VAR_10];
 }

 VAR_7[0] = VAR_2->n;
 for (VAR_10 = 1; VAR_10 < VAR_2->m; VAR_10++)
  VAR_7[VAR_10] = VAR_7[VAR_10 - 1] * VAR_2->u.sa.size[VAR_10-1];

 for (VAR_10 = 0; VAR_10 < VAR_2->n; VAR_10++)
 {
  if (VAR_2->m == 1)
  {
   float VAR_11 = VAR_2->u.sa.samples[VAR_5[0] * VAR_2->n + VAR_10];
   float VAR_12 = VAR_2->u.sa.samples[VAR_6[0] * VAR_2->n + VAR_10];

   float VAR_13 = VAR_11 + (VAR_12 - VAR_11) * VAR_8[0];

   VAR_4[VAR_10] = FUNC_4(VAR_13, 0, 1, VAR_2->u.sa.decode[VAR_10][0], VAR_2->u.sa.decode[VAR_10][1]);
   VAR_4[VAR_10] = FUNC_2(VAR_4[VAR_10], VAR_2->range[VAR_10][0], VAR_2->range[VAR_10][1]);
  }

  else if (VAR_2->m == 2)
  {
   int VAR_14 = VAR_2->n;
   int VAR_15 = VAR_14 * VAR_2->u.sa.size[0];

   float VAR_16 = VAR_2->u.sa.samples[VAR_5[0] * VAR_14 + VAR_5[1] * VAR_15 + VAR_10];
   float VAR_17 = VAR_2->u.sa.samples[VAR_6[0] * VAR_14 + VAR_5[1] * VAR_15 + VAR_10];
   float VAR_18 = VAR_2->u.sa.samples[VAR_5[0] * VAR_14 + VAR_6[1] * VAR_15 + VAR_10];
   float VAR_19 = VAR_2->u.sa.samples[VAR_6[0] * VAR_14 + VAR_6[1] * VAR_15 + VAR_10];

   float VAR_20 = VAR_16 + (VAR_17 - VAR_16) * VAR_8[0];
   float VAR_21 = VAR_18 + (VAR_19 - VAR_18) * VAR_8[0];
   float VAR_22 = VAR_20 + (VAR_21 - VAR_20) * VAR_8[1];

   VAR_4[VAR_10] = FUNC_4(VAR_22, 0, 1, VAR_2->u.sa.decode[VAR_10][0], VAR_2->u.sa.decode[VAR_10][1]);
   VAR_4[VAR_10] = FUNC_2(VAR_4[VAR_10], VAR_2->range[VAR_10][0], VAR_2->range[VAR_10][1]);
  }

  else
  {
   VAR_9 = FUNC_3(VAR_2, VAR_7, VAR_5, VAR_6, VAR_8, VAR_2->m - 1, VAR_10);
   VAR_4[VAR_10] = FUNC_4(VAR_9, 0, 1, VAR_2->u.sa.decode[VAR_10][0], VAR_2->u.sa.decode[VAR_10][1]);
   VAR_4[VAR_10] = FUNC_2(VAR_4[VAR_10], VAR_2->range[VAR_10][0], VAR_2->range[VAR_10][1]);
  }
 }
}
