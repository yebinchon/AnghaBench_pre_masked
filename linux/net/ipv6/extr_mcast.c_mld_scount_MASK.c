
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_sf_list {struct ip6_sf_list* sf_next; } ;
struct ifmcaddr6 {struct ip6_sf_list* mca_sources; } ;


 int FUNC_0 (struct ifmcaddr6*,struct ip6_sf_list*,int,int,int) ;

__attribute__((used)) static int
FUNC_1(struct ifmcaddr6 *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 struct ip6_sf_list *VAR_4;
 int VAR_5 = 0;

 for (VAR_4 = VAR_0->mca_sources; VAR_4; VAR_4 = VAR_4->sf_next) {
  if (!FUNC_0(VAR_0, VAR_4, VAR_1, VAR_2, VAR_3))
   continue;
  VAR_5++;
 }
 return VAR_5;
}
