
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int dummy; } ;
struct ifacaddr6 {int aca_users; int aca_refcnt; int aca_tstamp; int aca_cstamp; int aca_addr_lst; struct fib6_info* aca_rt; struct in6_addr aca_addr; } ;
struct fib6_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct fib6_info*) ;
 int VAR_1 ;
 struct ifacaddr6* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static struct ifacaddr6 *FUNC_4(struct fib6_info *VAR_2,
       const struct in6_addr *VAR_3)
{
 struct ifacaddr6 *VAR_4;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->aca_addr = *VAR_3;
 FUNC_1(VAR_2);
 VAR_4->aca_rt = VAR_2;
 FUNC_0(&VAR_4->aca_addr_lst);
 VAR_4->aca_users = 1;

 VAR_4->aca_cstamp = VAR_4->aca_tstamp = VAR_1;
 FUNC_3(&VAR_4->aca_refcnt, 1);

 return VAR_4;
}
