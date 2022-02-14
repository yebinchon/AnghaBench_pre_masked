
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_refcnt; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct inet_hashinfo {int dummy; } ;
struct in6_addr {int dummy; } ;
typedef int __be16 ;


 struct sock* FUNC_0 (struct net*,struct inet_hashinfo*,struct sk_buff*,int,struct in6_addr const*,int const,struct in6_addr const*,int ,int const,int ,int*) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int *) ;

struct sock *FUNC_3(struct net *VAR_0, struct inet_hashinfo *VAR_1,
     struct sk_buff *VAR_2, int VAR_3,
     const struct in6_addr *VAR_4, const __be16 VAR_5,
     const struct in6_addr *VAR_6, const __be16 VAR_7,
     const int VAR_8)
{
 struct sock *VAR_9;
 bool VAR_10;

 VAR_9 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
       FUNC_1(VAR_7), VAR_8, 0, &VAR_10);
 if (VAR_9 && !VAR_10 && !FUNC_2(&VAR_9->sk_refcnt))
  VAR_9 = ((void*)0);
 return VAR_9;
}
