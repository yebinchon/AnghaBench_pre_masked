
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ stb_uint16 ;
struct TYPE_5__ {TYPE_1__* nodes; } ;
typedef TYPE_2__ stb_matcher ;
struct TYPE_4__ {scalar_t__ active; scalar_t__ goal; } ;


 int FUNC_0 (scalar_t__*) ;

__attribute__((used)) static int FUNC_1(stb_matcher *VAR_0, stb_uint16 *VAR_1)
{
   int VAR_2, VAR_3=0;
   for (VAR_2=0; VAR_2 < FUNC_0(VAR_1); ++VAR_2) {
      VAR_3 += VAR_0->nodes[(int) VAR_1[VAR_2]].goal;
      VAR_0->nodes[(int) VAR_1[VAR_2]].active = 0;
   }
   return VAR_3;
}
