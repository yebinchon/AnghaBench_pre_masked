
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sst_generic_ipc {int dsp; } ;
struct TYPE_2__ {int header; int size; int data; } ;
struct ipc_message {TYPE_1__ tx; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct sst_generic_ipc *VAR_0, struct ipc_message *VAR_1)
{

 FUNC_1(VAR_0->dsp, VAR_1->tx.data, VAR_1->tx.size);
 FUNC_0(VAR_0->dsp, VAR_1->tx.header);
}
