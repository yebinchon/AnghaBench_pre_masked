
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int mtu; } ;
struct mld2_report {scalar_t__ mld2r_ngrec; } ;
struct mld2_grec {void* grec_nsrcs; } ;
struct in6_addr {int dummy; } ;
struct ip6_sf_list {scalar_t__ sf_crcount; struct ip6_sf_list* sf_next; struct in6_addr sf_addr; scalar_t__ sf_gsresp; } ;
struct inet6_dev {struct net_device* dev; } ;
struct ifmcaddr6 {int mca_flags; scalar_t__ mca_sfmode; scalar_t__ mca_crcount; struct ip6_sf_list* mca_sources; struct ip6_sf_list* mca_tomb; struct inet6_dev* idev; } ;


 int FUNC_0 (struct sk_buff*) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int FUNC_1 (int ) ;
 struct sk_buff* FUNC_2 (struct sk_buff*,struct ifmcaddr6*,int,struct mld2_grec**,unsigned int) ;
 int FUNC_3 (struct ifmcaddr6*,int,int,int) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (struct ifmcaddr6*,struct ip6_sf_list*,int,int,int) ;
 int FUNC_6 (struct ip6_sf_list*) ;
 struct sk_buff* FUNC_7 (struct inet6_dev*,unsigned int) ;
 int FUNC_8 (struct sk_buff*) ;
 struct in6_addr* FUNC_9 (struct sk_buff*,int) ;
 scalar_t__ FUNC_10 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_11(struct sk_buff *VAR_9, struct ifmcaddr6 *VAR_10,
 int VAR_11, int VAR_12, int VAR_13, int VAR_14)
{
 struct inet6_dev *VAR_15 = VAR_10->idev;
 struct net_device *VAR_16 = VAR_15->dev;
 struct mld2_report *VAR_17;
 struct mld2_grec *VAR_18 = ((void*)0);
 struct ip6_sf_list *VAR_19, *VAR_20, *VAR_21, **VAR_22;
 int VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
 unsigned int VAR_28;

 if (VAR_10->mca_flags & VAR_2)
  return VAR_9;

 VAR_28 = FUNC_1(VAR_16->mtu);
 if (VAR_28 < VAR_0)
  return VAR_9;

 VAR_26 = VAR_11 == VAR_8 ||
    VAR_11 == VAR_7;
 VAR_27 = VAR_11 == VAR_7 ||
      VAR_11 == VAR_6;

 VAR_24 = VAR_23 = 0;

 VAR_22 = VAR_13 ? &VAR_10->mca_tomb : &VAR_10->mca_sources;

 if (!*VAR_22)
  goto empty_source;

 VAR_17 = VAR_9 ? (struct mld2_report *)FUNC_10(VAR_9) : ((void*)0);


 if (VAR_27) {
  if (VAR_17 && VAR_17->mld2r_ngrec &&
      FUNC_0(VAR_9) < FUNC_3(VAR_10, VAR_11, VAR_12, VAR_13)) {
   if (VAR_9)
    FUNC_8(VAR_9);
   VAR_9 = FUNC_7(VAR_15, VAR_28);
  }
 }
 VAR_25 = 1;
 VAR_21 = ((void*)0);
 for (VAR_19 = *VAR_22; VAR_19; VAR_19 = VAR_20) {
  struct in6_addr *VAR_29;

  VAR_20 = VAR_19->sf_next;

  if (!FUNC_5(VAR_10, VAR_19, VAR_11, VAR_12, VAR_13) && !VAR_14) {
   VAR_21 = VAR_19;
   continue;
  }




  if (((VAR_12 && VAR_10->mca_sfmode == VAR_3) ||
       (!VAR_12 && VAR_10->mca_crcount)) &&
      (VAR_11 == VAR_4 ||
       VAR_11 == VAR_5) && VAR_19->sf_crcount)
   goto decrease_sf_crcount;


  if (VAR_26)
   VAR_19->sf_gsresp = 0;

  if (FUNC_0(VAR_9) < sizeof(*VAR_29) +
      VAR_25*sizeof(struct mld2_grec)) {
   if (VAR_27 && !VAR_25)
    break;
   if (VAR_18)
    VAR_18->grec_nsrcs = FUNC_4(VAR_23);
   if (VAR_9)
    FUNC_8(VAR_9);
   VAR_9 = FUNC_7(VAR_15, VAR_28);
   VAR_25 = 1;
   VAR_23 = 0;
  }
  if (VAR_25) {
   VAR_9 = FUNC_2(VAR_9, VAR_10, VAR_11, &VAR_18, VAR_28);
   VAR_25 = 0;
  }
  if (!VAR_9)
   return ((void*)0);
  VAR_29 = FUNC_9(VAR_9, sizeof(*VAR_29));
  *VAR_29 = VAR_19->sf_addr;
  VAR_23++; VAR_24++;
  if ((VAR_11 == VAR_4 ||
       VAR_11 == VAR_5) && VAR_19->sf_crcount) {
decrease_sf_crcount:
   VAR_19->sf_crcount--;
   if ((VAR_13 || VAR_12) && VAR_19->sf_crcount == 0) {
    if (VAR_21)
     VAR_21->sf_next = VAR_19->sf_next;
    else
     *VAR_22 = VAR_19->sf_next;
    FUNC_6(VAR_19);
    continue;
   }
  }
  VAR_21 = VAR_19;
 }

empty_source:
 if (!VAR_24) {
  if (VAR_11 == VAR_4 ||
      VAR_11 == VAR_5)
   return VAR_9;
  if (VAR_10->mca_crcount || VAR_26 || VAR_14) {

   if (VAR_9 && FUNC_0(VAR_9) < sizeof(struct mld2_grec)) {
    FUNC_8(VAR_9);
    VAR_9 = ((void*)0);
   }
   VAR_9 = FUNC_2(VAR_9, VAR_10, VAR_11, &VAR_18, VAR_28);
  }
 }
 if (VAR_18)
  VAR_18->grec_nsrcs = FUNC_4(VAR_23);

 if (VAR_26)
  VAR_10->mca_flags &= ~VAR_1;
 return VAR_9;
}
