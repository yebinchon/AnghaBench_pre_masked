
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int value; int key; } ;
struct TYPE_4__ {int numpairs; TYPE_2__* pairs; } ;
typedef TYPE_1__ STANZA ;
typedef TYPE_2__ PAIR ;


 int FUNC_0 (int ) ;

void FUNC_1(STANZA *VAR_0)
{
    PAIR *VAR_1 = VAR_0->pairs;
    int VAR_2 = VAR_0->numpairs;

    for ( ; --VAR_2 >= 0; VAR_1++) {
        FUNC_0(VAR_1->key);
        FUNC_0(VAR_1->value);
    }
    VAR_0->numpairs = 0;
}
