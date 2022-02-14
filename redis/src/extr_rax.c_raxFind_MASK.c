
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int iskey; scalar_t__ iscompr; } ;
typedef TYPE_1__ raxNode ;
typedef int rax ;


 int FUNC_0 (char*,int,unsigned char*) ;
 void* FUNC_1 (TYPE_1__*) ;
 size_t FUNC_2 (int *,unsigned char*,size_t,TYPE_1__**,int *,int*,int *) ;
 void* VAR_0 ;

void *FUNC_3(rax *VAR_1, unsigned char *VAR_2, size_t VAR_3) {
    raxNode *VAR_4;

    FUNC_0("### Lookup: %.*s\n", (int)VAR_3, VAR_2);
    int VAR_5 = 0;
    size_t VAR_6 = FUNC_2(VAR_1,VAR_2,VAR_3,&VAR_4,((void*)0),&VAR_5,((void*)0));
    if (VAR_6 != VAR_3 || (VAR_4->iscompr && VAR_5 != 0) || !VAR_4->iskey)
        return VAR_0;
    return FUNC_1(VAR_4);
}
