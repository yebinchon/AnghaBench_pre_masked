
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfctrl_request_info {scalar_t__ cmd; scalar_t__ channel_id; int param; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static bool FUNC_1(const struct cfctrl_request_info *VAR_1,
     const struct cfctrl_request_info *VAR_2)
{
 if (VAR_1->cmd != VAR_2->cmd)
  return 0;
 if (VAR_1->cmd == VAR_0)
  return FUNC_0(&VAR_1->param, &VAR_2->param);
 else
  return VAR_1->channel_id == VAR_2->channel_id;
}
