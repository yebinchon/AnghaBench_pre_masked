
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int VOID ;
typedef size_t ULONG ;
struct TYPE_2__ {size_t tei_entity; size_t tei_instance; size_t flags; int context; } ;
typedef int PVOID ;
typedef int KIRQL ;
typedef scalar_t__ BOOLEAN ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ) ;

VOID FUNC_2(ULONG VAR_5, PVOID VAR_6, ULONG VAR_7)
{
    KIRQL VAR_8;
    ULONG VAR_9, VAR_10 = 0;
    BOOLEAN VAR_11 = VAR_3;

    FUNC_0(&VAR_2, &VAR_8);

    while (!VAR_11)
    {
         VAR_11 = VAR_4;
         for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
         {
             if (VAR_1[VAR_9].tei_entity == VAR_5 &&
                 VAR_1[VAR_9].tei_instance == VAR_10)
             {
                 VAR_10++;
                 VAR_11 = VAR_3;
             }
         }
    }

    VAR_1[VAR_0].tei_entity = VAR_5;
    VAR_1[VAR_0].tei_instance = VAR_10;
    VAR_1[VAR_0].context = VAR_6;
    VAR_1[VAR_0].flags = VAR_7;
    VAR_0++;

    FUNC_1(&VAR_2, VAR_8);
}
