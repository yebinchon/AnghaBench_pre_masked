
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* set_item_t ) (int *,int **,char const*,int **,int,int ) ;
typedef int obs_data_t ;
typedef int obs_data_item_t ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(obs_data_t *VAR_1, obs_data_item_t **VAR_2,
          const char *VAR_3, obs_data_t *VAR_4,
          set_item_t VAR_5)
{
 VAR_5(VAR_1, VAR_2, VAR_3, &VAR_4, sizeof(obs_data_t *),
    VAR_0);
}
