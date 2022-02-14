
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_sof_dfsentry {struct snd_sof_dev* sdev; int size; int buf; int type; } ;
struct TYPE_2__ {int bytes; int area; } ;
struct snd_sof_dev {int debugfs_root; TYPE_1__ dmatb; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,int ,struct snd_sof_dfsentry*,int *) ;
 struct snd_sof_dfsentry* FUNC_1 (int ,int,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(struct snd_sof_dev *VAR_5)
{
 struct snd_sof_dfsentry *VAR_6;

 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_5->dev, sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_6->type = VAR_3;
 VAR_6->buf = VAR_5->dmatb.area;
 VAR_6->size = VAR_5->dmatb.bytes;
 VAR_6->sdev = VAR_5;

 FUNC_0("trace", 0444, VAR_5->debugfs_root, VAR_6,
       &VAR_4);

 return 0;
}
