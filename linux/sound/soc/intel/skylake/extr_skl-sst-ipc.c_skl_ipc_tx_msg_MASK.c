
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sst_generic_ipc {int dsp; } ;
struct skl_ipc_header {int extension; int primary; } ;
struct TYPE_2__ {scalar_t__ size; int data; int header; } ;
struct ipc_message {TYPE_1__ tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct sst_generic_ipc *VAR_3, struct ipc_message *VAR_4)
{
 struct skl_ipc_header *VAR_5 = (struct skl_ipc_header *)(&VAR_4->tx.header);

 if (VAR_4->tx.size)
  FUNC_0(VAR_3->dsp, VAR_4->tx.data, VAR_4->tx.size);
 FUNC_1(VAR_3->dsp, VAR_1,
      VAR_5->extension);
 FUNC_1(VAR_3->dsp, VAR_0,
  VAR_5->primary | VAR_2);
}
