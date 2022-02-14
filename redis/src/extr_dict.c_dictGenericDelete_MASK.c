
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef size_t uint64_t ;
struct TYPE_16__ {void const* key; struct TYPE_16__* next; } ;
typedef TYPE_2__ dictEntry ;
struct TYPE_17__ {TYPE_1__* ht; } ;
typedef TYPE_3__ dict ;
struct TYPE_15__ {scalar_t__ used; size_t sizemask; TYPE_2__** table; } ;


 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,void const*,void const*) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 size_t FUNC_4 (TYPE_3__*,void const*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static dictEntry *FUNC_7(dict *VAR_0, const void *VAR_1, int VAR_2) {
    uint64_t VAR_3, VAR_4;
    dictEntry *VAR_5, *VAR_6;
    int VAR_7;

    if (VAR_0->ht[0].used == 0 && VAR_0->ht[1].used == 0) return ((void*)0);

    if (FUNC_5(VAR_0)) FUNC_0(VAR_0);
    VAR_3 = FUNC_4(VAR_0, VAR_1);

    for (VAR_7 = 0; VAR_7 <= 1; VAR_7++) {
        VAR_4 = VAR_3 & VAR_0->ht[VAR_7].sizemask;
        VAR_5 = VAR_0->ht[VAR_7].table[VAR_4];
        VAR_6 = ((void*)0);
        while(VAR_5) {
            if (VAR_1==VAR_5->key || FUNC_1(VAR_0, VAR_1, VAR_5->key)) {

                if (VAR_6)
                    VAR_6->next = VAR_5->next;
                else
                    VAR_0->ht[VAR_7].table[VAR_4] = VAR_5->next;
                if (!VAR_2) {
                    FUNC_2(VAR_0, VAR_5);
                    FUNC_3(VAR_0, VAR_5);
                    FUNC_6(VAR_5);
                }
                VAR_0->ht[VAR_7].used--;
                return VAR_5;
            }
            VAR_6 = VAR_5;
            VAR_5 = VAR_5->next;
        }
        if (!FUNC_5(VAR_0)) break;
    }
    return ((void*)0);
}
