
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t cmsUInt32Number ;
struct TYPE_4__ {int nEntries; int Table16; } ;
typedef TYPE_1__ cmsToneCurve ;
typedef int cmsIOHANDLER ;
typedef int cmsContext ;


 int FUNC_0 (int ,int *,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int *,char*) ;

__attribute__((used)) static
void FUNC_3(cmsContext VAR_0, cmsIOHANDLER* VAR_1, cmsUInt32Number VAR_2, cmsToneCurve* VAR_3[])
{
    cmsUInt32Number VAR_4;

    for( VAR_4=0; VAR_4 < VAR_2; VAR_4++ )
    {
        if (VAR_3[VAR_4] == ((void*)0)) return;

        if (VAR_4 > 0 && FUNC_1(VAR_3[VAR_4-1]->Table16, VAR_3[VAR_4]->Table16, VAR_3[VAR_4]->nEntries)) {

            FUNC_2(VAR_0, VAR_1, "dup ");
        }
        else {
            FUNC_0(VAR_0, VAR_1, VAR_3[VAR_4]);
        }
    }

}
