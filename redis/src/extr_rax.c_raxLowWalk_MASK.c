
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int raxStack ;
struct TYPE_12__ {size_t size; unsigned char* data; scalar_t__ iscompr; } ;
typedef TYPE_1__ raxNode ;
struct TYPE_13__ {TYPE_1__* head; } ;
typedef TYPE_2__ rax ;
typedef int h ;


 int FUNC_0 (char*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__**,TYPE_1__**,int) ;
 TYPE_1__** FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;

__attribute__((used)) static inline size_t FUNC_4(rax *VAR_0, unsigned char *VAR_1, size_t VAR_2, raxNode **VAR_3, raxNode ***VAR_4, int *VAR_5, raxStack *VAR_6) {
    raxNode *VAR_7 = VAR_0->head;
    raxNode **VAR_8 = &VAR_0->head;

    size_t VAR_9 = 0;
    size_t VAR_10 = 0;
    while(VAR_7->size && VAR_9 < VAR_2) {
        FUNC_0("Lookup current node",VAR_7);
        unsigned char *VAR_11 = VAR_7->data;

        if (VAR_7->iscompr) {
            for (VAR_10 = 0; VAR_10 < VAR_7->size && VAR_9 < VAR_2; VAR_10++, VAR_9++) {
                if (VAR_11[VAR_10] != VAR_1[VAR_9]) break;
            }
            if (VAR_10 != VAR_7->size) break;
        } else {



            for (VAR_10 = 0; VAR_10 < VAR_7->size; VAR_10++) {
                if (VAR_11[VAR_10] == VAR_1[VAR_9]) break;
            }
            if (VAR_10 == VAR_7->size) break;
            VAR_9++;
        }

        if (VAR_6) FUNC_3(VAR_6,VAR_7);
        raxNode **VAR_12 = FUNC_2(VAR_7);
        if (VAR_7->iscompr) VAR_10 = 0;
        FUNC_1(&VAR_7,VAR_12+VAR_10,sizeof(VAR_7));
        VAR_8 = VAR_12+VAR_10;
        VAR_10 = 0;



    }
    FUNC_0("Lookup stop node is",VAR_7);
    if (VAR_3) *VAR_3 = VAR_7;
    if (VAR_4) *VAR_4 = VAR_8;
    if (VAR_5 && VAR_7->iscompr) *VAR_5 = VAR_10;
    return VAR_9;
}
