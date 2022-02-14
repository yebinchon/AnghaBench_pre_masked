
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef scalar_t__ u32 ;
struct sock {int dummy; } ;
struct tipc_sock {int published; scalar_t__ pub_count; int publications; scalar_t__ portid; struct sock sk; } ;
struct tipc_name_seq {int upper; int lower; int type; } ;
struct publication {int binding_sock; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 struct net* FUNC_1 (struct sock*) ;
 struct publication* FUNC_2 (struct net*,int ,int ,int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (struct sock*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct tipc_sock *VAR_4, uint VAR_5,
      struct tipc_name_seq const *VAR_6)
{
 struct sock *VAR_7 = &VAR_4->sk;
 struct net *VAR_8 = FUNC_1(VAR_7);
 struct publication *VAR_9;
 u32 VAR_10;

 if (VAR_5 != VAR_3)
  VAR_5 = VAR_2;

 if (FUNC_3(VAR_7))
  return -VAR_1;
 VAR_10 = VAR_4->portid + VAR_4->pub_count + 1;
 if (VAR_10 == VAR_4->portid)
  return -VAR_0;

 VAR_9 = FUNC_2(VAR_8, VAR_6->type, VAR_6->lower, VAR_6->upper,
        VAR_5, VAR_4->portid, VAR_10);
 if (FUNC_4(!VAR_9))
  return -VAR_1;

 FUNC_0(&VAR_9->binding_sock, &VAR_4->publications);
 VAR_4->pub_count++;
 VAR_4->published = 1;
 return 0;
}
