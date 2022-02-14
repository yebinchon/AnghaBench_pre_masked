
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ex_data; int * chain; int * tree; int * param; int * parent; int (* cleanup ) (TYPE_1__*) ;} ;
typedef TYPE_1__ X509_STORE_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*,int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_1__*) ;

void FUNC_6(X509_STORE_CTX *VAR_2)
{







    if (VAR_2->cleanup != ((void*)0)) {
        VAR_2->cleanup(VAR_2);
        VAR_2->cleanup = ((void*)0);
    }
    if (VAR_2->param != ((void*)0)) {
        if (VAR_2->parent == ((void*)0))
            FUNC_1(VAR_2->param);
        VAR_2->param = ((void*)0);
    }
    FUNC_2(VAR_2->tree);
    VAR_2->tree = ((void*)0);
    FUNC_4(VAR_2->chain, VAR_1);
    VAR_2->chain = ((void*)0);
    FUNC_0(VAR_0, VAR_2, &(VAR_2->ex_data));
    FUNC_3(&VAR_2->ex_data, 0, sizeof(VAR_2->ex_data));
}
