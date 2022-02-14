
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct source_enum_data {int param; int (* enum_callback ) (TYPE_3__*,TYPE_3__*,int ) ;} ;
struct TYPE_13__ {scalar_t__ data; } ;
struct TYPE_14__ {scalar_t__ type; int (* enum_active_sources ) (scalar_t__,void (*) (TYPE_3__*,TYPE_3__*,void*),struct source_enum_data*) ;} ;
struct TYPE_15__ {TYPE_1__ context; TYPE_2__ info; } ;
typedef TYPE_3__ obs_source_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,void (*) (TYPE_3__*,TYPE_3__*,void*),void*) ;
 int FUNC_1 (scalar_t__,void (*) (TYPE_3__*,TYPE_3__*,void*),struct source_enum_data*) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_3(obs_source_t *VAR_1,
          obs_source_t *VAR_2, void *VAR_3)
{
 struct source_enum_data *VAR_4 = VAR_3;
 bool VAR_5 = VAR_2->info.type == VAR_0;

 if (VAR_5)
  FUNC_0(
   VAR_2, FUNC_3, VAR_3);
 if (VAR_2->info.enum_active_sources) {
  if (VAR_2->context.data) {
   VAR_2->info.enum_active_sources(
    VAR_2->context.data,
    FUNC_3, VAR_4);
  }
 }

 VAR_4->enum_callback(VAR_1, VAR_2, VAR_4->param);
}
