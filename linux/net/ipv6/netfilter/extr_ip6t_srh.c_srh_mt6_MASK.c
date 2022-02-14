
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_action_param {struct ip6t_srh* matchinfo; } ;
struct sk_buff {int len; } ;
struct ipv6_sr_hdr {scalar_t__ type; scalar_t__ segments_left; scalar_t__ first_segment; scalar_t__ nexthdr; scalar_t__ hdrlen; scalar_t__ tag; } ;
struct ip6t_srh {int mt_flags; scalar_t__ next_hdr; scalar_t__ hdr_len; scalar_t__ segs_left; scalar_t__ last_entry; scalar_t__ tag; } ;
typedef int _srh ;


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
 scalar_t__ VAR_23 ;
 scalar_t__ FUNC_0 (struct ip6t_srh const*,int ,int) ;
 scalar_t__ FUNC_1 (struct sk_buff const*,int*,int ,int *,int *) ;
 int FUNC_2 (struct ipv6_sr_hdr*) ;
 struct ipv6_sr_hdr* FUNC_3 (struct sk_buff const*,int,int,struct ipv6_sr_hdr*) ;

__attribute__((used)) static bool FUNC_4(const struct sk_buff *VAR_24, struct xt_action_param *VAR_25)
{
 const struct ip6t_srh *VAR_26 = VAR_25->matchinfo;
 struct ipv6_sr_hdr *VAR_27;
 struct ipv6_sr_hdr VAR_28;
 int VAR_29, VAR_30 = 0;

 if (FUNC_1(VAR_24, &VAR_30, VAR_22, ((void*)0), ((void*)0)) < 0)
  return 0;
 VAR_27 = FUNC_3(VAR_24, VAR_30, sizeof(VAR_28), &VAR_28);
 if (!VAR_27)
  return 0;

 VAR_29 = FUNC_2(VAR_27);
 if (VAR_24->len - VAR_30 < VAR_29)
  return 0;

 if (VAR_27->type != VAR_23)
  return 0;

 if (VAR_27->segments_left > VAR_27->first_segment)
  return 0;


 if (VAR_26->mt_flags & VAR_17)
  if (FUNC_0(VAR_26, VAR_6,
    !(VAR_27->nexthdr == VAR_26->next_hdr)))
   return 0;


 if (VAR_26->mt_flags & VAR_14)
  if (FUNC_0(VAR_26, VAR_3,
    !(VAR_27->hdrlen == VAR_26->hdr_len)))
   return 0;

 if (VAR_26->mt_flags & VAR_15)
  if (FUNC_0(VAR_26, VAR_4,
    !(VAR_27->hdrlen > VAR_26->hdr_len)))
   return 0;

 if (VAR_26->mt_flags & VAR_16)
  if (FUNC_0(VAR_26, VAR_5,
    !(VAR_27->hdrlen < VAR_26->hdr_len)))
   return 0;


 if (VAR_26->mt_flags & VAR_18)
  if (FUNC_0(VAR_26, VAR_7,
    !(VAR_27->segments_left == VAR_26->segs_left)))
   return 0;

 if (VAR_26->mt_flags & VAR_19)
  if (FUNC_0(VAR_26, VAR_8,
    !(VAR_27->segments_left > VAR_26->segs_left)))
   return 0;

 if (VAR_26->mt_flags & VAR_20)
  if (FUNC_0(VAR_26, VAR_9,
    !(VAR_27->segments_left < VAR_26->segs_left)))
   return 0;






 if (VAR_26->mt_flags & VAR_11)
  if (FUNC_0(VAR_26, VAR_0,
    !(VAR_27->first_segment == VAR_26->last_entry)))
   return 0;

 if (VAR_26->mt_flags & VAR_12)
  if (FUNC_0(VAR_26, VAR_1,
    !(VAR_27->first_segment > VAR_26->last_entry)))
   return 0;

 if (VAR_26->mt_flags & VAR_13)
  if (FUNC_0(VAR_26, VAR_2,
    !(VAR_27->first_segment < VAR_26->last_entry)))
   return 0;





 if (VAR_26->mt_flags & VAR_21)
  if (FUNC_0(VAR_26, VAR_10,
    !(VAR_27->tag == VAR_26->tag)))
   return 0;
 return 1;
}
