
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct obs_data_item {int data_len; scalar_t__ type; size_t default_len; size_t autoselect_size; scalar_t__ data_size; } ;
typedef int obs_data_t ;
typedef int obs_data_array_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (struct obs_data_item*) ;
 int FUNC_1 (void*,int *,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(struct obs_data_item *VAR_2)
{
 void *VAR_3 = FUNC_0(VAR_2);
 size_t VAR_4;

 if (VAR_2->data_len) {
  if (VAR_2->type == VAR_1) {
   obs_data_t **VAR_5 = VAR_2->data_size ? VAR_3 : ((void*)0);

   if (VAR_5 && *VAR_5)
    FUNC_3(*VAR_5);

  } else if (VAR_2->type == VAR_0) {
   obs_data_array_t **VAR_6 = VAR_2->data_size ? VAR_3 : ((void*)0);

   if (VAR_6 && *VAR_6)
    FUNC_2(*VAR_6);
  }

  VAR_4 = VAR_2->default_len + VAR_2->autoselect_size;
  if (VAR_4)
   FUNC_1(VAR_3, (uint8_t *)VAR_3 + VAR_2->data_len, VAR_4);

  VAR_2->data_size = 0;
  VAR_2->data_len = 0;
 }
}
