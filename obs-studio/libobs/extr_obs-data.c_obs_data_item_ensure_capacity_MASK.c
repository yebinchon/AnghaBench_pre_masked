
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_data_item {size_t capacity; } ;


 struct obs_data_item* FUNC_0 (struct obs_data_item*,size_t) ;
 int FUNC_1 (struct obs_data_item*,struct obs_data_item*) ;
 size_t FUNC_2 (struct obs_data_item*) ;

__attribute__((used)) static struct obs_data_item *
FUNC_3(struct obs_data_item *VAR_0)
{
 size_t VAR_1 = FUNC_2(VAR_0);
 struct obs_data_item *VAR_2;

 if (VAR_0->capacity >= VAR_1)
  return VAR_0;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 VAR_2->capacity = VAR_1;

 FUNC_1(VAR_0, VAR_2);
 return VAR_2;
}
