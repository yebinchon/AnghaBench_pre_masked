
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* ref; struct TYPE_3__* out; struct TYPE_3__* in; int chain; } ;
typedef TYPE_1__ fz_predict ;
typedef int fz_context ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, void *VAR_1)
{
 fz_predict *VAR_2 = (fz_predict *)VAR_1;
 FUNC_0(VAR_0, VAR_2->chain);
 FUNC_1(VAR_0, VAR_2->in);
 FUNC_1(VAR_0, VAR_2->out);
 FUNC_1(VAR_0, VAR_2->ref);
 FUNC_1(VAR_0, VAR_2);
}
