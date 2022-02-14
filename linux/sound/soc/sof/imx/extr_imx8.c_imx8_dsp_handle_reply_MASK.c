
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct imx_dsp_ipc {int dummy; } ;
struct imx8_priv {TYPE_1__* sdev; } ;
struct TYPE_3__ {int ipc_lock; } ;


 int FUNC_0 (TYPE_1__*) ;
 struct imx8_priv* FUNC_1 (struct imx_dsp_ipc*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct imx_dsp_ipc *VAR_0)
{
 struct imx8_priv *VAR_1 = FUNC_1(VAR_0);
 unsigned long VAR_2;

 FUNC_3(&VAR_1->sdev->ipc_lock, VAR_2);
 FUNC_0(VAR_1->sdev);
 FUNC_2(VAR_1->sdev, 0);
 FUNC_4(&VAR_1->sdev->ipc_lock, VAR_2);
}
