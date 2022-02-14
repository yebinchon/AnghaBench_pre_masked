
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t cmsUInt32Number ;
typedef int cmsContext ;
struct TYPE_2__ {size_t nCurves; void** Curves; } ;
typedef TYPE_1__ Curves16Data ;


 int FUNC_0 (int ,void*) ;

__attribute__((used)) static
void FUNC_1(cmsContext VAR_0, void* VAR_1)
{
     Curves16Data* VAR_2 = (Curves16Data*) VAR_1;
     cmsUInt32Number VAR_3;

     for (VAR_3=0; VAR_3 < VAR_2 -> nCurves; VAR_3++) {

         FUNC_0(VAR_0, VAR_2 ->Curves[VAR_3]);
     }

     FUNC_0(VAR_0, VAR_2 ->Curves);
     FUNC_0(VAR_0, VAR_1);
}
