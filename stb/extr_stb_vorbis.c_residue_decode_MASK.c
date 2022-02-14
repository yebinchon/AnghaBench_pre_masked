
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vorb ;
struct TYPE_5__ {int dimensions; } ;
typedef TYPE_1__ Codebook ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*,float*,int) ;
 int FUNC_1 (int *,TYPE_1__*,float*,int,int) ;

__attribute__((used)) static int FUNC_2(vorb *VAR_2, Codebook *VAR_3, float *VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
   int VAR_8;
   if (VAR_7 == 0) {
      int VAR_9 = VAR_6 / VAR_3->dimensions;
      for (VAR_8=0; VAR_8 < VAR_9; ++VAR_8)
         if (!FUNC_1(VAR_2, VAR_3, VAR_4+VAR_5+VAR_8, VAR_6-VAR_5-VAR_8, VAR_9))
            return VAR_0;
   } else {
      for (VAR_8=0; VAR_8 < VAR_6; ) {
         if (!FUNC_0(VAR_2, VAR_3, VAR_4+VAR_5, VAR_6-VAR_8))
            return VAR_0;
         VAR_8 += VAR_3->dimensions;
         VAR_5 += VAR_3->dimensions;
      }
   }
   return VAR_1;
}
