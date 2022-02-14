
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_4__ {struct TYPE_4__* Next; int ExeName; } ;
typedef TYPE_1__* PALIAS_HEADER ;
typedef scalar_t__ INT ;


 scalar_t__ FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static VOID
FUNC_1(PALIAS_HEADER* VAR_1,
                     PALIAS_HEADER VAR_2)
{
    PALIAS_HEADER VAR_3;
    PALIAS_HEADER *VAR_4 = VAR_1;
    INT VAR_5;

    while ((VAR_3 = *VAR_4) != ((void*)0))
    {
        VAR_5 = FUNC_0(&VAR_2->ExeName, &VAR_3->ExeName, VAR_0);
        if (VAR_5 < 0) break;

        VAR_4 = &VAR_3->Next;
    }

    *VAR_4 = VAR_2;
    VAR_2->Next = VAR_3;
}
