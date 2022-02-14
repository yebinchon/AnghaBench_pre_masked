
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* meth; } ;
struct TYPE_8__ {int (* init ) (TYPE_2__*) ;} ;
typedef TYPE_1__ COMP_METHOD ;
typedef TYPE_2__ COMP_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*) ;

COMP_CTX *FUNC_4(COMP_METHOD *VAR_2)
{
    COMP_CTX *VAR_3;

    if ((VAR_3 = FUNC_2(sizeof(*VAR_3))) == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return ((void*)0);
    }
    VAR_3->meth = VAR_2;
    if ((VAR_3->meth->init != ((void*)0)) && !VAR_3->meth->init(VAR_3)) {
        FUNC_1(VAR_3);
        VAR_3 = ((void*)0);
    }
    return VAR_3;
}
