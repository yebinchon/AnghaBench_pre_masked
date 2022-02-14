
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_6__ {int ref; int tabSize; int currentPos; TYPE_1__ IEnumMoniker_iface; int ** tabMoniker; } ;
typedef int IMoniker ;
typedef TYPE_1__ IEnumMoniker ;
typedef int HRESULT ;
typedef TYPE_2__ EnumMonikerImpl ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 void* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static HRESULT
FUNC_4(IMoniker** VAR_5, ULONG VAR_6,
               ULONG VAR_7, BOOL VAR_8, IEnumMoniker ** VAR_9)
{
    EnumMonikerImpl* VAR_10;
    ULONG VAR_11;

    if (VAR_7 > VAR_6)
        return VAR_0;

    VAR_10 = FUNC_1(FUNC_0(), 0, sizeof(EnumMonikerImpl));

    if (VAR_10 == 0)
        return VAR_2;


    VAR_10->IEnumMoniker_iface.lpVtbl = &VAR_4;
    VAR_10->ref = 1;

    VAR_10->tabSize=VAR_6;
    VAR_10->currentPos=VAR_7;

    VAR_10->tabMoniker=FUNC_1(FUNC_0(),0,VAR_6*sizeof(VAR_10->tabMoniker[0]));

    if (VAR_10->tabMoniker==((void*)0)) {
        FUNC_2(FUNC_0(), 0, VAR_10);
        return VAR_1;
    }

    if (VAR_8)
        for (VAR_11=0;VAR_11<VAR_6;VAR_11++){

            VAR_10->tabMoniker[VAR_11]=VAR_5[VAR_11];
            FUNC_3(VAR_5[VAR_11]);
        }
    else
        for (VAR_11 = VAR_6; VAR_11 > 0; VAR_11--){

            VAR_10->tabMoniker[VAR_6-VAR_11]=VAR_5[VAR_11 - 1];
            FUNC_3(VAR_5[VAR_11 - 1]);
        }

    *VAR_9=&VAR_10->IEnumMoniker_iface;

    return VAR_3;
}
