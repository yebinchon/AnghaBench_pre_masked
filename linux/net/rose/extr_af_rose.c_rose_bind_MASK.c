
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sockaddr_rose {scalar_t__ srose_family; int srose_ndigis; int srose_digi; int srose_addr; int srose_call; } ;
struct sockaddr {int dummy; } ;
struct sock {int dummy; } ;
struct rose_sock {int source_ndigis; int * source_digis; struct net_device* device; int source_addr; int source_call; } ;
struct net_device {int dummy; } ;
struct full_sockaddr_rose {int * srose_digis; } ;
struct TYPE_4__ {int call; } ;
typedef TYPE_1__ ax25_uid_assoc ;
typedef int ax25_address ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct net_device*) ;
 struct net_device* FUNC_5 (int *) ;
 int FUNC_6 (struct sock*) ;
 struct rose_sock* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*,int ) ;
 int FUNC_9 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_10(struct socket *VAR_8, struct sockaddr *VAR_9, int VAR_10)
{
 struct sock *VAR_11 = VAR_8->sk;
 struct rose_sock *VAR_12 = FUNC_7(VAR_11);
 struct sockaddr_rose *VAR_13 = (struct sockaddr_rose *)VAR_9;
 struct net_device *VAR_14;
 ax25_address *VAR_15;
 ax25_uid_assoc *VAR_16;
 int VAR_17;

 if (!FUNC_8(VAR_11, VAR_6))
  return -VAR_4;

 if (VAR_10 != sizeof(struct sockaddr_rose) && VAR_10 != sizeof(struct full_sockaddr_rose))
  return -VAR_4;

 if (VAR_13->srose_family != VAR_0)
  return -VAR_4;

 if (VAR_10 == sizeof(struct sockaddr_rose) && VAR_13->srose_ndigis > 1)
  return -VAR_4;

 if ((unsigned int) VAR_13->srose_ndigis > VAR_5)
  return -VAR_4;

 if ((VAR_14 = FUNC_5(&VAR_13->srose_addr)) == ((void*)0))
  return -VAR_3;

 VAR_15 = &VAR_13->srose_call;

 VAR_16 = FUNC_0(FUNC_3());
 if (VAR_16) {
  VAR_12->source_call = VAR_16->call;
  FUNC_1(VAR_16);
 } else {
  if (VAR_7 && !FUNC_2(VAR_1)) {
   FUNC_4(VAR_14);
   return -VAR_2;
  }
  VAR_12->source_call = *VAR_15;
 }

 VAR_12->source_addr = VAR_13->srose_addr;
 VAR_12->device = VAR_14;
 VAR_12->source_ndigis = VAR_13->srose_ndigis;

 if (VAR_10 == sizeof(struct full_sockaddr_rose)) {
  struct full_sockaddr_rose *VAR_18 = (struct full_sockaddr_rose *)VAR_9;
  for (VAR_17 = 0 ; VAR_17 < VAR_13->srose_ndigis ; VAR_17++)
   VAR_12->source_digis[VAR_17] = VAR_18->srose_digis[VAR_17];
 } else {
  if (VAR_12->source_ndigis == 1) {
   VAR_12->source_digis[0] = VAR_13->srose_digi;
  }
 }

 FUNC_6(VAR_11);

 FUNC_9(VAR_11, VAR_6);

 return 0;
}
