
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ recv; scalar_t__ recv_buf; int send; int close; int open; } ;
struct nci_uart {size_t driver; int name; TYPE_1__ ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct nci_uart** VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,size_t) ;
 int FUNC_1 (char*,int ,size_t) ;

int FUNC_2(struct nci_uart *VAR_6)
{
 if (!VAR_6 || !VAR_6->ops.open ||
     !VAR_6->ops.recv || !VAR_6->ops.close)
  return -VAR_1;


 VAR_6->ops.send = VAR_5;


 if (!VAR_6->ops.recv_buf)
  VAR_6->ops.recv_buf = VAR_3;
 if (!VAR_6->ops.recv)
  VAR_6->ops.recv = VAR_2;


 if (VAR_4[VAR_6->driver]) {
  FUNC_0("driver %d is already registered\n", VAR_6->driver);
  return -VAR_0;
 }
 VAR_4[VAR_6->driver] = VAR_6;

 FUNC_1("NCI uart driver '%s [%d]' registered\n", VAR_6->name, VAR_6->driver);

 return 0;
}
