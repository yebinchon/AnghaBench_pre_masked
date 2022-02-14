
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsock_sock {struct hvsock* trans; } ;
struct hvsock {int chan; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static
int FUNC_1(struct vsock_sock *VAR_0, size_t VAR_1, bool *VAR_2)
{
 struct hvsock *VAR_3 = VAR_0->trans;

 *VAR_2 = FUNC_0(VAR_3->chan);
 return 0;
}
