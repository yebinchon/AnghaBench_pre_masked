
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sof_ipc_reply {int error; } ;
struct TYPE_2__ {int size; int cmd; } ;
struct sof_ipc_pipe_comp_connect {int list; struct sof_ipc_pipe_comp_connect* private; struct snd_soc_dapm_route* route; TYPE_1__ hdr; int sink_id; int source_id; struct snd_sof_dev* sdev; } ;
struct snd_sof_widget {scalar_t__ id; int comp_id; } ;
struct snd_sof_route {int list; struct snd_sof_route* private; struct snd_soc_dapm_route* route; TYPE_1__ hdr; int sink_id; int source_id; struct snd_sof_dev* sdev; } ;
struct snd_sof_dev {int route_list; int dev; int ipc; } ;
struct snd_soc_dobj {struct sof_ipc_pipe_comp_connect* private; } ;
struct snd_soc_dapm_route {char* control; scalar_t__ source; scalar_t__ sink; struct snd_soc_dobj dobj; } ;
struct snd_soc_component {int dummy; } ;
typedef int reply ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,scalar_t__,char*,...) ;
 int FUNC_1 (int ,char*,scalar_t__,...) ;
 int FUNC_2 (struct sof_ipc_pipe_comp_connect*) ;
 struct sof_ipc_pipe_comp_connect* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 struct snd_sof_dev* FUNC_5 (struct snd_soc_component*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 struct snd_sof_widget* FUNC_6 (struct snd_sof_dev*,char*) ;
 int FUNC_7 (int ,int,struct sof_ipc_pipe_comp_connect*,int,struct sof_ipc_reply*,int) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_component *VAR_8, int VAR_9,
     struct snd_soc_dapm_route *VAR_10)
{
 struct snd_sof_dev *VAR_11 = FUNC_5(VAR_8);
 struct sof_ipc_pipe_comp_connect *VAR_12;
 struct snd_sof_widget *VAR_13, *VAR_14;
 struct snd_soc_dobj *VAR_15 = &VAR_10->dobj;
 struct snd_sof_route *VAR_16;
 struct sof_ipc_reply VAR_17;
 int VAR_18 = 0;


 VAR_16 = FUNC_3(sizeof(*VAR_16), VAR_2);
 if (!VAR_16)
  return -VAR_1;

 VAR_16->sdev = VAR_11;

 VAR_12 = FUNC_3(sizeof(*VAR_12), VAR_2);
 if (!VAR_12) {
  FUNC_2(VAR_16);
  return -VAR_1;
 }

 VAR_12->hdr.size = sizeof(*VAR_12);
 VAR_12->hdr.cmd = VAR_3 | VAR_4;

 FUNC_0(VAR_11->dev, "sink %s control %s source %s\n",
  VAR_10->sink, VAR_10->control ? VAR_10->control : "none",
  VAR_10->source);


 VAR_13 = FUNC_6(VAR_11, (char *)VAR_10->source);
 if (!VAR_13) {
  FUNC_1(VAR_11->dev, "error: source %s not found\n",
   VAR_10->source);
  VAR_18 = -VAR_0;
  goto err;
 }







 if (VAR_13->id == VAR_6 ||
     VAR_13->id == VAR_7)
  goto err;

 VAR_12->source_id = VAR_13->comp_id;


 VAR_14 = FUNC_6(VAR_11, (char *)VAR_10->sink);
 if (!VAR_14) {
  FUNC_1(VAR_11->dev, "error: sink %s not found\n",
   VAR_10->sink);
  VAR_18 = -VAR_0;
  goto err;
 }





 if (VAR_14->id == VAR_6 ||
     VAR_14->id == VAR_7)
  goto err;

 VAR_12->sink_id = VAR_14->comp_id;







 if (VAR_13->id != VAR_5 &&
     VAR_14->id != VAR_5) {
  FUNC_0(VAR_11->dev, "warning: neither Linked source component %s nor sink component %s is of buffer type, ignoring link\n",
   VAR_10->source, VAR_10->sink);
  VAR_18 = 0;
  goto err;
 } else {
  VAR_18 = FUNC_7(VAR_11->ipc,
      VAR_12->hdr.cmd,
      VAR_12, sizeof(*VAR_12),
      &VAR_17, sizeof(VAR_17));


  if (VAR_18 < 0) {
   FUNC_1(VAR_11->dev, "error: failed to add route sink %s control %s source %s\n",
    VAR_10->sink,
    VAR_10->control ? VAR_10->control : "none",
    VAR_10->source);
   goto err;
  }


  if (VAR_17.error < 0) {
   FUNC_1(VAR_11->dev, "error: DSP failed to add route sink %s control %s source %s result %d\n",
    VAR_10->sink,
    VAR_10->control ? VAR_10->control : "none",
    VAR_10->source, VAR_17.error);
   VAR_18 = VAR_17.error;
   goto err;
  }

  VAR_16->route = VAR_10;
  VAR_15->private = VAR_16;
  VAR_16->private = VAR_12;


  FUNC_4(&VAR_16->list, &VAR_11->route_list);

  return VAR_18;
 }

err:
 FUNC_2(VAR_12);
 FUNC_2(VAR_16);
 return VAR_18;
}
