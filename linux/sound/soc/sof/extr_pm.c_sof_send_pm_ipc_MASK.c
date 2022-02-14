
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sof_ipc_reply {int dummy; } ;
struct TYPE_2__ {int size; int cmd; } ;
struct sof_ipc_pm_ctx {TYPE_1__ hdr; } ;
struct snd_sof_dev {int ipc; } ;
typedef int reply ;
typedef int pm_ctx ;


 int VAR_0 ;
 int FUNC_0 (struct sof_ipc_pm_ctx*,int ,int) ;
 int FUNC_1 (int ,int,struct sof_ipc_pm_ctx*,int,struct sof_ipc_reply*,int) ;

__attribute__((used)) static int FUNC_2(struct snd_sof_dev *VAR_1, int VAR_2)
{
 struct sof_ipc_pm_ctx VAR_3;
 struct sof_ipc_reply VAR_4;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));


 VAR_3.hdr.size = sizeof(VAR_3);
 VAR_3.hdr.cmd = VAR_0 | VAR_2;


 return FUNC_1(VAR_1->ipc, VAR_3.hdr.cmd, &VAR_3,
     sizeof(VAR_3), &VAR_4, sizeof(VAR_4));
}
