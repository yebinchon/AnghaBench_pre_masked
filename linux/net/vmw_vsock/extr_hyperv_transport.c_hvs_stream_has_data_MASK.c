
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsock_sock {int peer_shutdown; struct hvsock* trans; } ;
struct hvsock {scalar_t__ recv_data_len; int chan; } ;
typedef int s64 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static s64 FUNC_1(struct vsock_sock *VAR_1)
{
 struct hvsock *VAR_2 = VAR_1->trans;
 s64 VAR_3;

 if (VAR_2->recv_data_len > 0)
  return 1;

 switch (FUNC_0(VAR_2->chan)) {
 case 1:
  VAR_3 = 1;
  break;
 case 0:
  VAR_1->peer_shutdown |= VAR_0;
  VAR_3 = 0;
  break;
 default:
  VAR_3 = 0;
  break;
 }

 return VAR_3;
}
