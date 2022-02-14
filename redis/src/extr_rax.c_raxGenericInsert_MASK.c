
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


typedef int trimmed ;
typedef int splitnode ;
struct TYPE_26__ {int iscompr; int iskey; int isnull; int size; struct TYPE_26__** data; } ;
typedef TYPE_1__ raxNode ;
struct TYPE_27__ {int numele; int numnodes; } ;
typedef TYPE_2__ rax ;
typedef int postfix ;
typedef int next ;
typedef int h ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_1__**,TYPE_1__**,int) ;
 TYPE_1__* FUNC_3 (TYPE_1__*,unsigned char,TYPE_1__**,TYPE_1__***) ;
 TYPE_1__* FUNC_4 (TYPE_1__*,unsigned char*,size_t,TYPE_1__**) ;
 void* FUNC_5 (TYPE_1__*) ;
 size_t FUNC_6 (TYPE_2__*,unsigned char*,size_t,TYPE_1__**,TYPE_1__***,int*,int *) ;
 TYPE_1__* FUNC_7 (int,int) ;
 TYPE_1__** FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int) ;
 TYPE_1__* FUNC_10 (TYPE_1__*,void*) ;
 scalar_t__ FUNC_11 (TYPE_2__*,unsigned char*,size_t,int *) ;
 int FUNC_12 (TYPE_1__*,void*) ;
 int FUNC_13 (TYPE_1__*) ;
 TYPE_1__* FUNC_14 (size_t) ;

