
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int szPath; struct TYPE_5__* prev; struct TYPE_5__* next; } ;
typedef int LPTSTR ;
typedef TYPE_1__* LPDIRENTRY ;
typedef int INT ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 () ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;

__attribute__((used)) static INT
FUNC_6 (LPTSTR VAR_6)
{
    LPDIRENTRY VAR_7 = FUNC_4(FUNC_0(VAR_0, VAR_5[FUNC_3(VAR_6) + 1]));
    if (!VAR_7)
    {
        FUNC_1("Cannot allocate memory for lpDir\n");
        FUNC_5();
        return -1;
    }

    VAR_7->prev = ((void*)0);
    VAR_7->next = VAR_2;
    if (VAR_2 == ((void*)0))
        VAR_1 = VAR_7;
    else
        VAR_2->prev = VAR_7;
    VAR_2 = VAR_7;

    FUNC_2(VAR_7->szPath, VAR_6);

    VAR_4++;

    return VAR_3 = 0;
}
