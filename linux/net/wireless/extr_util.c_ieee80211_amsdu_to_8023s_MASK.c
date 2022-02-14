
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
typedef unsigned int u16 ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int len; unsigned int* data; int priority; int dev; scalar_t__ head_frag; } ;
struct ethhdr {int h_proto; int h_source; int h_dest; } ;
typedef int eth ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 unsigned int FUNC_0 (unsigned int const,int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 struct sk_buff* FUNC_1 (struct sk_buff*,unsigned int,int,int,int) ;
 int FUNC_2 (struct sk_buff_head*) ;
 int FUNC_3 (struct sk_buff_head*,struct sk_buff*) ;
 int VAR_3 ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (unsigned int const*,int ) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int ,struct ethhdr*,int) ;
 int FUNC_10 (int ) ;
 int VAR_4 ;
 int FUNC_11 (struct sk_buff*,int,struct ethhdr*,int) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct sk_buff*,int) ;
 int FUNC_15 (struct sk_buff*,int) ;
 int FUNC_16 (struct sk_buff*) ;

void FUNC_17(struct sk_buff *VAR_5, struct sk_buff_head *VAR_6,
         const u8 *VAR_7, enum nl80211_iftype VAR_8,
         const unsigned int VAR_9,
         const u8 *VAR_10, const u8 *VAR_11)
{
 unsigned int VAR_12 = FUNC_0(VAR_9, 4);
 struct sk_buff *VAR_13 = ((void*)0);
 u16 VAR_14;
 u8 *VAR_15;
 int VAR_16 = 0, VAR_17;
 struct ethhdr VAR_18;
 bool VAR_19 = VAR_5->head_frag && !FUNC_12(VAR_5);
 bool VAR_20 = 0;
 bool VAR_21 = 0;

 while (!VAR_21) {
  unsigned int VAR_22;
  int VAR_23;
  u8 VAR_24;

  FUNC_11(VAR_5, VAR_16, &VAR_18, sizeof(VAR_18));
  VAR_23 = FUNC_10(VAR_18.h_proto);
  VAR_22 = sizeof(struct ethhdr) + VAR_23;
  VAR_24 = (4 - VAR_22) & 0x3;


  VAR_17 = VAR_5->len - VAR_16;
  if (VAR_22 > VAR_17)
   goto purge;

  VAR_16 += sizeof(struct ethhdr);
  VAR_21 = VAR_17 <= VAR_22 + VAR_24;


  if ((VAR_10 && !FUNC_7(VAR_18.h_dest) &&
       !FUNC_5(VAR_10, VAR_18.h_dest)) ||
      (VAR_11 && !FUNC_5(VAR_11, VAR_18.h_source))) {
   VAR_16 += VAR_23 + VAR_24;
   continue;
  }


  if (!FUNC_13(VAR_5) && !VAR_19 && VAR_21) {
   FUNC_14(VAR_5, VAR_16);
   VAR_13 = VAR_5;
   VAR_20 = 1;
  } else {
   VAR_13 = FUNC_1(VAR_5, VAR_12, VAR_16, VAR_23,
             VAR_19);
   if (!VAR_13)
    goto purge;

   VAR_16 += VAR_23 + VAR_24;
  }

  FUNC_16(VAR_13);
  VAR_13->dev = VAR_5->dev;
  VAR_13->priority = VAR_5->priority;

  VAR_15 = VAR_13->data;
  VAR_14 = (VAR_15[6] << 8) | VAR_15[7];
  if (FUNC_8((FUNC_5(VAR_15, VAR_4) &&
       VAR_14 != VAR_1 && VAR_14 != VAR_2) ||
      FUNC_5(VAR_15, VAR_3))) {
   VAR_18.h_proto = FUNC_6(VAR_14);
   FUNC_14(VAR_13, VAR_0 + 2);
  }

  FUNC_9(FUNC_15(VAR_13, sizeof(VAR_18)), &VAR_18, sizeof(VAR_18));
  FUNC_3(VAR_6, VAR_13);
 }

 if (!VAR_20)
  FUNC_4(VAR_5);

 return;

 purge:
 FUNC_2(VAR_6);
 FUNC_4(VAR_5);
}
