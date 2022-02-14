
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sockaddr {int dummy; } ;
struct sock {scalar_t__ sk_state; } ;
struct rose_sock {int dest_ndigis; int source_ndigis; int * source_digis; int source_call; int source_addr; int * dest_digis; int dest_call; int dest_addr; } ;
struct full_sockaddr_rose {int srose_ndigis; int * srose_digis; int srose_call; int srose_addr; void* srose_family; } ;


 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct full_sockaddr_rose*,int ,int) ;
 struct rose_sock* FUNC_1 (struct sock*) ;

__attribute__((used)) static int FUNC_2(struct socket *VAR_3, struct sockaddr *VAR_4,
 int VAR_5)
{
 struct full_sockaddr_rose *VAR_6 = (struct full_sockaddr_rose *)VAR_4;
 struct sock *VAR_7 = VAR_3->sk;
 struct rose_sock *VAR_8 = FUNC_1(VAR_7);
 int VAR_9;

 FUNC_0(VAR_6, 0, sizeof(*VAR_6));
 if (VAR_5 != 0) {
  if (VAR_7->sk_state != VAR_2)
   return -VAR_1;
  VAR_6->srose_family = VAR_0;
  VAR_6->srose_addr = VAR_8->dest_addr;
  VAR_6->srose_call = VAR_8->dest_call;
  VAR_6->srose_ndigis = VAR_8->dest_ndigis;
  for (VAR_9 = 0; VAR_9 < VAR_8->dest_ndigis; VAR_9++)
   VAR_6->srose_digis[VAR_9] = VAR_8->dest_digis[VAR_9];
 } else {
  VAR_6->srose_family = VAR_0;
  VAR_6->srose_addr = VAR_8->source_addr;
  VAR_6->srose_call = VAR_8->source_call;
  VAR_6->srose_ndigis = VAR_8->source_ndigis;
  for (VAR_9 = 0; VAR_9 < VAR_8->source_ndigis; VAR_9++)
   VAR_6->srose_digis[VAR_9] = VAR_8->source_digis[VAR_9];
 }

 return sizeof(struct full_sockaddr_rose);
}
