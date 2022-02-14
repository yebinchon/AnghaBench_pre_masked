
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_ipc_message {int header; int member_0; } ;
struct sst_dsp {int spinlock; } ;
struct sst_byt_stream {int commited; int node; int str_id; } ;
struct sst_byt {int dev; int ipc; struct sst_dsp* dsp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct sst_byt_stream*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,int ,int,int ) ;
 int FUNC_6 (int *,struct sst_ipc_message,int *) ;

int FUNC_7(struct sst_byt *VAR_2, struct sst_byt_stream *VAR_3)
{
 struct sst_ipc_message VAR_4 = {0};
 int VAR_5 = 0;
 struct sst_dsp *VAR_6 = VAR_2->dsp;
 unsigned long VAR_7;

 if (!VAR_3->commited)
  goto out;

 VAR_4.header = FUNC_5(VAR_1,
   0, 0, VAR_3->str_id);
 VAR_5 = FUNC_6(&VAR_2->ipc, VAR_4, ((void*)0));
 if (VAR_5 < 0) {
  FUNC_0(VAR_2->dev, "ipc: free stream %d failed\n",
   VAR_3->str_id);
  return -VAR_0;
 }

 VAR_3->commited = 0;
out:
 FUNC_3(&VAR_6->spinlock, VAR_7);
 FUNC_2(&VAR_3->node);
 FUNC_1(VAR_3);
 FUNC_4(&VAR_6->spinlock, VAR_7);

 return VAR_5;
}
