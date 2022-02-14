
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_sf_list {scalar_t__* sf_count; struct ip6_sf_list* sf_next; int sf_crcount; scalar_t__ sf_oldin; int sf_addr; } ;
struct inet6_dev {int mc_qrv; } ;
struct in6_addr {int dummy; } ;
struct ifmcaddr6 {int mca_flags; struct ip6_sf_list* mca_tomb; struct ip6_sf_list* mca_sources; struct inet6_dev* idev; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (int *,struct in6_addr const*) ;
 int FUNC_1 (struct ip6_sf_list*) ;
 int FUNC_2 (struct inet6_dev*) ;

__attribute__((used)) static int FUNC_3(struct ifmcaddr6 *VAR_4, int VAR_5,
 const struct in6_addr *VAR_6)
{
 struct ip6_sf_list *VAR_7, *VAR_8;
 int VAR_9 = 0;

 VAR_8 = ((void*)0);
 for (VAR_7 = VAR_4->mca_sources; VAR_7; VAR_7 = VAR_7->sf_next) {
  if (FUNC_0(&VAR_7->sf_addr, VAR_6))
   break;
  VAR_8 = VAR_7;
 }
 if (!VAR_7 || VAR_7->sf_count[VAR_5] == 0) {

  return -VAR_0;
 }
 VAR_7->sf_count[VAR_5]--;
 if (!VAR_7->sf_count[VAR_3] && !VAR_7->sf_count[VAR_2]) {
  struct inet6_dev *VAR_10 = VAR_4->idev;


  if (VAR_8)
   VAR_8->sf_next = VAR_7->sf_next;
  else
   VAR_4->mca_sources = VAR_7->sf_next;
  if (VAR_7->sf_oldin && !(VAR_4->mca_flags & VAR_1) &&
      !FUNC_2(VAR_10)) {
   VAR_7->sf_crcount = VAR_10->mc_qrv;
   VAR_7->sf_next = VAR_4->mca_tomb;
   VAR_4->mca_tomb = VAR_7;
   VAR_9 = 1;
  } else
   FUNC_1(VAR_7);
 }
 return VAR_9;
}
