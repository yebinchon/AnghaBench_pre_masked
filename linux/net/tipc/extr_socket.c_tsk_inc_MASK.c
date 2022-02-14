
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct tipc_sock {int peer_caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static u16 FUNC_1(struct tipc_sock *VAR_2, int VAR_3)
{
 if (FUNC_0(VAR_2->peer_caps & VAR_1))
  return ((VAR_3 / VAR_0) + 1);
 return 1;
}
