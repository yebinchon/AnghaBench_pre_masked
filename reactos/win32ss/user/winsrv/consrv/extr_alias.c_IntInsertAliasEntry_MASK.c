
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_6__ {struct TYPE_6__* Next; int Source; } ;
struct TYPE_5__ {TYPE_2__* Data; } ;
typedef TYPE_1__* PALIAS_HEADER ;
typedef TYPE_2__* PALIAS_ENTRY ;
typedef scalar_t__ INT ;


 scalar_t__ FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static VOID
FUNC_1(PALIAS_HEADER VAR_1,
                    PALIAS_ENTRY VAR_2)
{
    PALIAS_ENTRY VAR_3;
    PALIAS_ENTRY *VAR_4 = &VAR_1->Data;
    INT VAR_5;

    while ((VAR_3 = *VAR_4) != ((void*)0))
    {
        VAR_5 = FUNC_0(&VAR_2->Source, &VAR_3->Source, VAR_0);
        if (VAR_5 < 0) break;

        VAR_4 = &VAR_3->Next;
    }

    *VAR_4 = VAR_2;
    VAR_2->Next = VAR_3;
}
