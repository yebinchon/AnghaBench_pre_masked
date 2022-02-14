
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conn {int dummy; } ;
struct netlink_callback {int data; scalar_t__* args; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nf_conn*) ;

__attribute__((used)) static int FUNC_2(struct netlink_callback *VAR_0)
{
 if (VAR_0->args[1])
  FUNC_1((struct nf_conn *)VAR_0->args[1]);
 FUNC_0(VAR_0->data);
 return 0;
}
