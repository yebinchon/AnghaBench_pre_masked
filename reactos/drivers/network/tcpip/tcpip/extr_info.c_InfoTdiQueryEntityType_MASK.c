
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULONG ;
typedef size_t UINT ;
struct TYPE_5__ {scalar_t__ tei_entity; scalar_t__ tei_instance; size_t flags; } ;
struct TYPE_4__ {scalar_t__ tei_entity; scalar_t__ tei_instance; } ;
typedef int TDI_STATUS ;
typedef TYPE_1__ TDIEntityID ;
typedef int PUINT ;
typedef int PNDIS_BUFFER ;
typedef int PCHAR ;
typedef int KIRQL ;


 size_t VAR_0 ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;

TDI_STATUS FUNC_3(TDIEntityID VAR_5,
                                  PNDIS_BUFFER VAR_6,
      PUINT VAR_7)
{
    KIRQL VAR_8;
    UINT VAR_9, VAR_10 = 0;

    FUNC_1(&VAR_2, &VAR_8);

    for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
    {
        if (VAR_1[VAR_9].tei_entity == VAR_5.tei_entity &&
            VAR_1[VAR_9].tei_instance == VAR_5.tei_instance)
            break;
    }

    if (VAR_9 == VAR_0)
    {
        FUNC_2(&VAR_2, VAR_8);
        return VAR_3;
    }

    VAR_10 = VAR_1[VAR_9].flags;

    FUNC_0((PCHAR)&VAR_10,
                sizeof(ULONG),
                VAR_6,
                VAR_7);

    FUNC_2(&VAR_2, VAR_8);

    return VAR_4;
}
