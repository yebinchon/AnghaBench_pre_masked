
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * ptd; } ;
struct TYPE_5__ {int * pAdvSink; TYPE_1__ formatetc; } ;
typedef TYPE_2__ STATDATA ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(STATDATA *VAR_0)
{
    FUNC_0(VAR_0->formatetc.ptd);
    VAR_0->formatetc.ptd = ((void*)0);

    if(VAR_0->pAdvSink)
    {
        FUNC_1(VAR_0->pAdvSink);
        VAR_0->pAdvSink = ((void*)0);
    }
}
