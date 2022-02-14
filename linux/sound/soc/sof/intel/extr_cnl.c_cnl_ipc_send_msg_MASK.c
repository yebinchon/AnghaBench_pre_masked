
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_sof_ipc_msg {int msg_size; int msg_data; } ;
struct TYPE_2__ {int offset; } ;
struct snd_sof_dev {TYPE_1__ host_box; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_sof_dev*,int ,int ,int ) ;
 int FUNC_1 (struct snd_sof_dev*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_sof_dev *VAR_3,
       struct snd_sof_ipc_msg *VAR_4)
{

 FUNC_1(VAR_3, VAR_3->host_box.offset, VAR_4->msg_data,
     VAR_4->msg_size);
 FUNC_0(VAR_3, VAR_2, VAR_0,
     VAR_1);

 return 0;
}
