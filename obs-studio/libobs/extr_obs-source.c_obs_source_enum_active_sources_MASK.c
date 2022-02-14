
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int data; } ;
struct TYPE_10__ {scalar_t__ type; int (* enum_active_sources ) (int ,int ,void*) ;} ;
struct TYPE_11__ {TYPE_1__ context; TYPE_2__ info; } ;
typedef TYPE_3__ obs_source_t ;
typedef int obs_source_enum_proc_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int ,void*) ;
 int FUNC_4 (int ,int ,void*) ;

void FUNC_5(obs_source_t *VAR_1,
        obs_source_enum_proc_t VAR_2,
        void *VAR_3)
{
 bool VAR_4;
 if (!FUNC_0(VAR_1, "obs_source_enum_active_sources"))
  return;

 VAR_4 = VAR_1->info.type == VAR_0;
 if (!VAR_4 && !VAR_1->info.enum_active_sources)
  return;

 FUNC_1(VAR_1);

 if (VAR_4)
  FUNC_3(VAR_1, VAR_2, VAR_3);
 if (VAR_1->info.enum_active_sources)
  VAR_1->info.enum_active_sources(VAR_1->context.data,
       VAR_2, VAR_3);

 FUNC_2(VAR_1);
}
