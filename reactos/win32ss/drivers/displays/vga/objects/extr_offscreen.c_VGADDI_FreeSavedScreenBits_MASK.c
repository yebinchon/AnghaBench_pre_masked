
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_7__ {int * Flink; int * Blink; } ;
struct TYPE_6__ {TYPE_3__ ListEntry; scalar_t__ Size; scalar_t__ Free; } ;
typedef TYPE_1__* PSAVED_SCREEN_BITS ;


 TYPE_1__* FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

VOID
FUNC_3(PSAVED_SCREEN_BITS VAR_4)
{
    VAR_4->Free = VAR_3;

    if (VAR_4->ListEntry.Blink != &VAR_2)
    {
        PSAVED_SCREEN_BITS VAR_5;

        VAR_5 = FUNC_0(VAR_4->ListEntry.Blink,
                                     VAR_1, VAR_0);
        if (VAR_5->Free)
        {
            VAR_5->Size += VAR_4->Size;
            FUNC_2(&VAR_4->ListEntry);
            FUNC_1(VAR_4);
            VAR_4 = VAR_5;
        }
    }
    if (VAR_4->ListEntry.Flink != &VAR_2)
    {
        PSAVED_SCREEN_BITS VAR_6;

        VAR_6 = FUNC_0(VAR_4->ListEntry.Flink, VAR_1,
                                 VAR_0);
        if (VAR_6->Free)
        {
            VAR_4->Size += VAR_6->Size;
            FUNC_2(&VAR_4->ListEntry);
            FUNC_1(VAR_4);
        }
    }
}
