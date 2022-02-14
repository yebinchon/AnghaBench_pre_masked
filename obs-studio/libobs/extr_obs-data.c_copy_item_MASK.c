
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_data_item {int type; int data_size; } ;
struct obs_data {int dummy; } ;
typedef int obs_data_t ;
typedef int obs_data_array_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct obs_data*,char const*,int *,int ) ;
 int FUNC_1 (struct obs_data*,char const*,int *,int ) ;
 void* FUNC_2 (struct obs_data_item*) ;
 char* FUNC_3 (struct obs_data_item*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct obs_data*,int *,char const*,void*,int ,int ) ;

__attribute__((used)) static inline void FUNC_5(struct obs_data *VAR_4, struct obs_data_item *VAR_5)
{
 const char *VAR_6 = FUNC_3(VAR_5);
 void *VAR_7 = FUNC_2(VAR_5);

 if (VAR_5->type == VAR_1) {
  obs_data_t **VAR_8 = VAR_5->data_size ? VAR_7 : ((void*)0);

  if (VAR_8)
   FUNC_1(VAR_4, VAR_6, *VAR_8, VAR_3);

 } else if (VAR_5->type == VAR_0) {
  obs_data_array_t **VAR_9 = VAR_5->data_size ? VAR_7 : ((void*)0);

  if (VAR_9)
   FUNC_0(VAR_4, VAR_6, *VAR_9, VAR_2);

 } else {
  if (VAR_5->data_size)
   FUNC_4(VAR_4, ((void*)0), VAR_6, VAR_7, VAR_5->data_size,
     VAR_5->type);
 }
}
