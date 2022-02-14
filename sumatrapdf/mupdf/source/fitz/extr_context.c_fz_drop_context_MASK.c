
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int user; int (* free ) (int ,TYPE_3__*) ;} ;
struct TYPE_14__ {scalar_t__ top; scalar_t__ stack; } ;
struct TYPE_16__ {TYPE_2__ alloc; TYPE_1__ error; } ;
typedef TYPE_3__ fz_context ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int ,TYPE_3__*) ;

void
FUNC_10(fz_context *VAR_0)
{
 if (!VAR_0)
  return;


 FUNC_2(VAR_0);
 FUNC_4(VAR_0);
 FUNC_5(VAR_0);
 FUNC_6(VAR_0);
 FUNC_7(VAR_0);
 FUNC_1(VAR_0);
 FUNC_3(VAR_0);

 FUNC_8(VAR_0);

 FUNC_0(VAR_0->error.top == VAR_0->error.stack);


 VAR_0->alloc.free(VAR_0->alloc.user, VAR_0);
}
