
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_data_item {size_t autoselect_size; int type; scalar_t__ default_size; void* default_len; scalar_t__ data_size; void* data_len; } ;
typedef enum obs_data_type { ____Placeholder_obs_data_type } obs_data_type ;


 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct obs_data_item*) ;
 int FUNC_2 (struct obs_data_item*) ;
 int FUNC_3 (struct obs_data_item*) ;
 int FUNC_4 (int ,void const*,size_t) ;
 struct obs_data_item* FUNC_5 (struct obs_data_item*) ;

__attribute__((used)) static inline void
FUNC_6(struct obs_data_item **VAR_0,
      const void *VAR_1, size_t VAR_2,
      enum obs_data_type VAR_3)
{
 if (!VAR_0 || !*VAR_0)
  return;

 struct obs_data_item *VAR_4 = *VAR_0;
 FUNC_3(VAR_4);

 VAR_4->autoselect_size = VAR_2;
 VAR_4->type = VAR_3;
 VAR_4->data_len = VAR_4->data_size ? FUNC_0(VAR_4->data_size) : 0;
 VAR_4->default_len =
  VAR_4->default_size ? FUNC_0(VAR_4->default_size) : 0;
 VAR_4 = FUNC_5(VAR_4);

 if (VAR_2) {
  FUNC_4(FUNC_1(VAR_4), VAR_1, VAR_2);
  FUNC_2(VAR_4);
 }

 *VAR_0 = VAR_4;
}
