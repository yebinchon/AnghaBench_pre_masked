
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * mdc_ctx; scalar_t__ use_mdcbuf_filter; } ;
typedef TYPE_1__ PGP_Context ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0)
{
 PGP_Context *VAR_1 = VAR_0;

 if (VAR_1->use_mdcbuf_filter)
  return;
 FUNC_0(VAR_1->mdc_ctx);
 VAR_1->mdc_ctx = ((void*)0);
}
