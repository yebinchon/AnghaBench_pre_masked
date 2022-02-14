
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_sf_list {scalar_t__ sf_crcount; struct ip6_sf_list* sf_next; } ;
struct inet6_dev {int lock; int mc_ifc_count; int mc_qrv; struct ifmcaddr6* mc_list; } ;
struct in6_addr {int dummy; } ;
struct ifmcaddr6 {scalar_t__* mca_sfcount; size_t mca_sfmode; int mca_lock; int idev; struct ip6_sf_list* mca_sources; int mca_crcount; int mca_addr; struct ifmcaddr6* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct ifmcaddr6*,int,struct in6_addr const*) ;
 scalar_t__ FUNC_1 (struct in6_addr const*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ifmcaddr6*) ;
 scalar_t__ FUNC_6 (struct ifmcaddr6*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct inet6_dev *VAR_5, const struct in6_addr *VAR_6,
     int VAR_7, int VAR_8, const struct in6_addr *VAR_9,
     int VAR_10)
{
 struct ifmcaddr6 *VAR_11;
 int VAR_12 = 0;
 int VAR_13, VAR_14;

 if (!VAR_5)
  return -VAR_1;
 FUNC_3(&VAR_5->lock);
 for (VAR_11 = VAR_5->mc_list; VAR_11; VAR_11 = VAR_11->next) {
  if (FUNC_1(VAR_6, &VAR_11->mca_addr))
   break;
 }
 if (!VAR_11) {

  FUNC_4(&VAR_5->lock);
  return -VAR_2;
 }
 FUNC_7(&VAR_11->mca_lock);
 FUNC_5(VAR_11);
 if (!VAR_10) {
  if (!VAR_11->mca_sfcount[VAR_7]) {
   FUNC_8(&VAR_11->mca_lock);
   FUNC_4(&VAR_5->lock);
   return -VAR_0;
  }
  VAR_11->mca_sfcount[VAR_7]--;
 }
 VAR_14 = 0;
 for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++) {
  int VAR_15 = FUNC_0(VAR_11, VAR_7, &VAR_9[VAR_13]);

  VAR_12 |= VAR_15 > 0;
  if (!VAR_14 && VAR_15 < 0)
   VAR_14 = VAR_15;
 }
 if (VAR_11->mca_sfmode == VAR_3 &&
     VAR_11->mca_sfcount[VAR_3] == 0 &&
     VAR_11->mca_sfcount[VAR_4]) {
  struct ip6_sf_list *VAR_16;


  VAR_11->mca_sfmode = VAR_4;
  VAR_11->mca_crcount = VAR_5->mc_qrv;
  VAR_5->mc_ifc_count = VAR_11->mca_crcount;
  for (VAR_16 = VAR_11->mca_sources; VAR_16; VAR_16 = VAR_16->sf_next)
   VAR_16->sf_crcount = 0;
  FUNC_2(VAR_11->idev);
 } else if (FUNC_6(VAR_11) || VAR_12)
  FUNC_2(VAR_11->idev);
 FUNC_8(&VAR_11->mca_lock);
 FUNC_4(&VAR_5->lock);
 return VAR_14;
}
