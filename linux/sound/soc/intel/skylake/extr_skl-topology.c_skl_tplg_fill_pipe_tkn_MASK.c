
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct skl_pipe {int conn_type; int pipe_priority; int memory_pages; int lp_mode; int direction; int nr_cfgs; } ;
struct device {int dummy; } ;


 int VAR_0 ;






 int FUNC_0 (struct device*,char*,int) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_1,
   struct skl_pipe *VAR_2, u32 VAR_3,
   u32 VAR_4)
{

 switch (VAR_3) {
 case 132:
  VAR_2->conn_type = VAR_4;
  break;

 case 129:
  VAR_2->pipe_priority = VAR_4;
  break;

 case 130:
  VAR_2->memory_pages = VAR_4;
  break;

 case 128:
  VAR_2->lp_mode = VAR_4;
  break;

 case 131:
  VAR_2->direction = VAR_4;
  break;

 case 133:
  VAR_2->nr_cfgs = VAR_4;
  break;

 default:
  FUNC_0(VAR_1, "Token not handled %d\n", VAR_3);
  return -VAR_0;
 }

 return 0;
}
