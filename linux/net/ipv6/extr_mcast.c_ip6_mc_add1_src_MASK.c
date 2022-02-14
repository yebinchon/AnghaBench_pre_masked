
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int dummy; } ;
struct ip6_sf_list {int * sf_count; struct ip6_sf_list* sf_next; struct in6_addr sf_addr; } ;
struct ifmcaddr6 {struct ip6_sf_list* mca_sources; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct in6_addr*,struct in6_addr const*) ;
 struct ip6_sf_list* FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct ifmcaddr6 *VAR_2, int VAR_3,
 const struct in6_addr *VAR_4)
{
 struct ip6_sf_list *VAR_5, *VAR_6;

 VAR_6 = ((void*)0);
 for (VAR_5 = VAR_2->mca_sources; VAR_5; VAR_5 = VAR_5->sf_next) {
  if (FUNC_0(&VAR_5->sf_addr, VAR_4))
   break;
  VAR_6 = VAR_5;
 }
 if (!VAR_5) {
  VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
  if (!VAR_5)
   return -VAR_0;

  VAR_5->sf_addr = *VAR_4;
  if (VAR_6) {
   VAR_6->sf_next = VAR_5;
  } else
   VAR_2->mca_sources = VAR_5;
 }
 VAR_5->sf_count[VAR_3]++;
 return 0;
}
