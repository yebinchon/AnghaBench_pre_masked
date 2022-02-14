
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsock_sock {struct hvsock* trans; } ;
struct hvsock {int chan; } ;
typedef int s64 ;


 int FUNC_0 (int ) ;

__attribute__((used)) static s64 FUNC_1(struct vsock_sock *VAR_0)
{
 struct hvsock *VAR_1 = VAR_0->trans;

 return FUNC_0(VAR_1->chan);
}
