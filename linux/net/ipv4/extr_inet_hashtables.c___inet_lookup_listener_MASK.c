
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct inet_listen_hashbucket {int dummy; } ;
struct inet_hashinfo {int dummy; } ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sock*) ;
 int const FUNC_1 (int ) ;
 struct inet_listen_hashbucket* FUNC_2 (struct inet_hashinfo*,unsigned int) ;
 struct sock* FUNC_3 (struct net*,struct inet_listen_hashbucket*,struct sk_buff*,int,int const,int ,int const,unsigned short const,int const,int const) ;
 unsigned int FUNC_4 (struct net*,int const,unsigned short const) ;

struct sock *FUNC_5(struct net *VAR_1,
        struct inet_hashinfo *VAR_2,
        struct sk_buff *VAR_3, int VAR_4,
        const __be32 VAR_5, __be16 VAR_6,
        const __be32 VAR_7, const unsigned short VAR_8,
        const int VAR_9, const int VAR_10)
{
 struct inet_listen_hashbucket *VAR_11;
 struct sock *VAR_12 = ((void*)0);
 unsigned int VAR_13;

 VAR_13 = FUNC_4(VAR_1, VAR_7, VAR_8);
 VAR_11 = FUNC_2(VAR_2, VAR_13);

 VAR_12 = FUNC_3(VAR_1, VAR_11, VAR_3, VAR_4,
        VAR_5, VAR_6, VAR_7, VAR_8,
        VAR_9, VAR_10);
 if (VAR_12)
  goto done;


 VAR_13 = FUNC_4(VAR_1, FUNC_1(VAR_0), VAR_8);
 VAR_11 = FUNC_2(VAR_2, VAR_13);

 VAR_12 = FUNC_3(VAR_1, VAR_11, VAR_3, VAR_4,
        VAR_5, VAR_6, FUNC_1(VAR_0), VAR_8,
        VAR_9, VAR_10);
done:
 if (FUNC_0(VAR_12))
  return ((void*)0);
 return VAR_12;
}
