
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {float** A; float** B; float** C; float** window; int ** bit_reverse; } ;
typedef TYPE_1__ vorb ;
typedef int uint16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,float*,float*,float*) ;
 int FUNC_2 (int,float*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_5(vorb *VAR_2, int VAR_3, int VAR_4)
{
   int VAR_5 = VAR_4 >> 1, VAR_6 = VAR_4 >> 2, VAR_7 = VAR_4 >> 3;
   VAR_2->A[VAR_3] = (float *) FUNC_4(VAR_2, sizeof(float) * VAR_5);
   VAR_2->B[VAR_3] = (float *) FUNC_4(VAR_2, sizeof(float) * VAR_5);
   VAR_2->C[VAR_3] = (float *) FUNC_4(VAR_2, sizeof(float) * VAR_6);
   if (!VAR_2->A[VAR_3] || !VAR_2->B[VAR_3] || !VAR_2->C[VAR_3]) return FUNC_3(VAR_2, VAR_1);
   FUNC_1(VAR_4, VAR_2->A[VAR_3], VAR_2->B[VAR_3], VAR_2->C[VAR_3]);
   VAR_2->window[VAR_3] = (float *) FUNC_4(VAR_2, sizeof(float) * VAR_5);
   if (!VAR_2->window[VAR_3]) return FUNC_3(VAR_2, VAR_1);
   FUNC_2(VAR_4, VAR_2->window[VAR_3]);
   VAR_2->bit_reverse[VAR_3] = (uint16 *) FUNC_4(VAR_2, sizeof(uint16) * VAR_7);
   if (!VAR_2->bit_reverse[VAR_3]) return FUNC_3(VAR_2, VAR_1);
   FUNC_0(VAR_4, VAR_2->bit_reverse[VAR_3]);
   return VAR_0;
}
