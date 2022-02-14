
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ stb_uint16 ;
struct TYPE_6__ {TYPE_1__* nodes; } ;
typedef TYPE_2__ stb_matcher ;
struct TYPE_5__ {scalar_t__* eps; } ;


 scalar_t__* FUNC_0 (TYPE_2__*,scalar_t__*,scalar_t__) ;
 int FUNC_1 (scalar_t__*) ;

__attribute__((used)) static stb_uint16 * FUNC_2(stb_matcher *VAR_0, stb_uint16 *VAR_1)
{
   int VAR_2,VAR_3 = FUNC_1(VAR_1);

   for(VAR_2=0; VAR_2 < VAR_3; ++VAR_2) {
      stb_uint16 *VAR_4 = VAR_0->nodes[(int) VAR_1[VAR_2]].eps;
      if (VAR_4) {
         int VAR_5,VAR_6 = FUNC_1(VAR_4);
         for (VAR_5=0; VAR_5 < VAR_6; ++VAR_5)
            VAR_1 = FUNC_0(VAR_0, VAR_1, VAR_4[VAR_5]);
         VAR_3 = FUNC_1(VAR_1);
      }
   }

   return VAR_1;
}
