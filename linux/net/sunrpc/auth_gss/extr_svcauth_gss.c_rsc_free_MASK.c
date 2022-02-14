
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data; } ;
struct rsc {int cred; scalar_t__ mechctx; TYPE_1__ handle; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct rsc *VAR_0)
{
 FUNC_2(VAR_0->handle.data);
 if (VAR_0->mechctx)
  FUNC_1(&VAR_0->mechctx);
 FUNC_0(&VAR_0->cred);
}
