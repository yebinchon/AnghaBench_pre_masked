
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sst_ipc_message {int size; struct sst_byt_start_stream_params* data; int header; } ;
struct sst_byt_stream {int str_id; } ;
struct sst_byt_start_stream_params {int byte_offset; } ;
struct sst_byt {int dev; int ipc; } ;
typedef int start_stream ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int,int,int ) ;
 int FUNC_2 (int *,struct sst_ipc_message) ;

int FUNC_3(struct sst_byt *VAR_1, struct sst_byt_stream *VAR_2,
    u32 VAR_3)
{
 struct sst_byt_start_stream_params VAR_4;
 struct sst_ipc_message VAR_5;
 int VAR_6;

 VAR_4.byte_offset = VAR_3;
 VAR_5.header = FUNC_1(VAR_0,
    sizeof(VAR_4) + sizeof(u32),
    1, VAR_2->str_id);
 VAR_5.data = &VAR_4;
 VAR_5.size = sizeof(VAR_4);

 VAR_6 = FUNC_2(&VAR_1->ipc, VAR_5);
 if (VAR_6 < 0)
  FUNC_0(VAR_1->dev, "ipc: error failed to start stream %d\n",
   VAR_2->str_id);

 return VAR_6;
}
