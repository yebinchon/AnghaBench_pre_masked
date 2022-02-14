
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int error; scalar_t__ tz_set; int * arg_types; int * orig_format; int * umsgf; } ;
typedef TYPE_1__ msgformat_data ;


 int FUNC_0 (int *) ;

void FUNC_1( msgformat_data* VAR_0 )
{
 if( !VAR_0 )
  return;

 VAR_0->umsgf = ((void*)0);
 VAR_0->orig_format = ((void*)0);
 VAR_0->arg_types = ((void*)0);
 VAR_0->tz_set = 0;
 FUNC_0( &VAR_0->error );
}
