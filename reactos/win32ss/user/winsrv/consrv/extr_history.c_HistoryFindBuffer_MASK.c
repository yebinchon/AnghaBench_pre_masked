
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int USHORT ;
struct TYPE_11__ {int * Buffer; int MaximumLength; int Length; } ;
typedef TYPE_1__ UNICODE_STRING ;
struct TYPE_12__ {struct TYPE_12__* Flink; } ;
struct TYPE_14__ {TYPE_2__ HistoryBuffers; } ;
struct TYPE_13__ {int ExeName; } ;
typedef int * PVOID ;
typedef TYPE_2__* PLIST_ENTRY ;
typedef TYPE_3__* PHISTORY_BUFFER ;
typedef TYPE_4__* PCONSRV_CONSOLE ;
typedef scalar_t__ BOOLEAN ;


 TYPE_3__* FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_4__*,int *,int ,int **,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *,int ) ;
 int VAR_2 ;

__attribute__((used)) static PHISTORY_BUFFER
FUNC_4(PCONSRV_CONSOLE VAR_3,
                  PVOID VAR_4,
                  USHORT VAR_5,
                  BOOLEAN VAR_6)
{
    UNICODE_STRING VAR_7;

    PLIST_ENTRY VAR_8;
    PHISTORY_BUFFER VAR_9 = ((void*)0);

    if (VAR_4 == ((void*)0)) return ((void*)0);

    if (VAR_6)
    {
        VAR_7.Buffer = VAR_4;

        VAR_7.MaximumLength = VAR_5;
    }
    else
    {
        if (!FUNC_2(VAR_3,
                                       VAR_4, VAR_5,
                                       &VAR_7.Buffer, &VAR_7.MaximumLength))
        {
            return ((void*)0);
        }
    }
    VAR_7.Length = VAR_7.MaximumLength;

    VAR_8 = VAR_3->HistoryBuffers.Flink;
    while (VAR_8 != &VAR_3->HistoryBuffers)
    {
        VAR_9 = FUNC_0(VAR_8, VAR_0, VAR_1);


        if (FUNC_3(&VAR_7, &VAR_9->ExeName, VAR_2))
        {
            if (!VAR_6) FUNC_1(VAR_7.Buffer);
            return VAR_9;
        }

        VAR_8 = VAR_8->Flink;
    }

    if (!VAR_6) FUNC_1(VAR_7.Buffer);
    return ((void*)0);
}
