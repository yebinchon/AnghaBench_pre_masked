
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_sf_list {struct ip6_sf_list* sf_next; } ;
struct ifmcaddr6 {size_t mca_sfmode; int* mca_sfcount; struct ip6_sf_list* mca_sources; struct ip6_sf_list* mca_tomb; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct ip6_sf_list*) ;

__attribute__((used)) static void FUNC_1(struct ifmcaddr6 *VAR_2)
{
 struct ip6_sf_list *VAR_3, *VAR_4;

 for (VAR_3 = VAR_2->mca_tomb; VAR_3; VAR_3 = VAR_4) {
  VAR_4 = VAR_3->sf_next;
  FUNC_0(VAR_3);
 }
 VAR_2->mca_tomb = ((void*)0);
 for (VAR_3 = VAR_2->mca_sources; VAR_3; VAR_3 = VAR_4) {
  VAR_4 = VAR_3->sf_next;
  FUNC_0(VAR_3);
 }
 VAR_2->mca_sources = ((void*)0);
 VAR_2->mca_sfmode = VAR_0;
 VAR_2->mca_sfcount[VAR_1] = 0;
 VAR_2->mca_sfcount[VAR_0] = 1;
}
