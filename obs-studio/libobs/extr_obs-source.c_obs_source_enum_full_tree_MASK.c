
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct source_enum_data {void* member_1; int member_0; } ;
struct TYPE_10__ {int data; } ;
struct TYPE_9__ {scalar_t__ type; int (* enum_active_sources ) (int ,int ,struct source_enum_data*) ;int (* enum_all_sources ) (int ,int ,struct source_enum_data*) ;} ;
struct TYPE_11__ {TYPE_2__ context; TYPE_1__ info; } ;
typedef TYPE_3__ obs_source_t ;
typedef int obs_source_enum_proc_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int ,struct source_enum_data*) ;
 int FUNC_4 (int ,int ,struct source_enum_data*) ;
 int FUNC_5 (int ,int ,struct source_enum_data*) ;

__attribute__((used)) static void FUNC_6(obs_source_t *VAR_2,
          obs_source_enum_proc_t VAR_3,
          void *VAR_4)
{
 struct source_enum_data VAR_5 = {VAR_3, VAR_4};
 bool VAR_6;

 if (!FUNC_0(VAR_2, "obs_source_enum_active_tree"))
  return;

 VAR_6 = VAR_2->info.type == VAR_0;
 if (!VAR_6 && !VAR_2->info.enum_active_sources)
  return;

 FUNC_1(VAR_2);

 if (VAR_2->info.type == VAR_0)
  FUNC_3(
   VAR_2, VAR_1, &VAR_5);

 if (VAR_2->info.enum_all_sources) {
  VAR_2->info.enum_all_sources(VAR_2->context.data,
           VAR_1,
           &VAR_5);

 } else if (VAR_2->info.enum_active_sources) {
  VAR_2->info.enum_active_sources(VAR_2->context.data,
       VAR_1,
       &VAR_5);
 }

 FUNC_2(VAR_2);
}
