
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sock {int sk_bound_dev_if; int sk_protocol; int sk_mark; } ;
struct net {int dummy; } ;
struct iphdr {int saddr; int daddr; } ;
struct inet_sock {scalar_t__ hdrincl; } ;
struct flowi4 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock const*) ;
 int VAR_1 ;
 int FUNC_1 (struct flowi4*,int,int ,int ,int ,int ,int,int ,int ,int ,int ,int ) ;
 struct inet_sock* FUNC_2 (struct sock const*) ;
 int FUNC_3 (struct net const*,struct sock const*) ;

__attribute__((used)) static void FUNC_4(const struct net *VAR_2, struct flowi4 *VAR_3,
        const struct sock *VAR_4,
        const struct iphdr *VAR_5,
        int VAR_6, u8 VAR_7,
        u8 VAR_8, u32 VAR_9, int VAR_10)
{
 if (VAR_4) {
  const struct inet_sock *VAR_11 = FUNC_2(VAR_4);

  VAR_6 = VAR_4->sk_bound_dev_if;
  VAR_9 = VAR_4->sk_mark;
  VAR_7 = FUNC_0(VAR_4);
  VAR_8 = VAR_11->hdrincl ? VAR_0 : VAR_4->sk_protocol;
 }
 FUNC_1(VAR_3, VAR_6, VAR_9, VAR_7,
      VAR_1, VAR_8,
      VAR_10,
      VAR_5->daddr, VAR_5->saddr, 0, 0,
      FUNC_3(VAR_2, VAR_4));
}
