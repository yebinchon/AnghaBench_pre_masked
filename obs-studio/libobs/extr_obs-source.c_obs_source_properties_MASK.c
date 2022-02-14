
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int settings; int data; } ;
struct TYPE_7__ {int * (* get_properties ) (int ) ;int type_data; int * (* get_properties2 ) (int ,int ) ;} ;
struct TYPE_8__ {TYPE_1__ context; TYPE_2__ info; } ;
typedef TYPE_3__ obs_source_t ;
typedef int obs_properties_t ;


 int FUNC_0 (TYPE_3__ const*,char*) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int ,int ) ;
 int * FUNC_3 (int ) ;

obs_properties_t *FUNC_4(const obs_source_t *VAR_0)
{
 if (!FUNC_0(VAR_0, "obs_source_properties"))
  return ((void*)0);

 if (VAR_0->info.get_properties2) {
  obs_properties_t *VAR_1;
  VAR_1 = VAR_0->info.get_properties2(VAR_0->context.data,
           VAR_0->info.type_data);
  FUNC_1(VAR_1, VAR_0->context.settings);
  return VAR_1;

 } else if (VAR_0->info.get_properties) {
  obs_properties_t *VAR_2;
  VAR_2 = VAR_0->info.get_properties(VAR_0->context.data);
  FUNC_1(VAR_2, VAR_0->context.settings);
  return VAR_2;
 }

 return ((void*)0);
}
