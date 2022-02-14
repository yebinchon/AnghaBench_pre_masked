
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * login; TYPE_2__* user; } ;
typedef TYPE_1__ srpsrvparm ;
struct TYPE_4__ {int info; int v; int s; int g; int N; } ;
typedef int SSL ;


 int FUNC_0 (int ,char*,int *,...) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,int ,int ,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(SSL *VAR_4, int *VAR_5, void *VAR_6)
{
    srpsrvparm *VAR_7 = (srpsrvparm *) VAR_6;
    int VAR_8 = VAR_0;

    if (VAR_7->login == ((void*)0) && VAR_7->user == ((void*)0)) {
        VAR_7->login = FUNC_2(VAR_4);
        FUNC_0(VAR_3, "SRP username = \"%s\"\n", VAR_7->login);
        return -1;
    }

    if (VAR_7->user == ((void*)0)) {
        FUNC_0(VAR_3, "User %s doesn't exist\n", VAR_7->login);
        goto err;
    }

    if (FUNC_3
        (VAR_4, VAR_7->user->N, VAR_7->user->g, VAR_7->user->s, VAR_7->user->v,
         VAR_7->user->info) < 0) {
        *VAR_5 = VAR_1;
        goto err;
    }
    FUNC_0(VAR_3,
               "SRP parameters set: username = \"%s\" info=\"%s\" \n",
               VAR_7->login, VAR_7->user->info);
    VAR_8 = VAR_2;

 err:
    FUNC_1(VAR_7->user);
    VAR_7->user = ((void*)0);
    VAR_7->login = ((void*)0);
    return VAR_8;
}
