
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct obs_data_item {size_t data_size; int type; size_t data_len; scalar_t__ autoselect_size; scalar_t__ default_len; scalar_t__ default_size; } ;
typedef int ptrdiff_t ;
typedef enum obs_data_type { ____Placeholder_obs_data_type } obs_data_type ;


 size_t FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (struct obs_data_item*) ;
 int FUNC_2 (struct obs_data_item*) ;
 int FUNC_3 (struct obs_data_item*) ;
 int FUNC_4 (struct obs_data_item*) ;
 int FUNC_5 (int ,void const*,size_t) ;
 int FUNC_6 (scalar_t__,int *,scalar_t__) ;
 struct obs_data_item* FUNC_7 (struct obs_data_item*) ;

__attribute__((used)) static inline void FUNC_8(struct obs_data_item **VAR_0,
      const void *VAR_1, size_t VAR_2,
      enum obs_data_type VAR_3)
{
 if (!VAR_0 || !*VAR_0)
  return;

 struct obs_data_item *VAR_4 = *VAR_0;
 ptrdiff_t VAR_5 =
  (uint8_t *)FUNC_1(VAR_4) - (uint8_t *)VAR_4;
 FUNC_4(VAR_4);

 VAR_4->data_size = VAR_2;
 VAR_4->type = VAR_3;
 VAR_4->data_len = (VAR_4->default_size || VAR_4->autoselect_size)
     ? FUNC_0(VAR_2)
     : VAR_2;
 VAR_4 = FUNC_7(VAR_4);

 if (VAR_4->default_size || VAR_4->autoselect_size)
  FUNC_6(FUNC_1(VAR_4),
   (uint8_t *)VAR_4 + VAR_5,
   VAR_4->default_len + VAR_4->autoselect_size);

 if (VAR_2) {
  FUNC_5(FUNC_2(VAR_4), VAR_1, VAR_2);
  FUNC_3(VAR_4);
 }

 *VAR_0 = VAR_4;
}
