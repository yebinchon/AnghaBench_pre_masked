
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipc_dsp_hdr {int cmd_id; int mod_index_id; int pipe_id; int length; scalar_t__ mod_id; } ;



void FUNC_0(struct ipc_dsp_hdr *VAR_0, int VAR_1,
     int VAR_2, int VAR_3)
{
 VAR_0->cmd_id = VAR_1;
 VAR_0->mod_index_id = 0xff;
 VAR_0->pipe_id = VAR_2;
 VAR_0->length = VAR_3;
 VAR_0->mod_id = 0;
}
