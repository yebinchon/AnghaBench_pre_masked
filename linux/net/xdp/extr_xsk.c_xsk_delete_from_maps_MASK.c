
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xsk_map {int dummy; } ;
struct xdp_sock {int dummy; } ;


 struct xsk_map* FUNC_0 (struct xdp_sock*,struct xdp_sock***) ;
 int FUNC_1 (struct xsk_map*) ;
 int FUNC_2 (struct xsk_map*,struct xdp_sock*,struct xdp_sock**) ;

__attribute__((used)) static void FUNC_3(struct xdp_sock *VAR_0)
{
 struct xdp_sock **VAR_1 = ((void*)0);
 struct xsk_map *VAR_2;

 while ((VAR_2 = FUNC_0(VAR_0, &VAR_1))) {
  FUNC_2(VAR_2, VAR_0, VAR_1);
  FUNC_1(VAR_2);
 }
}
