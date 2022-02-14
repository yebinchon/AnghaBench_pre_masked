
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data; } ;
struct ipc_message {TYPE_1__ tx; } ;


 int FUNC_0 (int ,char*,size_t) ;

void FUNC_1(struct ipc_message *VAR_0, char *VAR_1,
  size_t VAR_2)
{
 if (VAR_2)
  FUNC_0(VAR_0->tx.data, VAR_1, VAR_2);
}
