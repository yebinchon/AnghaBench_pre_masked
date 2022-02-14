
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int * (* dupctx ) (int *) ;} ;
struct TYPE_8__ {int * data; TYPE_4__* meth; } ;
typedef TYPE_1__ EVP_MAC_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int) ;
 int * FUNC_5 (int *) ;

EVP_MAC_CTX *FUNC_6(const EVP_MAC_CTX *VAR_2)
{
    EVP_MAC_CTX *VAR_3;

    if (VAR_2->data == ((void*)0))
        return ((void*)0);

    VAR_3 = FUNC_4(sizeof(*VAR_3));
    if (VAR_3 == ((void*)0)) {
        FUNC_2(VAR_1, VAR_0);
        return ((void*)0);
    }

    *VAR_3 = *VAR_2;
    if (!FUNC_1(VAR_3->meth)) {
        FUNC_2(VAR_1, VAR_0);
        FUNC_3(VAR_3);
        return ((void*)0);
    }

    VAR_3->data = VAR_2->meth->dupctx(VAR_2->data);
    if (VAR_3->data == ((void*)0)) {
        FUNC_0(VAR_3);
        return ((void*)0);
    }

    return VAR_3;
}
