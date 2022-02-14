
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_source_info {int output_flags; } ;


 int VAR_0 ;
 struct obs_source_info* FUNC_0 (char const*) ;

void FUNC_1(const char *VAR_1, bool VAR_2)
{
 struct obs_source_info *VAR_3 = FUNC_0(VAR_1);
 if (!VAR_3)
  return;

 if (VAR_2)
  VAR_3->output_flags &= ~VAR_0;
 else
  VAR_3->output_flags |= VAR_0;
}
