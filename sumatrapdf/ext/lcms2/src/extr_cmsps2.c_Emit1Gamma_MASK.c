
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t cmsUInt32Number ;
struct TYPE_5__ {scalar_t__ nEntries; int * Table16; } ;
typedef TYPE_1__ cmsToneCurve ;
typedef int cmsIOHANDLER ;
typedef scalar_t__ cmsFloat64Number ;
typedef int cmsContext ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *,char*,...) ;
 scalar_t__ FUNC_2 (int ,TYPE_1__*,double) ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*) ;

__attribute__((used)) static
void FUNC_4(cmsContext VAR_0, cmsIOHANDLER* VAR_1, cmsToneCurve* VAR_2)
{
    cmsUInt32Number VAR_3;
    cmsFloat64Number VAR_4;

    if (VAR_2 == ((void*)0)) return;

    if (VAR_2 ->nEntries <= 0) return;


    if (FUNC_3(VAR_0, VAR_2)) return;


    VAR_4 = FUNC_2(VAR_0, VAR_2, 0.001);
     if (VAR_4 > 0) {
            FUNC_1(VAR_0, VAR_1, "{ %g exp } bind ", VAR_4);
            return;
     }

    FUNC_1(VAR_0, VAR_1, "{ ");


    FUNC_0(VAR_0, VAR_1);






    FUNC_1(VAR_0, VAR_1, " [");

    for (VAR_3=0; VAR_3 < VAR_2->nEntries; VAR_3++) {
        FUNC_1(VAR_0, VAR_1, "%d ", VAR_2->Table16[VAR_3]);
    }

    FUNC_1(VAR_0, VAR_1, "] ");

    FUNC_1(VAR_0, VAR_1, "dup ");
    FUNC_1(VAR_0, VAR_1, "length 1 sub ");
    FUNC_1(VAR_0, VAR_1, "3 -1 roll ");
    FUNC_1(VAR_0, VAR_1, "mul ");
    FUNC_1(VAR_0, VAR_1, "dup ");
    FUNC_1(VAR_0, VAR_1, "dup ");
    FUNC_1(VAR_0, VAR_1, "floor cvi ");
    FUNC_1(VAR_0, VAR_1, "exch ");
    FUNC_1(VAR_0, VAR_1, "ceiling cvi ");
    FUNC_1(VAR_0, VAR_1, "3 index ");
    FUNC_1(VAR_0, VAR_1, "exch ");
    FUNC_1(VAR_0, VAR_1, "get ");
    FUNC_1(VAR_0, VAR_1, "4 -1 roll ");
    FUNC_1(VAR_0, VAR_1, "3 -1 roll ");
    FUNC_1(VAR_0, VAR_1, "get ");
    FUNC_1(VAR_0, VAR_1, "dup ");
    FUNC_1(VAR_0, VAR_1, "3 1 roll ");
    FUNC_1(VAR_0, VAR_1, "sub ");
    FUNC_1(VAR_0, VAR_1, "3 -1 roll ");
    FUNC_1(VAR_0, VAR_1, "dup ");
    FUNC_1(VAR_0, VAR_1, "floor cvi ");
    FUNC_1(VAR_0, VAR_1, "sub ");
    FUNC_1(VAR_0, VAR_1, "mul ");
    FUNC_1(VAR_0, VAR_1, "add ");
    FUNC_1(VAR_0, VAR_1, "65535 div ");

    FUNC_1(VAR_0, VAR_1, " } bind ");
}
