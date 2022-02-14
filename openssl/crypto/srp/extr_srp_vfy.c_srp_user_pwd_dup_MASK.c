
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int v; int s; int info; int id; int N; int g; } ;
typedef TYPE_1__ SRP_user_pwd ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static SRP_user_pwd *FUNC_6(SRP_user_pwd *VAR_0)
{
    SRP_user_pwd *VAR_1;

    if (VAR_0 == ((void*)0))
        return ((void*)0);
    if ((VAR_1 = FUNC_2()) == ((void*)0))
        return ((void*)0);

    FUNC_5(VAR_1, VAR_0->g, VAR_0->N);
    if (!FUNC_4(VAR_1, VAR_0->id, VAR_0->info)
        || !FUNC_3(VAR_1, FUNC_0(VAR_0->s), FUNC_0(VAR_0->v))) {
            FUNC_1(VAR_1);
            return ((void*)0);
    }
    return VAR_1;
}
