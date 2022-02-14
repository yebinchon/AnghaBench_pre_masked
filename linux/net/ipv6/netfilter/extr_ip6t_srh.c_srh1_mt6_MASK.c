
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_action_param {struct ip6t_srh1* matchinfo; } ;
struct sk_buff {int len; } ;
struct ipv6_sr_hdr {scalar_t__ type; scalar_t__ segments_left; scalar_t__ first_segment; scalar_t__ nexthdr; scalar_t__ hdrlen; scalar_t__ tag; } ;
struct ip6t_srh1 {int mt_flags; scalar_t__ next_hdr; scalar_t__ hdr_len; scalar_t__ segs_left; scalar_t__ last_entry; scalar_t__ tag; int lsid_addr; int lsid_msk; int nsid_addr; int nsid_msk; int psid_addr; int psid_msk; } ;
struct in6_addr {scalar_t__ type; scalar_t__ segments_left; scalar_t__ first_segment; scalar_t__ nexthdr; scalar_t__ hdrlen; scalar_t__ tag; } ;
typedef int _srh ;
typedef int _psid ;
typedef int _nsid ;
typedef int _lsid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ FUNC_0 (struct ip6t_srh1 const*,int ,int) ;
 scalar_t__ FUNC_1 (struct sk_buff const*,int*,int ,int *,int *) ;
 int FUNC_2 (struct ipv6_sr_hdr*,int *,int *) ;
 int FUNC_3 (struct ipv6_sr_hdr*) ;
 struct ipv6_sr_hdr* FUNC_4 (struct sk_buff const*,int,int,struct ipv6_sr_hdr*) ;

__attribute__((used)) static bool FUNC_5(const struct sk_buff *VAR_30, struct xt_action_param *VAR_31)
{
 int VAR_32, VAR_33, VAR_34, VAR_35, VAR_36 = 0;
 const struct ip6t_srh1 *VAR_37 = VAR_31->matchinfo;
 struct in6_addr *VAR_38, *VAR_39, *VAR_40;
 struct in6_addr VAR_41, VAR_42, VAR_43;
 struct ipv6_sr_hdr *VAR_44;
 struct ipv6_sr_hdr VAR_45;

 if (FUNC_1(VAR_30, &VAR_36, VAR_28, ((void*)0), ((void*)0)) < 0)
  return 0;
 VAR_44 = FUNC_4(VAR_30, VAR_36, sizeof(VAR_45), &VAR_45);
 if (!VAR_44)
  return 0;

 VAR_32 = FUNC_3(VAR_44);
 if (VAR_30->len - VAR_36 < VAR_32)
  return 0;

 if (VAR_44->type != VAR_29)
  return 0;

 if (VAR_44->segments_left > VAR_44->first_segment)
  return 0;


 if (VAR_37->mt_flags & VAR_21)
  if (FUNC_0(VAR_37, VAR_7,
    !(VAR_44->nexthdr == VAR_37->next_hdr)))
   return 0;


 if (VAR_37->mt_flags & VAR_17)
  if (FUNC_0(VAR_37, VAR_3,
    !(VAR_44->hdrlen == VAR_37->hdr_len)))
   return 0;
 if (VAR_37->mt_flags & VAR_18)
  if (FUNC_0(VAR_37, VAR_4,
    !(VAR_44->hdrlen > VAR_37->hdr_len)))
   return 0;
 if (VAR_37->mt_flags & VAR_19)
  if (FUNC_0(VAR_37, VAR_5,
    !(VAR_44->hdrlen < VAR_37->hdr_len)))
   return 0;


 if (VAR_37->mt_flags & VAR_24)
  if (FUNC_0(VAR_37, VAR_10,
    !(VAR_44->segments_left == VAR_37->segs_left)))
   return 0;
 if (VAR_37->mt_flags & VAR_25)
  if (FUNC_0(VAR_37, VAR_11,
    !(VAR_44->segments_left > VAR_37->segs_left)))
   return 0;
 if (VAR_37->mt_flags & VAR_26)
  if (FUNC_0(VAR_37, VAR_12,
    !(VAR_44->segments_left < VAR_37->segs_left)))
   return 0;






 if (VAR_37->mt_flags & VAR_14)
  if (FUNC_0(VAR_37, VAR_0,
    !(VAR_44->first_segment == VAR_37->last_entry)))
   return 0;
 if (VAR_37->mt_flags & VAR_15)
  if (FUNC_0(VAR_37, VAR_1,
    !(VAR_44->first_segment > VAR_37->last_entry)))
   return 0;
 if (VAR_37->mt_flags & VAR_16)
  if (FUNC_0(VAR_37, VAR_2,
    !(VAR_44->first_segment < VAR_37->last_entry)))
   return 0;





 if (VAR_37->mt_flags & VAR_27)
  if (FUNC_0(VAR_37, VAR_13,
    !(VAR_44->tag == VAR_37->tag)))
   return 0;


 if (VAR_37->mt_flags & VAR_23) {
  if (VAR_44->segments_left == VAR_44->first_segment)
   return 0;
  VAR_33 = VAR_36 + sizeof(struct ipv6_sr_hdr) +
     ((VAR_44->segments_left + 1) * sizeof(struct in6_addr));
  VAR_38 = FUNC_4(VAR_30, VAR_33, sizeof(VAR_41), &VAR_41);
  if (!VAR_38)
   return 0;
  if (FUNC_0(VAR_37, VAR_9,
    FUNC_2(VAR_38, &VAR_37->psid_msk,
           &VAR_37->psid_addr)))
   return 0;
 }


 if (VAR_37->mt_flags & VAR_22) {
  if (VAR_44->segments_left == 0)
   return 0;
  VAR_34 = VAR_36 + sizeof(struct ipv6_sr_hdr) +
     ((VAR_44->segments_left - 1) * sizeof(struct in6_addr));
  VAR_39 = FUNC_4(VAR_30, VAR_34, sizeof(VAR_42), &VAR_42);
  if (!VAR_39)
   return 0;
  if (FUNC_0(VAR_37, VAR_8,
    FUNC_2(VAR_39, &VAR_37->nsid_msk,
           &VAR_37->nsid_addr)))
   return 0;
 }


 if (VAR_37->mt_flags & VAR_20) {
  VAR_35 = VAR_36 + sizeof(struct ipv6_sr_hdr);
  VAR_40 = FUNC_4(VAR_30, VAR_35, sizeof(VAR_43), &VAR_43);
  if (!VAR_40)
   return 0;
  if (FUNC_0(VAR_37, VAR_6,
    FUNC_2(VAR_40, &VAR_37->lsid_msk,
           &VAR_37->lsid_addr)))
   return 0;
 }
 return 1;
}
