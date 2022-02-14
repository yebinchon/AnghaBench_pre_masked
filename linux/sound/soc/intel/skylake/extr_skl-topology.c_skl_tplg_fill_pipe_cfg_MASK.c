
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct skl_pipe_fmt {int freq; int channels; int bps; } ;
struct skl_pipe {struct skl_path_config* configs; } ;
struct skl_path_config {int mem_pages; struct skl_pipe_fmt out_fmt; struct skl_pipe_fmt in_fmt; } ;
struct device {int dummy; } ;


 int VAR_0 ;






 int FUNC_0 (struct device*,char*,int) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_1,
   struct skl_pipe *VAR_2, u32 VAR_3,
   u32 VAR_4, int VAR_5, int VAR_6)
{
 struct skl_pipe_fmt *VAR_7;
 struct skl_path_config *VAR_8;

 switch (VAR_6) {
 case 133:
  VAR_7 = &VAR_2->configs[VAR_5].in_fmt;
  break;

 case 132:
  VAR_7 = &VAR_2->configs[VAR_5].out_fmt;
  break;

 default:
  FUNC_0(VAR_1, "Invalid direction: %d\n", VAR_6);
  return -VAR_0;
 }

 VAR_8 = &VAR_2->configs[VAR_5];

 switch (VAR_3) {
 case 131:
  VAR_7->freq = VAR_4;
  break;

 case 128:
  VAR_7->channels = VAR_4;
  break;

 case 129:
  VAR_7->bps = VAR_4;
  break;

 case 130:
  VAR_8->mem_pages = VAR_4;
  break;

 default:
  FUNC_0(VAR_1, "Invalid token config: %d\n", VAR_3);
  return -VAR_0;
 }

 return 0;
}
