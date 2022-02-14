
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet6_dev {int dummy; } ;
struct in6_addr {int dummy; } ;
struct ifmcaddr6 {int mca_users; unsigned int mca_sfmode; int* mca_sfcount; int mca_flags; struct in6_addr mca_addr; int mca_lock; int mca_refcnt; int mca_tstamp; int mca_cstamp; struct inet6_dev* idev; int mca_timer; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct in6_addr*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct in6_addr*) ;
 int VAR_4 ;
 struct ifmcaddr6* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ) ;

__attribute__((used)) static struct ifmcaddr6 *FUNC_6(struct inet6_dev *VAR_5,
       const struct in6_addr *VAR_6,
       unsigned int VAR_7)
{
 struct ifmcaddr6 *VAR_8;

 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_0);
 if (!VAR_8)
  return ((void*)0);

 FUNC_5(&VAR_8->mca_timer, VAR_3, 0);

 VAR_8->mca_addr = *VAR_6;
 VAR_8->idev = VAR_5;
 VAR_8->mca_users = 1;

 VAR_8->mca_cstamp = VAR_8->mca_tstamp = VAR_4;
 FUNC_3(&VAR_8->mca_refcnt, 1);
 FUNC_4(&VAR_8->mca_lock);

 VAR_8->mca_sfmode = VAR_7;
 VAR_8->mca_sfcount[VAR_7] = 1;

 if (FUNC_1(&VAR_8->mca_addr) ||
     FUNC_0(&VAR_8->mca_addr) < VAR_1)
  VAR_8->mca_flags |= VAR_2;

 return VAR_8;
}
