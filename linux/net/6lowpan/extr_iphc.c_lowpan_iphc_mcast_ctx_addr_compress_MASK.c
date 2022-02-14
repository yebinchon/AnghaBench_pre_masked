
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lowpan_iphc_ctx {int dummy; } ;
struct in6_addr {int * s6_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int **,int *,int) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static u8 FUNC_2(u8 **VAR_1,
           const struct lowpan_iphc_ctx *VAR_2,
           const struct in6_addr *VAR_3)
{
 u8 VAR_4[6];


 FUNC_1(VAR_4, &VAR_3->s6_addr[1], 2);

 FUNC_1(&VAR_4[1], &VAR_3->s6_addr[11], 4);
 FUNC_0(VAR_1, VAR_4, 6);

 return VAR_0;
}
