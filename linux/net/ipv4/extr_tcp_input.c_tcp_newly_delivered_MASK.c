
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tcp_sock {int delivered_ce; scalar_t__ delivered; } ;
struct sock {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net const*,int ,scalar_t__) ;
 struct net* FUNC_1 (struct sock*) ;
 struct tcp_sock* FUNC_2 (struct sock*) ;

__attribute__((used)) static u32 FUNC_3(struct sock *VAR_3, u32 VAR_4, int VAR_5)
{
 const struct net *VAR_6 = FUNC_1(VAR_3);
 struct tcp_sock *VAR_7 = FUNC_2(VAR_3);
 u32 VAR_8;

 VAR_8 = VAR_7->delivered - VAR_4;
 FUNC_0(VAR_6, VAR_1, VAR_8);
 if (VAR_5 & VAR_0) {
  VAR_7->delivered_ce += VAR_8;
  FUNC_0(VAR_6, VAR_2, VAR_8);
 }
 return VAR_8;
}
