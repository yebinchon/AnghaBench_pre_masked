
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int obs_source_t ;
typedef enum obs_allow_direct_render { ____Placeholder_obs_allow_direct_render } obs_allow_direct_render ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline bool FUNC_0(obs_source_t *VAR_3, obs_source_t *VAR_4,
         uint32_t VAR_5,
         enum obs_allow_direct_render VAR_6)
{
 return (VAR_3 == VAR_4) &&
        (VAR_6 == VAR_0) &&
        ((VAR_5 & VAR_2) == 0) &&
        ((VAR_5 & VAR_1) == 0);
}
