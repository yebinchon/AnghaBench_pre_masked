
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_data_item_t ;
typedef char const* (* get_data_t ) (int *) ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;

__attribute__((used)) static inline const char *FUNC_1(obs_data_item_t *VAR_1,
            get_data_t VAR_2)
{
 return FUNC_0(VAR_1, VAR_0) && VAR_2(VAR_1)
         ? VAR_2(VAR_1)
         : "";
}
