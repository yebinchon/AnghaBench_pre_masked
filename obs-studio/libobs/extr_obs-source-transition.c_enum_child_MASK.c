
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ data; } ;
struct TYPE_12__ {int (* enum_active_sources ) (scalar_t__,int (*) (TYPE_3__*,TYPE_3__*,void*),void*) ;} ;
struct TYPE_14__ {TYPE_2__ context; TYPE_1__ info; } ;
typedef TYPE_3__ obs_source_t ;
typedef int (* obs_source_enum_proc_t ) (TYPE_3__*,TYPE_3__*,void*) ;


 int FUNC_0 (scalar_t__,int (*) (TYPE_3__*,TYPE_3__*,void*),void*) ;

__attribute__((used)) static inline void FUNC_1(obs_source_t *VAR_0, obs_source_t *VAR_1,
         obs_source_enum_proc_t VAR_2, void *VAR_3)
{
 if (!VAR_1)
  return;

 if (VAR_1->context.data && VAR_1->info.enum_active_sources)
  VAR_1->info.enum_active_sources(VAR_1->context.data,
      VAR_2, VAR_3);

 VAR_2(VAR_0, VAR_1, VAR_3);
}
