
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_chain {int dummy; } ;
struct MPContext {struct vo_chain* vo_chain; } ;


 int VAR_0 ;
 int FUNC_0 (struct MPContext*) ;
 int FUNC_1 (struct MPContext*,int ,int *) ;
 int FUNC_2 (struct MPContext*) ;

int FUNC_3(struct MPContext *VAR_1)
{
    struct vo_chain *VAR_2 = VAR_1->vo_chain;

    if (!VAR_2)
        return 0;

    if (!FUNC_2(VAR_1))
        return -1;

    FUNC_0(VAR_1);

    FUNC_1(VAR_1, VAR_0, ((void*)0));

    return 0;
}
