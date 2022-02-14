
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int* data; } ;
struct rose_sock {int vr; int vs; int neighbour; } ;


 struct rose_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 struct rose_sock *VAR_2 = FUNC_0(VAR_0);

 if (VAR_1 == ((void*)0))
  return;

 VAR_1->data[2] |= (VAR_2->vr << 5) & 0xE0;
 VAR_1->data[2] |= (VAR_2->vs << 1) & 0x0E;

 FUNC_1(VAR_0);

 FUNC_2(VAR_1, VAR_2->neighbour);
}
