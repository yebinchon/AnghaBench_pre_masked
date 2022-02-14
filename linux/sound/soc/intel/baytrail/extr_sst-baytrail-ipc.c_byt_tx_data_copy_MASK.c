
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int header; int size; scalar_t__ data; } ;
struct ipc_message {TYPE_1__ tx; } ;


 int FUNC_0 (scalar_t__,char*,size_t) ;

__attribute__((used)) static void FUNC_1(struct ipc_message *VAR_0, char *VAR_1,
 size_t VAR_2)
{

 *(u32 *)VAR_0->tx.data = (u32)(VAR_0->tx.header & (u32)-1);
 FUNC_0(VAR_0->tx.data + sizeof(u32), VAR_1, VAR_2);
 VAR_0->tx.size += sizeof(u32);
}
