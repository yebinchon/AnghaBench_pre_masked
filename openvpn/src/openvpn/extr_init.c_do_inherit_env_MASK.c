
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct env_set {int dummy; } ;
struct TYPE_2__ {int es_owned; int es; } ;
struct context {TYPE_1__ c2; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct env_set const*) ;

__attribute__((used)) static void
FUNC_2(struct context *VAR_0, const struct env_set *VAR_1)
{
    VAR_0->c2.es = FUNC_0(((void*)0));
    VAR_0->c2.es_owned = 1;
    FUNC_1(VAR_0->c2.es, VAR_1);
}
