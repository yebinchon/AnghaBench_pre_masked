
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_data_item {size_t name_len; size_t data_len; size_t default_len; size_t autoselect_size; } ;



__attribute__((used)) static inline size_t FUNC_0(struct obs_data_item *VAR_0)
{
 return sizeof(struct obs_data_item) + VAR_0->name_len + VAR_0->data_len +
        VAR_0->default_len + VAR_0->autoselect_size;
}
