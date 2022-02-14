
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int used; TYPE_2__** table; } ;
typedef TYPE_1__ dictht ;
struct TYPE_16__ {struct TYPE_16__* next; } ;
typedef TYPE_2__ dictEntry ;
struct TYPE_17__ {TYPE_1__* ht; } ;
typedef TYPE_3__ dict ;


 long FUNC_0 (TYPE_3__*,void*,int ,TYPE_2__**) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,void*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*,void*) ;
 TYPE_2__* FUNC_5 (int) ;

dictEntry *FUNC_6(dict *VAR_0, void *VAR_1, dictEntry **VAR_2)
{
    long VAR_3;
    dictEntry *VAR_4;
    dictht *VAR_5;

    if (FUNC_3(VAR_0)) FUNC_1(VAR_0);



    if ((VAR_3 = FUNC_0(VAR_0, VAR_1, FUNC_2(VAR_0,VAR_1), VAR_2)) == -1)
        return ((void*)0);





    VAR_5 = FUNC_3(VAR_0) ? &VAR_0->ht[1] : &VAR_0->ht[0];
    VAR_4 = FUNC_5(sizeof(*VAR_4));
    VAR_4->next = VAR_5->table[VAR_3];
    VAR_5->table[VAR_3] = VAR_4;
    VAR_5->used++;


    FUNC_4(VAR_0, VAR_4, VAR_1);
    return VAR_4;
}
