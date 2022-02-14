
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int info; int v; int s; int g; int N; } ;
typedef int SSL ;
typedef TYPE_1__ SRP_user_pwd ;


 TYPE_1__* FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,int ,int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(SSL *VAR_3, int *VAR_4, void *VAR_5)
{
    int VAR_6 = VAR_0;
    char *VAR_7;
    SRP_user_pwd *VAR_8 = ((void*)0);

    VAR_7 = FUNC_2(VAR_3);
    if (VAR_7 == ((void*)0)) {
        *VAR_4 = VAR_1;
        goto err;
    }

    VAR_8 = FUNC_0(VAR_2, VAR_7);
    if (VAR_8 == ((void*)0)) {
        *VAR_4 = VAR_1;
        goto err;
    }

    if (FUNC_3(VAR_3, VAR_8->N, VAR_8->g, VAR_8->s, VAR_8->v,
                                 VAR_8->info) <= 0) {
        *VAR_4 = VAR_1;
        goto err;
    }

    VAR_6 = 0;

 err:
    FUNC_1(VAR_8);
    return VAR_6;
}
