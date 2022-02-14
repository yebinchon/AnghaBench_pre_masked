
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {int (* check_revocation ) (TYPE_2__*) ;int (* verify ) (TYPE_2__*) ;int (* check_policy ) (TYPE_2__*) ;TYPE_1__* param; int error_depth; int chain; } ;
typedef TYPE_2__ X509_STORE_CTX ;
struct TYPE_16__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*,int *,int ,int) ;

__attribute__((used)) static int FUNC_14(X509_STORE_CTX *VAR_2)
{
    int VAR_3;
    int VAR_4;





    if ((VAR_4 = FUNC_4(VAR_2)) == 0 ||
        (VAR_4 = FUNC_6(VAR_2)) == 0 ||
        (VAR_4 = FUNC_5(VAR_2)) == 0 ||
        (VAR_4 = FUNC_7(VAR_2)) == 0 || 1)
        FUNC_1(((void*)0), VAR_2->chain);
    if (VAR_4 == 0 || (VAR_4 = VAR_2->check_revocation(VAR_2)) == 0)
        return VAR_4;

    VAR_3 = FUNC_0(&VAR_2->error_depth, ((void*)0), VAR_2->chain,
                                  VAR_2->param->flags);
    if (VAR_3 != VAR_1) {
        if ((VAR_4 = FUNC_13(VAR_2, ((void*)0), VAR_2->error_depth, VAR_3)) == 0)
            return VAR_4;
    }


    VAR_4 = (VAR_2->verify != ((void*)0)) ? VAR_2->verify(VAR_2) : FUNC_9(VAR_2);
    if (!VAR_4)
        return VAR_4;

    if ((VAR_4 = FUNC_8(VAR_2)) == 0)
        return VAR_4;



    if ((VAR_4 = FUNC_3(VAR_2)) == 0)
        return VAR_4;
    if ((VAR_4 = FUNC_2(VAR_2)) == 0)
        return VAR_4;



    if (VAR_2->param->flags & VAR_0)
        VAR_4 = VAR_2->check_policy(VAR_2);
    return VAR_4;
}
