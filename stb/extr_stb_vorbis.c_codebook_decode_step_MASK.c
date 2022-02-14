
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int vorb ;
struct TYPE_6__ {int dimensions; int lookup_type; int lookup_values; scalar_t__ sequence_p; } ;
typedef TYPE_1__ Codebook ;


 float FUNC_0 (TYPE_1__*) ;
 float FUNC_1 (TYPE_1__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(vorb *VAR_2, Codebook *VAR_3, float *VAR_4, int VAR_5, int VAR_6)
{
   int VAR_7,VAR_8 = FUNC_2(VAR_2,VAR_3);
   float VAR_9 = FUNC_0(VAR_3);
   if (VAR_8 < 0) return VAR_0;
   if (VAR_5 > VAR_3->dimensions) VAR_5 = VAR_3->dimensions;
   VAR_8 *= VAR_3->dimensions;
   for (VAR_7=0; VAR_7 < VAR_5; ++VAR_7) {
      float VAR_10 = FUNC_1(VAR_3,VAR_8+VAR_7) + VAR_9;
      VAR_4[VAR_7*VAR_6] += VAR_10;
      if (VAR_3->sequence_p) VAR_9 = VAR_10;
   }

   return VAR_1;
}
