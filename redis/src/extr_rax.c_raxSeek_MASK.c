
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_10__ ;


struct TYPE_20__ {unsigned char* data; int size; scalar_t__ iscompr; } ;
typedef TYPE_1__ raxNode ;
struct TYPE_22__ {size_t items; TYPE_1__** stack; scalar_t__ oom; } ;
struct TYPE_21__ {int flags; TYPE_4__* node; scalar_t__ key; scalar_t__ key_len; void* data; TYPE_3__ stack; TYPE_10__* rt; } ;
typedef TYPE_2__ raxIterator ;
typedef int aux ;
struct TYPE_23__ {int* data; int size; scalar_t__ iskey; scalar_t__ iscompr; } ;
struct TYPE_19__ {scalar_t__ numele; TYPE_4__* head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int,...) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_1__**,TYPE_1__**,int) ;
 void* FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_2__*,unsigned char*,int) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,int) ;
 size_t FUNC_7 (TYPE_10__*,unsigned char*,size_t,TYPE_4__**,int *,int*,TYPE_3__*) ;
 TYPE_1__** FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*,TYPE_4__*) ;

int FUNC_12(raxIterator *VAR_3, const char *VAR_4, unsigned char *VAR_5, size_t VAR_6) {
    int VAR_7 = 0, VAR_8 = 0, VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;

    VAR_3->stack.items = 0;
    VAR_3->flags |= VAR_1;
    VAR_3->flags &= ~VAR_0;
    VAR_3->key_len = 0;
    VAR_3->node = ((void*)0);


    if (VAR_4[0] == '>') {
        VAR_9 = 1;
        if (VAR_4[1] == '=') VAR_7 = 1;
    } else if (VAR_4[0] == '<') {
        VAR_8 = 1;
        if (VAR_4[1] == '=') VAR_7 = 1;
    } else if (VAR_4[0] == '=') {
        VAR_7 = 1;
    } else if (VAR_4[0] == '^') {
        VAR_10 = 1;
    } else if (VAR_4[0] == '$') {
        VAR_11 = 1;
    } else {
        VAR_2 = 0;
        return 0;
    }



    if (VAR_3->rt->numele == 0) {
        VAR_3->flags |= VAR_0;
        return 1;
    }

    if (VAR_10) {


        return FUNC_12(VAR_3,">=",((void*)0),0);
    }

    if (VAR_11) {


        VAR_3->node = VAR_3->rt->head;
        if (!FUNC_9(VAR_3)) return 0;
        FUNC_0(VAR_3->node->iskey);
        VAR_3->data = FUNC_3(VAR_3->node);
        return 1;
    }




    int VAR_12 = 0;
    size_t VAR_13 = FUNC_7(VAR_3->rt,VAR_5,VAR_6,&VAR_3->node,((void*)0),&VAR_12,&VAR_3->stack);


    if (VAR_3->stack.oom) return 0;

    if (VAR_7 && VAR_13 == VAR_6 && (!VAR_3->node->iscompr || VAR_12 == 0) &&
        VAR_3->node->iskey)
    {


        if (!FUNC_4(VAR_3,VAR_5,VAR_6)) return 0;
        VAR_3->data = FUNC_3(VAR_3->node);
    } else if (VAR_8 || VAR_9) {





        if (!FUNC_11(&VAR_3->stack,VAR_3->node)) return 0;
        for (size_t VAR_14 = 1; VAR_14 < VAR_3->stack.items; VAR_14++) {
            raxNode *VAR_15 = VAR_3->stack.stack[VAR_14-1];
            raxNode *VAR_16 = VAR_3->stack.stack[VAR_14];
            if (VAR_15->iscompr) {
                if (!FUNC_4(VAR_3,VAR_15->data,VAR_15->size))
                    return 0;
            } else {
                raxNode **VAR_17 = FUNC_8(VAR_15);
                unsigned char *VAR_18 = VAR_15->data;
                while(1) {
                    raxNode *VAR_19;
                    FUNC_2(&VAR_19,VAR_17,sizeof(VAR_19));
                    if (VAR_19 == VAR_16) break;
                    VAR_17++;
                    VAR_18++;
                }
                if (!FUNC_4(VAR_3,VAR_18,1)) return 0;
            }
        }
        FUNC_10(&VAR_3->stack);



        FUNC_1("After initial seek: i=%d len=%d key=%.*s\n",
            (int)VAR_13, (int)VAR_6, (int)VAR_3->key_len, VAR_3->key);
        if (VAR_13 != VAR_6 && !VAR_3->node->iscompr) {





            if (!FUNC_4(VAR_3,VAR_5+VAR_13,1)) return 0;
            FUNC_1("Seek normal node on mismatch: %.*s\n",
                (int)VAR_3->key_len, (char*)VAR_3->key);

            VAR_3->flags &= ~VAR_1;
            if (VAR_8 && !FUNC_6(VAR_3,1)) return 0;
            if (VAR_9 && !FUNC_5(VAR_3,1)) return 0;
            VAR_3->flags |= VAR_1;
        } else if (VAR_13 != VAR_6 && VAR_3->node->iscompr) {
            FUNC_1("Compressed mismatch: %.*s\n",
                (int)VAR_3->key_len, (char*)VAR_3->key);

            int VAR_20 = VAR_3->node->data[VAR_12];
            int VAR_21 = VAR_5[VAR_13];
            VAR_3->flags &= ~VAR_1;
            if (VAR_9) {



                if (VAR_20 > VAR_21) {
                    if (!FUNC_5(VAR_3,0)) return 0;
                } else {
                    if (!FUNC_4(VAR_3,VAR_3->node->data,VAR_3->node->size))
                        return 0;
                    if (!FUNC_5(VAR_3,1)) return 0;
                }
            }
            if (VAR_8) {




                if (VAR_20 < VAR_21) {
                    if (!FUNC_9(VAR_3)) return 0;
                    VAR_3->data = FUNC_3(VAR_3->node);
                } else {
                    if (!FUNC_4(VAR_3,VAR_3->node->data,VAR_3->node->size))
                        return 0;
                    if (!FUNC_6(VAR_3,1)) return 0;
                }
            }
            VAR_3->flags |= VAR_1;
        } else {
            FUNC_1("No mismatch: %.*s\n",
                (int)VAR_3->key_len, (char*)VAR_3->key);





            VAR_3->flags &= ~VAR_1;
            if (VAR_3->node->iscompr && VAR_3->node->iskey && VAR_12 && VAR_8) {
            } else {
                if (VAR_9 && !FUNC_5(VAR_3,0)) return 0;
                if (VAR_8 && !FUNC_6(VAR_3,0)) return 0;
            }
            VAR_3->flags |= VAR_1;
        }
    } else {

        VAR_3->flags |= VAR_0;
        return 1;
    }
    return 1;
}
