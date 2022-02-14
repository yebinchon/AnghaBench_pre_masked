
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct obs_encoder_info {int caps; } ;


 struct obs_encoder_info* FUNC_0 (char const*) ;

uint32_t FUNC_1(const char *VAR_0)
{
 struct obs_encoder_info *VAR_1 = FUNC_0(VAR_0);
 return VAR_1 ? VAR_1->caps : 0;
}
