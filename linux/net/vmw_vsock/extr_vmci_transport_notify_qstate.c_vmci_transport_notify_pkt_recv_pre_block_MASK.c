
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_transport_recv_notify_data {int notify_on_block; } ;
struct sock {int dummy; } ;


 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;

__attribute__((used)) static int
FUNC_2(
    struct sock *VAR_0,
    size_t VAR_1,
    struct vmci_transport_recv_notify_data *VAR_2)
{
 int VAR_3 = 0;

 FUNC_1(VAR_0);

 if (VAR_2->notify_on_block) {
  VAR_3 = FUNC_0(VAR_0);
  if (VAR_3 < 0)
   return VAR_3;
  VAR_2->notify_on_block = 0;
 }

 return VAR_3;
}
