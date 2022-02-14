
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_property {int enabled; int visible; int type; void* desc; void* name; struct obs_properties* parent; } ;
struct obs_properties {int dummy; } ;
typedef enum obs_property_type { ____Placeholder_obs_property_type } obs_property_type ;


 void* FUNC_0 (char const*) ;
 struct obs_property* FUNC_1 (int) ;
 size_t FUNC_2 (int) ;
 int FUNC_3 (struct obs_properties*,struct obs_property*) ;

__attribute__((used)) static inline struct obs_property *FUNC_4(struct obs_properties *VAR_0,
         const char *VAR_1, const char *VAR_2,
         enum obs_property_type VAR_3)
{
 size_t VAR_4 = FUNC_2(VAR_3);
 struct obs_property *VAR_5;

 VAR_5 = FUNC_1(sizeof(struct obs_property) + VAR_4);
 VAR_5->parent = VAR_0;
 VAR_5->enabled = 1;
 VAR_5->visible = 1;
 VAR_5->type = VAR_3;
 VAR_5->name = FUNC_0(VAR_1);
 VAR_5->desc = FUNC_0(VAR_2);
 FUNC_3(VAR_0, VAR_5);

 return VAR_5;
}
