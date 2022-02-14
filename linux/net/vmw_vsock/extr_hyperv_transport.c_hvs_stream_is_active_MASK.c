
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsock_sock {struct hvsock* trans; } ;
struct hvsock {int * chan; } ;



__attribute__((used)) static bool FUNC_0(struct vsock_sock *VAR_0)
{
 struct hvsock *VAR_1 = VAR_0->trans;

 return VAR_1->chan != ((void*)0);
}
