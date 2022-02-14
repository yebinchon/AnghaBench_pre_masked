
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_12__ {scalar_t__ tei_entity; scalar_t__ tei_instance; TYPE_2__* context; } ;
struct TYPE_11__ {int BcastAddr; int Mask; int Addr; int Index; } ;
struct TYPE_10__ {int Index; } ;
struct TYPE_9__ {scalar_t__ tei_entity; scalar_t__ tei_instance; } ;
typedef int TDI_STATUS ;
typedef TYPE_1__ TDIEntityID ;
typedef int PUINT ;
typedef int PNDIS_BUFFER ;
typedef TYPE_2__* PIP_INTERFACE ;
typedef TYPE_3__* PIPADDR_ENTRY ;
typedef int PCHAR ;
typedef int KIRQL ;
typedef int IPADDR_ENTRY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 TYPE_8__* VAR_5 ;
 int VAR_6 ;
 TYPE_3__* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int *) ;
 int VAR_7 ;
 int FUNC_3 (int ,int,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int ) ;

TDI_STATUS FUNC_7(TDIEntityID VAR_12,
        PNDIS_BUFFER VAR_13,
        PUINT VAR_14)
{
    KIRQL VAR_15;
    PIPADDR_ENTRY VAR_16;
    PIP_INTERFACE VAR_17;
    UINT VAR_18;

    FUNC_4(VAR_3, ("Called.\n"));


    FUNC_5(&VAR_6, &VAR_15);

    for (VAR_18 = 0; VAR_18 < VAR_4; VAR_18++)
    {
        if (VAR_5[VAR_18].tei_entity == VAR_12.tei_entity &&
            VAR_5[VAR_18].tei_instance == VAR_12.tei_instance)
            break;
    }

    if (VAR_18 == VAR_4)
    {
        FUNC_6(&VAR_6, VAR_15);
        return VAR_9;
    }

    VAR_16 = FUNC_0(VAR_8, sizeof(IPADDR_ENTRY), VAR_7);
    if (!VAR_16)
    {
        FUNC_6(&VAR_6, VAR_15);
        return VAR_10;
    }

    VAR_17 = VAR_5[VAR_18].context;

    VAR_16->Index = VAR_17->Index;
    FUNC_2(VAR_17,
       VAR_2,
       &VAR_16->Addr);
    FUNC_2(VAR_17,
       VAR_0,
       &VAR_16->Mask);
    FUNC_2(VAR_17,
       VAR_1,
       &VAR_16->BcastAddr);

    FUNC_6(&VAR_6, VAR_15);

    FUNC_3((PCHAR)VAR_16, sizeof(IPADDR_ENTRY),
  VAR_13, VAR_14);

    FUNC_1(VAR_16, VAR_7);

    return VAR_11;
}
