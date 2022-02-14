
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_sof_ipc_msg {int dummy; } ;
struct snd_sof_dev {int dummy; } ;
struct TYPE_2__ {int (* send_msg ) (struct snd_sof_dev*,struct snd_sof_ipc_msg*) ;} ;


 TYPE_1__* FUNC_0 (struct snd_sof_dev*) ;
 int FUNC_1 (struct snd_sof_dev*,struct snd_sof_ipc_msg*) ;

__attribute__((used)) static inline int FUNC_2(struct snd_sof_dev *VAR_0,
           struct snd_sof_ipc_msg *VAR_1)
{
 return FUNC_0(VAR_0)->send_msg(VAR_0, VAR_1);
}
