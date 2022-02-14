
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int offset; int * callback_data; } ;
struct snd_motu {TYPE_1__ async_handler; int unit; } ;
struct fw_device {TYPE_2__* card; } ;
typedef int data ;
typedef int __be32 ;
struct TYPE_4__ {int node_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 struct fw_device* FUNC_1 (int ) ;
 int FUNC_2 (struct snd_motu*,int ,int *,int) ;

int FUNC_3(struct snd_motu *VAR_3)
{
 struct fw_device *VAR_4 = FUNC_1(VAR_3->unit);
 __be32 VAR_5;
 int VAR_6;

 if (VAR_3->async_handler.callback_data == ((void*)0))
  return -VAR_2;


 VAR_5 = FUNC_0((VAR_4->card->node_id << 16) |
      (VAR_3->async_handler.offset >> 32));
 VAR_6 = FUNC_2(VAR_3, VAR_0, &VAR_5,
      sizeof(VAR_5));
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5 = FUNC_0(VAR_3->async_handler.offset);
 return FUNC_2(VAR_3, VAR_1, &VAR_5,
       sizeof(VAR_5));
}
