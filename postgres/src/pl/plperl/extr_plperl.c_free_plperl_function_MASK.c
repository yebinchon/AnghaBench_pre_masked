
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ fn_refcount; int fn_cxt; scalar_t__ reference; int * interp; } ;
typedef TYPE_1__ plperl_proc_desc ;
typedef int plperl_interp_desc ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int * VAR_0 ;

__attribute__((used)) static void
FUNC_4(plperl_proc_desc *VAR_1)
{
 FUNC_0(VAR_1->fn_refcount == 0);

 if (VAR_1->reference)
 {
  plperl_interp_desc *VAR_2 = VAR_0;

  FUNC_3(VAR_1->interp);
  FUNC_2(VAR_1->reference);
  FUNC_3(VAR_2);
 }

 FUNC_1(VAR_1->fn_cxt);
}
