
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_19__ {int size; unsigned char* data; scalar_t__ iskey; scalar_t__ iscompr; } ;
typedef TYPE_2__ raxNode ;
struct TYPE_21__ {size_t items; } ;
struct TYPE_20__ {int flags; size_t key_len; unsigned char* key; TYPE_2__* node; void* data; scalar_t__ (* node_cb ) (TYPE_2__**) ;TYPE_6__ stack; TYPE_1__* rt; } ;
typedef TYPE_3__ raxIterator ;
struct TYPE_18__ {TYPE_2__* head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_2__**,TYPE_2__**,int) ;
 void* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*,unsigned char*,int) ;
 int FUNC_4 (TYPE_3__*,int) ;
 TYPE_2__** FUNC_5 (TYPE_2__*) ;
 TYPE_2__* FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_6__*,TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_2__**) ;
 scalar_t__ FUNC_9 (TYPE_2__**) ;

int FUNC_10(raxIterator *VAR_2, int VAR_3) {
    if (VAR_2->flags & VAR_0) {
        return 1;
    } else if (VAR_2->flags & VAR_1) {
        VAR_2->flags &= ~VAR_1;
        return 1;
    }



    size_t VAR_4 = VAR_2->key_len;
    size_t VAR_5 = VAR_2->stack.items;
    raxNode *VAR_6 = VAR_2->node;

    while(1) {
        int VAR_7 = VAR_2->node->iscompr ? 1 : VAR_2->node->size;
        if (!VAR_3 && VAR_7) {
            FUNC_0("GO DEEPER\n");



            if (!FUNC_7(&VAR_2->stack,VAR_2->node)) return 0;
            raxNode **VAR_8 = FUNC_5(VAR_2->node);
            if (!FUNC_3(VAR_2,VAR_2->node->data,
                VAR_2->node->iscompr ? VAR_2->node->size : 1)) return 0;
            FUNC_1(&VAR_2->node,VAR_8,sizeof(VAR_2->node));


            if (VAR_2->node_cb && VAR_2->node_cb(&VAR_2->node))
                FUNC_1(VAR_8,&VAR_2->node,sizeof(VAR_2->node));



            if (VAR_2->node->iskey) {
                VAR_2->data = FUNC_2(VAR_2->node);
                return 1;
            }
        } else {




            while(1) {
                int VAR_9 = VAR_3;


                if (!VAR_3 && VAR_2->node == VAR_2->rt->head) {
                    VAR_2->flags |= VAR_0;
                    VAR_2->stack.items = VAR_5;
                    VAR_2->key_len = VAR_4;
                    VAR_2->node = VAR_6;
                    return 1;
                }


                unsigned char VAR_10 = VAR_2->key[VAR_2->key_len-1];
                if (!VAR_3) {
                    VAR_2->node = FUNC_6(&VAR_2->stack);
                } else {
                    VAR_3 = 0;
                }


                int VAR_11 = VAR_2->node->iscompr ? VAR_2->node->size : 1;
                FUNC_4(VAR_2,VAR_11);



                if (!VAR_2->node->iscompr && VAR_2->node->size > (VAR_9 ? 0 : 1)) {
                    raxNode **VAR_12 = FUNC_5(VAR_2->node);
                    int VAR_13 = 0;
                    while (VAR_13 < VAR_2->node->size) {
                        FUNC_0("SCAN NEXT %c\n", VAR_2->node->data[VAR_13]);
                        if (VAR_2->node->data[VAR_13] > VAR_10) break;
                        VAR_13++;
                        VAR_12++;
                    }
                    if (VAR_13 != VAR_2->node->size) {
                        FUNC_0("SCAN found a new node\n");
                        FUNC_3(VAR_2,VAR_2->node->data+VAR_13,1);
                        if (!FUNC_7(&VAR_2->stack,VAR_2->node)) return 0;
                        FUNC_1(&VAR_2->node,VAR_12,sizeof(VAR_2->node));


                        if (VAR_2->node_cb && VAR_2->node_cb(&VAR_2->node))
                            FUNC_1(VAR_12,&VAR_2->node,sizeof(VAR_2->node));
                        if (VAR_2->node->iskey) {
                            VAR_2->data = FUNC_2(VAR_2->node);
                            return 1;
                        }
                        break;
                    }
                }
            }
        }
    }
}
