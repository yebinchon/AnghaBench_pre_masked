
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_data_item {size_t capacity; int type; size_t name_len; int ref; size_t default_len; size_t default_size; size_t autoselect_size; size_t data_len; size_t data_size; } ;
typedef enum obs_data_type { ____Placeholder_obs_data_type } obs_data_type ;


 struct obs_data_item* FUNC_0 (size_t) ;
 int FUNC_1 (struct obs_data_item*) ;
 int FUNC_2 (struct obs_data_item*) ;
 size_t FUNC_3 (char const*) ;
 int FUNC_4 (struct obs_data_item*) ;
 int FUNC_5 (int ,void const*,size_t) ;
 int FUNC_6 (int ,char const*) ;

__attribute__((used)) static struct obs_data_item *FUNC_7(const char *VAR_0,
        const void *VAR_1, size_t VAR_2,
        enum obs_data_type VAR_3,
        bool VAR_4,
        bool VAR_5)
{
 struct obs_data_item *VAR_6;
 size_t VAR_7, VAR_8;

 if (!VAR_0 || !VAR_1)
  return ((void*)0);

 VAR_7 = FUNC_3(VAR_0);
 VAR_8 = VAR_7 + sizeof(struct obs_data_item) + VAR_2;

 VAR_6 = FUNC_0(VAR_8);

 VAR_6->capacity = VAR_8;
 VAR_6->type = VAR_3;
 VAR_6->name_len = VAR_7;
 VAR_6->ref = 1;

 if (VAR_4) {
  VAR_6->default_len = VAR_2;
  VAR_6->default_size = VAR_2;

 } else if (VAR_5) {
  VAR_6->autoselect_size = VAR_2;

 } else {
  VAR_6->data_len = VAR_2;
  VAR_6->data_size = VAR_2;
 }

 FUNC_6(FUNC_2(VAR_6), VAR_0);
 FUNC_5(FUNC_1(VAR_6), VAR_1, VAR_2);

 FUNC_4(VAR_6);
 return VAR_6;
}
