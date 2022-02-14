
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_7__ {int name; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_8__ {void* delay_flags; void* delay_sec; TYPE_2__ context; TYPE_1__ info; } ;
typedef TYPE_3__ obs_output_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (TYPE_3__*,char*) ;

void FUNC_2(obs_output_t *VAR_2, uint32_t VAR_3,
     uint32_t VAR_4)
{
 if (!FUNC_1(VAR_2, "obs_output_set_delay"))
  return;

 if ((VAR_2->info.flags & VAR_1) == 0) {
  FUNC_0(VAR_0,
       "Output '%s': Tried to set a delay "
       "value on a non-encoded output",
       VAR_2->context.name);
  return;
 }

 VAR_2->delay_sec = VAR_3;
 VAR_2->delay_flags = VAR_4;
}
