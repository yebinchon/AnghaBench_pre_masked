
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sst_generic_ipc {int dsp; } ;
struct TYPE_2__ {int header; int size; int data; } ;
struct ipc_message {TYPE_1__ tx; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct sst_generic_ipc *VAR_1, struct ipc_message *VAR_2)
{
 if (VAR_2->tx.header & FUNC_0(1))
  FUNC_1(VAR_1->dsp, VAR_2->tx.data, VAR_2->tx.size);

 FUNC_2(VAR_1->dsp, VAR_0, VAR_2->tx.header);
}
