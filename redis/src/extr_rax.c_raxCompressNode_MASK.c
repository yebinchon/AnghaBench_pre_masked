
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {size_t size; int iscompr; scalar_t__ iskey; int data; int isnull; } ;
typedef TYPE_1__ raxNode ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,unsigned char*) ;
 int FUNC_2 (TYPE_1__**,...) ;
 void* FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int ,int ) ;
 TYPE_1__** FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (size_t) ;
 int FUNC_7 (TYPE_1__*,void*) ;
 int FUNC_8 (TYPE_1__*) ;
 TYPE_1__* FUNC_9 (TYPE_1__*,size_t) ;

raxNode *FUNC_10(raxNode *VAR_0, unsigned char *VAR_1, size_t VAR_2, raxNode **VAR_3) {
    FUNC_0(VAR_0->size == 0 && VAR_0->iscompr == 0);
    void *VAR_4 = ((void*)0);
    size_t VAR_5;

    FUNC_1("Compress node: %.*s\n", (int)VAR_2,VAR_1);


    *VAR_3 = FUNC_4(0,0);
    if (*VAR_3 == ((void*)0)) return ((void*)0);


    VAR_5 = sizeof(raxNode)+VAR_2+FUNC_6(VAR_2)+sizeof(raxNode*);
    if (VAR_0->iskey) {
        VAR_4 = FUNC_3(VAR_0);
        if (!VAR_0->isnull) VAR_5 += sizeof(void*);
    }
    raxNode *VAR_6 = FUNC_9(VAR_0,VAR_5);
    if (VAR_6 == ((void*)0)) {
        FUNC_8(*VAR_3);
        return ((void*)0);
    }
    VAR_0 = VAR_6;

    VAR_0->iscompr = 1;
    VAR_0->size = VAR_2;
    FUNC_2(VAR_0->data,VAR_1,VAR_2);
    if (VAR_0->iskey) FUNC_7(VAR_0,VAR_4);
    raxNode **VAR_7 = FUNC_5(VAR_0);
    FUNC_2(VAR_7,VAR_3,sizeof(*VAR_3));
    return VAR_0;
}
