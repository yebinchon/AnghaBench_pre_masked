
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_10__ {struct TYPE_10__* Next; } ;
struct TYPE_8__ {TYPE_3__* Head; } ;
struct TYPE_9__ {TYPE_1__ Private; } ;
typedef int PVOID ;
typedef scalar_t__* PUINT ;
typedef TYPE_2__* PNDIS_PACKET ;
typedef TYPE_3__* PNDIS_BUFFER ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;

VOID FUNC_2(PNDIS_PACKET VAR_0,
       PNDIS_BUFFER *VAR_1,
       PVOID *VAR_2,
       PUINT VAR_3,
       PUINT VAR_4)
{
    PNDIS_BUFFER VAR_5;

    VAR_5 = (VAR_0)->Private.Head;
    *(VAR_1) = VAR_5;
    *(VAR_2) = FUNC_1(VAR_5);
    if (VAR_5 != ((void*)0)) {
        *(VAR_3) = FUNC_0(VAR_5);
        VAR_5 = VAR_5->Next;
    } else
        *(VAR_3) = 0;
    *(VAR_4) = *(VAR_3);
    while (VAR_5 != ((void*)0)) {
        *(VAR_4) += FUNC_0(VAR_5);
        VAR_5 = VAR_5->Next;
    }
}