int FUNC_15(rax *VAR_3, unsigned char *VAR_4, size_t VAR_5, void *VAR_6, void **VAR_7, int VAR_8) {
    size_t VAR_9;
    int VAR_10 = 0;



    raxNode *VAR_11, **VAR_12;

    FUNC_1("### Insert %.*s with value %p\n", (int)VAR_5, VAR_4, VAR_6);
    VAR_9 = FUNC_6(VAR_3,VAR_4,VAR_5,&VAR_11,&VAR_12,&VAR_10,((void*)0));






    if (VAR_9 == VAR_5 && (!VAR_11->iscompr || VAR_10 == 0 )) {
        FUNC_1("### Insert: node representing key exists\n");

        if (!VAR_11->iskey || (VAR_11->isnull && VAR_8)) {
            VAR_11 = FUNC_10(VAR_11,VAR_6);
            if (VAR_11) FUNC_2(VAR_12,&VAR_11,sizeof(VAR_11));
        }
        if (VAR_11 == ((void*)0)) {
            VAR_2 = VAR_0;
            return 0;
        }


        if (VAR_11->iskey) {
            if (VAR_7) *VAR_7 = FUNC_5(VAR_11);
            if (VAR_8) FUNC_12(VAR_11,VAR_6);
            VAR_2 = 0;
            return 0;
        }



        FUNC_12(VAR_11,VAR_6);
        VAR_3->numele++;
        return 1;
    }
    if (VAR_11->iscompr && VAR_9 != VAR_5) {
        FUNC_1("ALGO 1: Stopped at compressed node %.*s (%p)\n",
            VAR_11->size, VAR_11->data, (void*)VAR_11);
        FUNC_1("Still to insert: %.*s\n", (int)(VAR_5-VAR_9), VAR_4+VAR_9);
        FUNC_1("Splitting at %d: '%c'\n", VAR_10, ((char*)VAR_11->data)[VAR_10]);
        FUNC_1("Other (key) letter is '%c'\n", VAR_4[VAR_9]);


        raxNode **VAR_13 = FUNC_8(VAR_11);
        raxNode *VAR_14;
        FUNC_2(&VAR_14,VAR_13,sizeof(VAR_14));
        FUNC_1("Next is %p\n", (void*)VAR_14);
        FUNC_1("iskey %d\n", VAR_11->iskey);
        if (VAR_11->iskey) {
            FUNC_1("key value is %p\n", FUNC_5(VAR_11));
        }


        size_t VAR_15 = VAR_10;
        size_t VAR_16 = VAR_11->size - VAR_10 - 1;
        int VAR_17 = !VAR_15 && VAR_11->iskey && !VAR_11->isnull;
        size_t VAR_18;



        raxNode *VAR_19 = FUNC_7(1, VAR_17);
        raxNode *VAR_20 = ((void*)0);
        raxNode *VAR_21 = ((void*)0);

        if (VAR_15) {
            VAR_18 = sizeof(raxNode)+VAR_15+FUNC_9(VAR_15)+
                       sizeof(raxNode*);
            if (VAR_11->iskey && !VAR_11->isnull) VAR_18 += sizeof(void*);
            VAR_20 = FUNC_14(VAR_18);
        }

        if (VAR_16) {
            VAR_18 = sizeof(raxNode)+VAR_16+FUNC_9(VAR_16)+
                       sizeof(raxNode*);
            VAR_21 = FUNC_14(VAR_18);
        }


        if (VAR_19 == ((void*)0) ||
            (VAR_15 && VAR_20 == ((void*)0)) ||
            (VAR_16 && VAR_21 == ((void*)0)))
        {
            FUNC_13(VAR_19);
            FUNC_13(VAR_20);
            FUNC_13(VAR_21);
            VAR_2 = VAR_0;
            return 0;
        }
        VAR_19->data[0] = VAR_11->data[VAR_10];

        if (VAR_10 == 0) {

            if (VAR_11->iskey) {
                void *VAR_22 = FUNC_5(VAR_11);
                FUNC_12(VAR_19,VAR_22);
            }
            FUNC_2(VAR_12,&VAR_19,sizeof(VAR_19));
        } else {

            VAR_20->size = VAR_10;
            FUNC_2(VAR_20->data,VAR_11->data,VAR_10);
            VAR_20->iscompr = VAR_10 > 1 ? 1 : 0;
            VAR_20->iskey = VAR_11->iskey;
            VAR_20->isnull = VAR_11->isnull;
            if (VAR_11->iskey && !VAR_11->isnull) {
                void *VAR_23 = FUNC_5(VAR_11);
                FUNC_12(VAR_20,VAR_23);
            }
            raxNode **VAR_24 = FUNC_8(VAR_20);
            FUNC_2(VAR_24,&VAR_19,sizeof(VAR_19));
            FUNC_2(VAR_12,&VAR_20,sizeof(VAR_20));
            VAR_12 = VAR_24;
            VAR_3->numnodes++;
        }



        if (VAR_16) {

            VAR_21->iskey = 0;
            VAR_21->isnull = 0;
            VAR_21->size = VAR_16;
            VAR_21->iscompr = VAR_16 > 1;
            FUNC_2(VAR_21->data,VAR_11->data+VAR_10+1,VAR_16);
            raxNode **VAR_25 = FUNC_8(VAR_21);
            FUNC_2(VAR_25,&VAR_14,sizeof(VAR_14));
            VAR_3->numnodes++;
        } else {

            VAR_21 = VAR_14;
        }


        raxNode **VAR_26 = FUNC_8(VAR_19);
        FUNC_2(VAR_26,&VAR_21,sizeof(VAR_21));




        FUNC_13(VAR_11);
        VAR_11 = VAR_19;
    } else if (VAR_11->iscompr && VAR_9 == VAR_5) {

        FUNC_1("ALGO 2: Stopped at compressed node %.*s (%p) j = %d\n",
            VAR_11->size, VAR_11->data, (void*)VAR_11, VAR_10);


        size_t VAR_27 = VAR_11->size - VAR_10;
        size_t VAR_28 = sizeof(raxNode)+VAR_27+FUNC_9(VAR_27)+
                          sizeof(raxNode*);
        if (VAR_6 != ((void*)0)) VAR_28 += sizeof(void*);
        raxNode *VAR_29 = FUNC_14(VAR_28);

        VAR_28 = sizeof(raxNode)+VAR_10+FUNC_9(VAR_10)+sizeof(raxNode*);
        if (VAR_11->iskey && !VAR_11->isnull) VAR_28 += sizeof(void*);
        raxNode *VAR_30 = FUNC_14(VAR_28);

        if (VAR_29 == ((void*)0) || VAR_30 == ((void*)0)) {
            FUNC_13(VAR_29);
            FUNC_13(VAR_30);
            VAR_2 = VAR_0;
            return 0;
        }


        raxNode **VAR_31 = FUNC_8(VAR_11);
        raxNode *VAR_32;
        FUNC_2(&VAR_32,VAR_31,sizeof(VAR_32));


        VAR_29->size = VAR_27;
        VAR_29->iscompr = VAR_27 > 1;
        VAR_29->iskey = 1;
        VAR_29->isnull = 0;
        FUNC_2(VAR_29->data,VAR_11->data+VAR_10,VAR_27);
        FUNC_12(VAR_29,VAR_6);
        raxNode **VAR_33 = FUNC_8(VAR_29);
        FUNC_2(VAR_33,&VAR_32,sizeof(VAR_32));
        VAR_3->numnodes++;


        VAR_30->size = VAR_10;
        VAR_30->iscompr = VAR_10 > 1;
        VAR_30->iskey = 0;
        VAR_30->isnull = 0;
        FUNC_2(VAR_30->data,VAR_11->data,VAR_10);
        FUNC_2(VAR_12,&VAR_30,sizeof(VAR_30));
        if (VAR_11->iskey) {
            void *VAR_34 = FUNC_5(VAR_11);
            FUNC_12(VAR_30,VAR_34);
        }



        VAR_33 = FUNC_8(VAR_30);
        FUNC_2(VAR_33,&VAR_29,sizeof(VAR_29));



        VAR_3->numele++;
        FUNC_13(VAR_11);
        return 1;
    }



    while(VAR_9 < VAR_5) {
        raxNode *VAR_35;




        if (VAR_11->size == 0 && VAR_5-VAR_9 > 1) {
            FUNC_1("Inserting compressed node\n");
            size_t VAR_36 = VAR_5-VAR_9;
            if (VAR_36 > VAR_1)
                VAR_36 = VAR_1;
            raxNode *VAR_37 = FUNC_4(VAR_11,VAR_4+VAR_9,VAR_36,&VAR_35);
            if (VAR_37 == ((void*)0)) goto oom;
            VAR_11 = VAR_37;
            FUNC_2(VAR_12,&VAR_11,sizeof(VAR_11));
            VAR_12 = FUNC_8(VAR_11);
            VAR_9 += VAR_36;
        } else {
            FUNC_1("Inserting normal node\n");
            raxNode **VAR_38;
            raxNode *VAR_39 = FUNC_3(VAR_11,VAR_4[VAR_9],&VAR_35,&VAR_38);
            if (VAR_39 == ((void*)0)) goto oom;
            VAR_11 = VAR_39;
            FUNC_2(VAR_12,&VAR_11,sizeof(VAR_11));
            VAR_12 = VAR_38;
            VAR_9++;
        }
        VAR_3->numnodes++;
        VAR_11 = VAR_35;
    }
    raxNode *VAR_40 = FUNC_10(VAR_11,VAR_6);
    if (VAR_40 == ((void*)0)) goto oom;
    VAR_11 = VAR_40;
    if (!VAR_11->iskey) VAR_3->numele++;
    FUNC_12(VAR_11,VAR_6);
    FUNC_2(VAR_12,&VAR_11,sizeof(VAR_11));
    return 1;

oom:





    if (VAR_11->size == 0) {
        VAR_11->isnull = 1;
        VAR_11->iskey = 1;
        VAR_3->numele++;
        FUNC_0(FUNC_11(VAR_3,VAR_4,VAR_9,((void*)0)) != 0);
    }
    VAR_2 = VAR_0;
    return 0;
}
