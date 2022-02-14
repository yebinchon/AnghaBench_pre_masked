
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_encoder_info {char const* (* get_name ) (int ) ;int type_data; } ;


 struct obs_encoder_info* FUNC_0 (char const*) ;
 char const* FUNC_1 (int ) ;

const char *FUNC_2(const char *VAR_0)
{
 struct obs_encoder_info *VAR_1 = FUNC_0(VAR_0);
 return VAR_1 ? VAR_1->get_name(VAR_1->type_data) : ((void*)0);
}
