
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;


struct TYPE_28__ {scalar_t__ oom; } ;
typedef TYPE_1__ raxStack ;
struct TYPE_29__ {int iscompr; scalar_t__ iskey; int size; struct TYPE_29__** data; scalar_t__ isnull; } ;
typedef TYPE_2__ raxNode ;
struct TYPE_30__ {TYPE_2__* head; int numnodes; int numele; } ;
typedef TYPE_3__ rax ;
typedef int new ;
typedef int h ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__**,TYPE_2__**,int) ;
 TYPE_2__** FUNC_3 (TYPE_2__*,TYPE_2__*) ;
 void* FUNC_4 (TYPE_2__*) ;
 size_t FUNC_5 (TYPE_3__*,unsigned char*,size_t,TYPE_2__**,int *,int*,TYPE_1__*) ;
 TYPE_2__** FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (size_t) ;
 TYPE_2__* FUNC_8 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 TYPE_2__* FUNC_11 (TYPE_1__*) ;
 TYPE_2__* FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_2__*) ;
 TYPE_2__* FUNC_14 (size_t) ;

int FUNC_15(rax *VAR_1, unsigned char *VAR_2, size_t VAR_3, void **VAR_4) {
    raxNode *VAR_5;
    raxStack VAR_6;

    FUNC_0("### Delete: %.*s\n", (int)VAR_3, VAR_2);
    FUNC_10(&VAR_6);
    int VAR_7 = 0;
    size_t VAR_8 = FUNC_5(VAR_1,VAR_2,VAR_3,&VAR_5,((void*)0),&VAR_7,&VAR_6);
    if (VAR_8 != VAR_3 || (VAR_5->iscompr && VAR_7 != 0) || !VAR_5->iskey) {
        FUNC_9(&VAR_6);
        return 0;
    }
    if (VAR_4) *VAR_4 = FUNC_4(VAR_5);
    VAR_5->iskey = 0;
    VAR_1->numele--;







    int VAR_9 = 0;


    if (VAR_5->size == 0) {
        FUNC_0("Key deleted in node without children. Cleanup needed.\n");
        raxNode *VAR_10 = ((void*)0);
        while(VAR_5 != VAR_1->head) {
            VAR_10 = VAR_5;
            FUNC_0("Freeing child %p [%.*s] key:%d\n", (void*)VAR_10,
                (int)VAR_10->size, (char*)VAR_10->data, VAR_10->iskey);
            FUNC_13(VAR_10);
            VAR_1->numnodes--;
            VAR_5 = FUNC_12(&VAR_6);


            if (VAR_5->iskey || (!VAR_5->iscompr && VAR_5->size != 1)) break;
        }
        if (VAR_10) {
            FUNC_0("Unlinking child %p from parent %p\n",
                (void*)VAR_10, (void*)VAR_5);
            raxNode *VAR_11 = FUNC_8(VAR_5,VAR_10);
            if (VAR_11 != VAR_5) {
                raxNode *VAR_12 = FUNC_11(&VAR_6);
                raxNode **VAR_13;
                if (VAR_12 == ((void*)0)) {
                    VAR_13 = &VAR_1->head;
                } else {
                    VAR_13 = FUNC_3(VAR_12,VAR_5);
                }
                FUNC_2(VAR_13,&VAR_11,sizeof(VAR_11));
            }



            if (VAR_11->size == 1 && VAR_11->iskey == 0) {
                VAR_9 = 1;
                VAR_5 = VAR_11;
            }
        }
    } else if (VAR_5->size == 1) {


        VAR_9 = 1;
    }



    if (VAR_9 && VAR_6.oom) VAR_9 = 0;
    if (VAR_9) {
        FUNC_0("After removing %.*s:\n", (int)VAR_3, VAR_2);
        FUNC_1("Compression may be needed",VAR_5);
        FUNC_0("Seek start node\n");




        raxNode *VAR_14;
        while(1) {
            VAR_14 = FUNC_12(&VAR_6);
            if (!VAR_14 || VAR_14->iskey ||
                (!VAR_14->iscompr && VAR_14->size != 1)) break;
            VAR_5 = VAR_14;
            FUNC_1("Going up to",VAR_5);
        }
        raxNode *VAR_15 = VAR_5;


        size_t VAR_16 = VAR_5->size;
        int VAR_17 = 1;
        while(VAR_5->size != 0) {
            raxNode **VAR_18 = FUNC_6(VAR_5);
            FUNC_2(&VAR_5,VAR_18,sizeof(VAR_5));
            if (VAR_5->iskey || (!VAR_5->iscompr && VAR_5->size != 1)) break;


            if (VAR_16 + VAR_5->size > VAR_0) break;
            VAR_17++;
            VAR_16 += VAR_5->size;
        }
        if (VAR_17 > 1) {

            size_t VAR_19 =
                sizeof(raxNode)+VAR_16+FUNC_7(VAR_16)+sizeof(raxNode*);
            raxNode *VAR_20 = FUNC_14(VAR_19);


            if (VAR_20 == ((void*)0)) {
                FUNC_9(&VAR_6);
                return 1;
            }
            VAR_20->iskey = 0;
            VAR_20->isnull = 0;
            VAR_20->iscompr = 1;
            VAR_20->size = VAR_16;
            VAR_1->numnodes++;




            VAR_16 = 0;
            VAR_5 = VAR_15;
            while(VAR_5->size != 0) {
                FUNC_2(VAR_20->data+VAR_16,VAR_5->data,VAR_5->size);
                VAR_16 += VAR_5->size;
                raxNode **VAR_21 = FUNC_6(VAR_5);
                raxNode *VAR_22 = VAR_5;
                FUNC_2(&VAR_5,VAR_21,sizeof(VAR_5));
                FUNC_13(VAR_22); VAR_1->numnodes--;
                if (VAR_5->iskey || (!VAR_5->iscompr && VAR_5->size != 1)) break;
            }
            FUNC_1("New node",VAR_20);



            raxNode **VAR_23 = FUNC_6(VAR_20);
            FUNC_2(VAR_23,&VAR_5,sizeof(VAR_5));


            if (VAR_14) {
                raxNode **VAR_24 = FUNC_3(VAR_14,VAR_15);
                FUNC_2(VAR_24,&VAR_20,sizeof(VAR_20));
            } else {
                VAR_1->head = VAR_20;
            }

            FUNC_0("Compressed %d nodes, %d total bytes\n",
                VAR_17, (int)VAR_16);
        }
    }
    FUNC_9(&VAR_6);
    return 1;
}
