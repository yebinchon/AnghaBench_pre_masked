
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int error; int * umsgf; int * arg_types; int * orig_format; } ;
typedef TYPE_1__ msgformat_data ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(msgformat_data* VAR_0)
{
 if (!VAR_0)
  return;

 if (VAR_0->umsgf)
  FUNC_2(VAR_0->umsgf);

 if (VAR_0->orig_format) {
  FUNC_0(VAR_0->orig_format);
  VAR_0->orig_format = ((void*)0);
 }

 if (VAR_0->arg_types) {
  FUNC_3(VAR_0->arg_types);
  FUNC_0(VAR_0->arg_types);
  VAR_0->arg_types = ((void*)0);
 }

 VAR_0->umsgf = ((void*)0);
 FUNC_1(&VAR_0->error);
}
