
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef int u16 ;
struct sst_data {TYPE_1__* pdev; struct snd_sst_bytes_v2* byte_stream; } ;
struct snd_sst_bytes_v2 {int len; int bytes; void* pipe_id; void* task_id; void* block; void* ipc_msg; int type; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,void*,int) ;
 int FUNC_2 (char*,int ,struct snd_sst_bytes_v2*,int) ;

__attribute__((used)) static int FUNC_3(struct sst_data *VAR_4,
      u8 VAR_5, u8 VAR_6,
      u8 VAR_7, u8 VAR_8,
      u16 VAR_9, void *VAR_10)
{
 struct snd_sst_bytes_v2 *VAR_11 = VAR_4->byte_stream;

 VAR_11->type = VAR_2;
 VAR_11->ipc_msg = VAR_5;
 VAR_11->block = VAR_6;
 VAR_11->task_id = VAR_7;
 VAR_11->pipe_id = VAR_8;

 if (VAR_9 > VAR_3 - sizeof(*VAR_11)) {
  FUNC_0(&VAR_4->pdev->dev, "command length too big (%u)", VAR_9);
  return -VAR_1;
 }
 VAR_11->len = VAR_9;
 FUNC_1(VAR_11->bytes, VAR_10, VAR_9);
 FUNC_2("writing to lpe: ", VAR_0,
        VAR_11, VAR_9 + sizeof(*VAR_11));
 return 0;
}
