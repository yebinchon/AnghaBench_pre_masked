
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skl_pipe_params {int format; int stream; int s_freq; int ch; int s_fmt; int host_bps; int host_dma_id; int link_bps; int link_index; int link_dma_id; } ;
struct skl_pipe {TYPE_1__* p_params; scalar_t__ passthru; } ;
struct skl_module_cfg {int dev_type; struct skl_pipe* pipe; } ;
struct TYPE_2__ {int format; int stream; int s_freq; int ch; int s_fmt; int host_bps; int host_dma_id; int link_bps; int link_index; int link_dma_id; } ;




 int FUNC_0 (TYPE_1__*,struct skl_pipe_params*,int) ;

__attribute__((used)) static void FUNC_1(struct skl_module_cfg *VAR_0,
    struct skl_pipe_params *VAR_1)
{
 struct skl_pipe *VAR_2 = VAR_0->pipe;

 if (VAR_2->passthru) {
  switch (VAR_0->dev_type) {
  case 128:
   VAR_2->p_params->link_dma_id = VAR_1->link_dma_id;
   VAR_2->p_params->link_index = VAR_1->link_index;
   VAR_2->p_params->link_bps = VAR_1->link_bps;
   break;

  case 129:
   VAR_2->p_params->host_dma_id = VAR_1->host_dma_id;
   VAR_2->p_params->host_bps = VAR_1->host_bps;
   break;

  default:
   break;
  }
  VAR_2->p_params->s_fmt = VAR_1->s_fmt;
  VAR_2->p_params->ch = VAR_1->ch;
  VAR_2->p_params->s_freq = VAR_1->s_freq;
  VAR_2->p_params->stream = VAR_1->stream;
  VAR_2->p_params->format = VAR_1->format;

 } else {
  FUNC_0(VAR_2->p_params, VAR_1, sizeof(*VAR_1));
 }
}
