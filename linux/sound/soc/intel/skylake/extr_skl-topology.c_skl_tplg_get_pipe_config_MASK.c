
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skl_pipe_params {int s_fmt; int s_freq; int ch; } ;
struct skl_pipe_fmt {int bps; int freq; int channels; } ;
struct skl_pipe {int nr_cfgs; int cur_config_idx; scalar_t__ conn_type; scalar_t__ direction; int ppl_id; int memory_pages; struct skl_path_config* configs; struct skl_pipe_params* p_params; } ;
struct skl_path_config {int mem_pages; struct skl_pipe_fmt out_fmt; struct skl_pipe_fmt in_fmt; } ;
struct skl_module_cfg {struct skl_pipe* pipe; } ;
struct skl_dev {int dev; } ;


 scalar_t__ FUNC_0 (int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct skl_dev *VAR_6, struct skl_module_cfg *VAR_7)
{
 struct skl_pipe *VAR_8 = VAR_7->pipe;
 struct skl_pipe_params *VAR_9 = VAR_8->p_params;
 struct skl_path_config *VAR_10 = &VAR_8->configs[0];
 struct skl_pipe_fmt *VAR_11 = ((void*)0);
 bool VAR_12 = 0;
 int VAR_13;

 if (VAR_8->nr_cfgs == 0) {
  VAR_8->cur_config_idx = 0;
  return 0;
 }

 if (VAR_8->conn_type == VAR_3) {
  FUNC_1(VAR_6->dev, "No conn_type detected, take 0th config\n");
  VAR_8->cur_config_idx = 0;
  VAR_8->memory_pages = VAR_10->mem_pages;

  return 0;
 }

 if ((VAR_8->conn_type == VAR_2 &&
      VAR_8->direction == VAR_5) ||
      (VAR_8->conn_type == VAR_1 &&
      VAR_8->direction == VAR_4))
  VAR_12 = 1;

 for (VAR_13 = 0; VAR_13 < VAR_8->nr_cfgs; VAR_13++) {
  VAR_10 = &VAR_8->configs[VAR_13];
  if (VAR_12)
   VAR_11 = &VAR_10->in_fmt;
  else
   VAR_11 = &VAR_10->out_fmt;

  if (FUNC_0(VAR_9->ch, VAR_9->s_freq, VAR_9->s_fmt,
        VAR_11->channels, VAR_11->freq, VAR_11->bps)) {
   VAR_8->cur_config_idx = VAR_13;
   VAR_8->memory_pages = VAR_10->mem_pages;
   FUNC_1(VAR_6->dev, "Using pipe config: %d\n", VAR_13);

   return 0;
  }
 }

 FUNC_2(VAR_6->dev, "Invalid pipe config: %d %d %d for pipe: %d\n",
  VAR_9->ch, VAR_9->s_freq, VAR_9->s_fmt, VAR_8->ppl_id);
 return -VAR_0;
}
