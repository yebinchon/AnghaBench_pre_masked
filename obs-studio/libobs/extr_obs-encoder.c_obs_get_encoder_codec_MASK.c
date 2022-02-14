
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_encoder_info {char const* codec; } ;


 struct obs_encoder_info* FUNC_0 (char const*) ;

const char *FUNC_1(const char *VAR_0)
{
 struct obs_encoder_info *VAR_1 = FUNC_0(VAR_0);
 return VAR_1 ? VAR_1->codec : ((void*)0);
}
