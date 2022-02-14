
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_cmd_get_config_size {int max_xfer; int config_size; scalar_t__ status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct nd_cmd_get_config_size *VAR_3,
  unsigned int VAR_4)
{
 if (VAR_4 < sizeof(*VAR_3))
  return -VAR_0;

 VAR_3->status = 0;
 VAR_3->config_size = VAR_1;
 VAR_3->max_xfer = VAR_2;

 return 0;
}
