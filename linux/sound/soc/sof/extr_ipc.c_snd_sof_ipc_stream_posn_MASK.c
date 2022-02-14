
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sof_ipc_stream_posn {int dummy; } ;
struct TYPE_4__ {int size; int cmd; } ;
struct sof_ipc_stream {int comp_id; TYPE_2__ hdr; } ;
struct snd_sof_pcm {TYPE_1__* stream; } ;
struct snd_sof_dev {int dev; int ipc; } ;
typedef int stream ;
struct TYPE_3__ {int comp_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int,struct sof_ipc_stream*,int,struct sof_ipc_stream_posn**,int) ;

int FUNC_2(struct snd_sof_dev *VAR_2,
       struct snd_sof_pcm *VAR_3, int VAR_4,
       struct sof_ipc_stream_posn *VAR_5)
{
 struct sof_ipc_stream VAR_6;
 int VAR_7;


 VAR_6.hdr.size = sizeof(VAR_6);
 VAR_6.hdr.cmd = VAR_0 | VAR_1;
 VAR_6.comp_id = VAR_3->stream[VAR_4].comp_id;


 VAR_7 = FUNC_1(VAR_2->ipc,
     VAR_6.hdr.cmd, &VAR_6, sizeof(VAR_6), &VAR_5,
     sizeof(*VAR_5));
 if (VAR_7 < 0) {
  FUNC_0(VAR_2->dev, "error: failed to get stream %d position\n",
   VAR_6.comp_id);
  return VAR_7;
 }

 return 0;
}
