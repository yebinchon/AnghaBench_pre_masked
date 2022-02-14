
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ cmd; int size; } ;
struct sof_ipc_ext_data_hdr {int type; TYPE_1__ hdr; } ;
struct snd_sof_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct snd_sof_dev*,struct sof_ipc_ext_data_hdr*) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct snd_sof_dev*,int,int,void*,int) ;

int FUNC_6(struct snd_sof_dev *VAR_4, u32 VAR_5, u32 VAR_6)
{
 struct sof_ipc_ext_data_hdr *VAR_7;
 void *VAR_8;
 int VAR_9 = 0;

 VAR_8 = FUNC_4(VAR_2, VAR_1);
 if (!VAR_8)
  return -VAR_0;


 FUNC_5(VAR_4, VAR_5, VAR_6, VAR_8,
          sizeof(*VAR_7));
 VAR_7 = VAR_8;

 while (VAR_7->hdr.cmd == VAR_3) {

  VAR_6 += sizeof(*VAR_7);
  FUNC_5(VAR_4, VAR_5, VAR_6,
       (void *)((u8 *)VAR_8 + sizeof(*VAR_7)),
       VAR_7->hdr.size - sizeof(*VAR_7));

  FUNC_0(VAR_4->dev, "found ext header type %d size 0x%x\n",
   VAR_7->type, VAR_7->hdr.size);


  switch (VAR_7->type) {
  case 129:
   break;
  case 128:
   VAR_9 = FUNC_2(VAR_4, VAR_7);
   break;
  default:
   break;
  }

  if (VAR_9 < 0) {
   FUNC_1(VAR_4->dev, "error: failed to parse ext data type %d\n",
    VAR_7->type);
   break;
  }


  VAR_6 += VAR_7->hdr.size;
  FUNC_5(VAR_4, VAR_5, VAR_6, VAR_8,
           sizeof(*VAR_7));
  VAR_7 = VAR_8;
 }

 FUNC_3(VAR_8);
 return VAR_9;
}
