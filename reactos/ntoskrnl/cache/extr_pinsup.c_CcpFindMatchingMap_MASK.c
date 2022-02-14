
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef TYPE_2__* ULONG ;
struct TYPE_16__ {scalar_t__ QuadPart; } ;
struct TYPE_15__ {struct TYPE_15__* Flink; } ;
struct TYPE_13__ {scalar_t__ QuadPart; } ;
struct TYPE_14__ {TYPE_1__ FileOffset; } ;
typedef TYPE_2__* PNOCC_BCB ;
typedef TYPE_4__* PLIST_ENTRY ;
typedef TYPE_5__* PLARGE_INTEGER ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_4__*,int ,int ) ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

ULONG
FUNC_1(PLIST_ENTRY VAR_5,
                   PLARGE_INTEGER VAR_6,
                   ULONG VAR_7)
{
    PLIST_ENTRY VAR_8;

    for (VAR_8 = VAR_5->Flink; VAR_8 != VAR_5; VAR_8 = VAR_8->Flink)
    {

        PNOCC_BCB VAR_9 = FUNC_0(VAR_8, VAR_3, VAR_4);


        if (VAR_6->QuadPart >= VAR_9->FileOffset.QuadPart &&
            VAR_6->QuadPart < VAR_9->FileOffset.QuadPart + VAR_0)
        {

            return VAR_9 - VAR_1;
        }
    }



    return VAR_2;
}
