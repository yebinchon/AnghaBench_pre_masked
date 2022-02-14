
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int size; int cmd; } ;
struct sof_ipc_stream {TYPE_2__ hdr; int comp_id; } ;
struct sof_ipc_reply {int dummy; } ;
struct snd_sof_widget {TYPE_1__* widget; int comp_id; struct snd_sof_dev* sdev; } ;
struct snd_sof_dev {int dev; int ipc; } ;
typedef int stream ;
typedef int reply ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int,struct sof_ipc_stream*,int,struct sof_ipc_reply*,int) ;

__attribute__((used)) static int FUNC_2(struct snd_sof_widget *VAR_1, int VAR_2)
{
 struct snd_sof_dev *VAR_3 = VAR_1->sdev;
 struct sof_ipc_stream VAR_4;
 struct sof_ipc_reply VAR_5;
 int VAR_6 = 0;


 VAR_4.hdr.size = sizeof(VAR_4);
 VAR_4.hdr.cmd = VAR_0 | VAR_2;
 VAR_4.comp_id = VAR_1->comp_id;


 VAR_6 = FUNC_1(VAR_3->ipc, VAR_4.hdr.cmd, &VAR_4,
     sizeof(VAR_4), &VAR_5, sizeof(VAR_5));
 if (VAR_6 < 0)
  FUNC_0(VAR_3->dev, "error: failed to trigger %s\n",
   VAR_1->widget->name);

 return VAR_6;
}
