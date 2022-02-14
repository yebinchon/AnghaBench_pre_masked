
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_data_number {double double_val; int type; } ;
typedef int (* set_item_t ) (int *,int **,char const*,struct obs_data_number*,int,int ) ;
typedef int obs_data_t ;
typedef int obs_data_item_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_0(obs_data_t *VAR_2, obs_data_item_t **VAR_3,
      const char *VAR_4, double VAR_5,
      set_item_t VAR_6)
{
 struct obs_data_number VAR_7;
 VAR_7.type = VAR_1;
 VAR_7.double_val = VAR_5;
 VAR_6(VAR_2, VAR_3, VAR_4, &VAR_7, sizeof(struct obs_data_number),
    VAR_0);
}
