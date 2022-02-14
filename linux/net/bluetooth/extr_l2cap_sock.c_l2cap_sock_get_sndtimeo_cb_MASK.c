
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {long sk_sndtimeo; } ;
struct l2cap_chan {struct sock* data; } ;



__attribute__((used)) static long FUNC_0(struct l2cap_chan *VAR_0)
{
 struct sock *VAR_1 = VAR_0->data;

 return VAR_1->sk_sndtimeo;
}
