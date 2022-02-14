
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ao_chain {int filter; } ;
struct MPContext {TYPE_1__* opts; struct ao_chain* ao_chain; } ;
struct TYPE_2__ {int af_settings; } ;


 int VAR_0 ;
 int FUNC_0 (struct MPContext*,char*) ;
 int FUNC_1 (struct ao_chain*) ;
 int FUNC_2 (struct MPContext*,int ,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct MPContext*) ;

__attribute__((used)) static int FUNC_5(struct MPContext *VAR_1)
{
    struct ao_chain *VAR_2 = VAR_1->ao_chain;
    FUNC_1(VAR_2);

    if (!FUNC_3(VAR_2->filter, VAR_1->opts->af_settings))
        goto fail;

    FUNC_4(VAR_1);

    FUNC_2(VAR_1, VAR_0, ((void*)0));

    return 0;

fail:
    FUNC_0(VAR_1, "Audio filter initialized failed!\n");
    return -1;
}
