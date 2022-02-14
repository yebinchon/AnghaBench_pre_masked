
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int data; } ;
struct TYPE_6__ {int output_flags; int (* focus ) (int ,int) ;} ;
struct TYPE_8__ {TYPE_2__ context; TYPE_1__ info; } ;
typedef TYPE_3__ obs_source_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 int FUNC_1 (int ,int) ;

void FUNC_2(obs_source_t *VAR_1, bool VAR_2)
{
 if (!FUNC_0(VAR_1, "obs_source_send_focus"))
  return;

 if (VAR_1->info.output_flags & VAR_0) {
  if (VAR_1->info.focus) {
   VAR_1->info.focus(VAR_1->context.data, VAR_2);
  }
 }
}
