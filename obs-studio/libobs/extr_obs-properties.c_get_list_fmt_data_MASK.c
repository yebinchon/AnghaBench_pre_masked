
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_property {int dummy; } ;
struct list_data {int format; } ;
typedef enum obs_combo_format { ____Placeholder_obs_combo_format } obs_combo_format ;


 struct list_data* FUNC_0 (struct obs_property*) ;

__attribute__((used)) static inline struct list_data *FUNC_1(struct obs_property *VAR_0,
        enum obs_combo_format VAR_1)
{
 struct list_data *VAR_2 = FUNC_0(VAR_0);
 return (VAR_2 && VAR_2->format == VAR_1) ? VAR_2 : ((void*)0);
}
