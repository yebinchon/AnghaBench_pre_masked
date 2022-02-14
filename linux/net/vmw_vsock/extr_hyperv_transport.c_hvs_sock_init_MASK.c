
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsock_sock {struct hvsock* trans; } ;
struct sock {int sk_rcvbuf; int sk_sndbuf; } ;
struct hvsock {struct vsock_sock* vsk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct hvsock* FUNC_0 (int,int ) ;
 struct sock* FUNC_1 (struct vsock_sock*) ;

__attribute__((used)) static int FUNC_2(struct vsock_sock *VAR_4, struct vsock_sock *VAR_5)
{
 struct hvsock *VAR_6;
 struct sock *VAR_7 = FUNC_1(VAR_4);

 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_4->trans = VAR_6;
 VAR_6->vsk = VAR_4;
 VAR_7->sk_sndbuf = VAR_3;
 VAR_7->sk_rcvbuf = VAR_2;
 return 0;
}
