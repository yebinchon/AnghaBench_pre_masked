
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xfrm_pol_inexact_key {int type; int dir; int family; int net; int if_id; } ;


 int FUNC_0 (int,int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static u32 FUNC_3(const void *VAR_0, u32 VAR_1, u32 VAR_2)
{
 const struct xfrm_pol_inexact_key *VAR_3 = VAR_0;
 u32 VAR_4 = VAR_3->type << 24 | VAR_3->dir << 16 | VAR_3->family;

 return FUNC_0(VAR_4, VAR_3->if_id, FUNC_1(FUNC_2(&VAR_3->net)),
       VAR_2);
}
