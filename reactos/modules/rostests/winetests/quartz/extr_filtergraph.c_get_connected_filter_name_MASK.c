
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * ppPins; } ;
typedef TYPE_1__ TestFilterImpl ;
struct TYPE_9__ {int achName; int pGraph; } ;
struct TYPE_8__ {int pFilter; } ;
typedef TYPE_2__ PIN_INFO ;
typedef int IPin ;
typedef scalar_t__ HRESULT ;
typedef TYPE_3__ FILTER_INFO ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int **) ;
 scalar_t__ FUNC_5 (int *,TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int ,int ,int,char*,int ,int *,int *) ;
 int FUNC_9 (int,char*,scalar_t__) ;

__attribute__((used)) static HRESULT FUNC_10(TestFilterImpl *VAR_5, char *VAR_6)
{
    IPin *VAR_7 = ((void*)0);
    PIN_INFO VAR_8;
    FILTER_INFO VAR_9;
    HRESULT VAR_10;

    VAR_6[0] = 0;

    VAR_10 = FUNC_4(VAR_5->ppPins[0], &VAR_7);
    FUNC_9(VAR_10 == VAR_4, "IPin_ConnectedTo failed with %x\n", VAR_10);

    VAR_10 = FUNC_5(VAR_7, &VAR_8);
    FUNC_9(VAR_10 == VAR_4, "IPin_QueryPinInfo failed with %x\n", VAR_10);
    FUNC_6(VAR_7);

    FUNC_7(0xdeadbeef);
    VAR_10 = FUNC_1(VAR_8.pFilter, &VAR_9);
    if (VAR_10 == VAR_4 && FUNC_0() == VAR_1)
    {
        FUNC_2(VAR_8.pFilter);
        return VAR_2;
    }
    FUNC_9(VAR_10 == VAR_4, "IBaseFilter_QueryFilterInfo failed with %x\n", VAR_10);
    FUNC_2(VAR_8.pFilter);

    FUNC_3(VAR_9.pGraph);

    FUNC_8(VAR_0, 0, VAR_9.achName, -1, VAR_6, VAR_3, ((void*)0), ((void*)0));

    return VAR_4;
}
