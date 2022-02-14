
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_transport_recv_notify_data {int notify_on_block; } ;
struct sock {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*,size_t) ;
 int FUNC_1 (struct sock*) ;

__attribute__((used)) static int
FUNC_2(
    struct sock *VAR_1,
    size_t VAR_2,
    struct vmci_transport_recv_notify_data *VAR_3)
{
 int VAR_4 = 0;


 if (!FUNC_0(VAR_1, VAR_2)) {
  VAR_4 = -VAR_0;
  return VAR_4;
 }
 return VAR_4;
}
