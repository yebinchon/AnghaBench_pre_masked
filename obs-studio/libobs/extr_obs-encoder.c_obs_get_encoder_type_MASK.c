
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_encoder_info {int type; } ;
typedef enum obs_encoder_type { ____Placeholder_obs_encoder_type } obs_encoder_type ;


 int VAR_0 ;
 struct obs_encoder_info* FUNC_0 (char const*) ;

enum obs_encoder_type FUNC_1(const char *VAR_1)
{
 struct obs_encoder_info *VAR_2 = FUNC_0(VAR_1);
 return VAR_2 ? VAR_2->type : VAR_0;
}
