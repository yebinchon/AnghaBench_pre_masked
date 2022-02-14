
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int size; int cmd; } ;
struct sof_ipc_stream {TYPE_2__ hdr; int comp_id; } ;
struct sof_ipc_reply {int dummy; } ;
struct snd_sof_pcm {int* prepared; TYPE_1__* stream; } ;
struct snd_sof_dev {int ipc; } ;
struct snd_pcm_substream {size_t stream; } ;
typedef int stream ;
typedef int reply ;
struct TYPE_3__ {int comp_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,struct sof_ipc_stream*,int,struct sof_ipc_reply*,int) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_2,
    struct snd_sof_dev *VAR_3,
    struct snd_sof_pcm *VAR_4)
{
 struct sof_ipc_stream VAR_5;
 struct sof_ipc_reply VAR_6;
 int VAR_7;

 VAR_5.hdr.size = sizeof(VAR_5);
 VAR_5.hdr.cmd = VAR_0 | VAR_1;
 VAR_5.comp_id = VAR_4->stream[VAR_2->stream].comp_id;


 VAR_7 = FUNC_0(VAR_3->ipc, VAR_5.hdr.cmd, &VAR_5,
     sizeof(VAR_5), &VAR_6, sizeof(VAR_6));
 if (!VAR_7)
  VAR_4->prepared[VAR_2->stream] = 0;

 return VAR_7;
}
