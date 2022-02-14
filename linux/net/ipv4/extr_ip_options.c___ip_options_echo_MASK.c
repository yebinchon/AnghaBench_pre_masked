
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct iphdr {int dummy; } ;
struct ip_options {scalar_t__ optlen; unsigned char* __data; int rr; int rr_needaddr; int ts; int ts_needaddr; int ts_needtime; int srr; unsigned char faddr; int cipso; int is_strictroute; } ;
typedef unsigned char __be32 ;
struct TYPE_2__ {int saddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct net*,unsigned char) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int *,unsigned char*,int) ;
 int FUNC_3 (unsigned char*,unsigned char*,int) ;
 int FUNC_4 (struct ip_options*,int ,int) ;
 unsigned char* FUNC_5 (struct sk_buff*) ;

int FUNC_6(struct net *VAR_4, struct ip_options *VAR_5,
        struct sk_buff *VAR_6, const struct ip_options *VAR_7)
{
 unsigned char *VAR_8, *VAR_9;
 int VAR_10, VAR_11;
 int VAR_12;

 FUNC_4(VAR_5, 0, sizeof(struct ip_options));

 if (VAR_7->optlen == 0)
  return 0;

 VAR_8 = FUNC_5(VAR_6);
 VAR_9 = VAR_5->__data;

 if (VAR_7->rr) {
  VAR_12 = VAR_8[VAR_7->rr+1];
  VAR_10 = VAR_8[VAR_7->rr+2];
  VAR_5->rr = VAR_5->optlen + sizeof(struct iphdr);
  FUNC_3(VAR_9, VAR_8+VAR_7->rr, VAR_12);
  if (VAR_7->rr_needaddr && VAR_10 <= VAR_12) {
   if (VAR_10 + 3 > VAR_12)
    return -VAR_0;
   VAR_9[2] = VAR_10 + 4;
   VAR_5->rr_needaddr = 1;
  }
  VAR_9 += VAR_12;
  VAR_5->optlen += VAR_12;
 }
 if (VAR_7->ts) {
  VAR_12 = VAR_8[VAR_7->ts+1];
  VAR_10 = VAR_8[VAR_7->ts+2];
  VAR_5->ts = VAR_5->optlen + sizeof(struct iphdr);
  FUNC_3(VAR_9, VAR_8+VAR_7->ts, VAR_12);
  if (VAR_10 <= VAR_12) {
   if (VAR_7->ts_needaddr) {
    if (VAR_10 + 3 > VAR_12)
     return -VAR_0;
    VAR_5->ts_needaddr = 1;
    VAR_10 += 4;
   }
   if (VAR_7->ts_needtime) {
    if (VAR_10 + 3 > VAR_12)
     return -VAR_0;
    if ((VAR_9[3]&0xF) != VAR_2) {
     VAR_5->ts_needtime = 1;
     VAR_10 += 4;
    } else {
     VAR_5->ts_needtime = 0;

     if (VAR_10 + 7 <= VAR_12) {
      __be32 VAR_13;

      FUNC_3(&VAR_13, VAR_9+VAR_10-1, 4);
      if (FUNC_0(VAR_4, VAR_13) != VAR_3) {
       VAR_5->ts_needtime = 1;
       VAR_10 += 8;
      }
     }
    }
   }
   VAR_9[2] = VAR_10;
  }
  VAR_9 += VAR_12;
  VAR_5->optlen += VAR_12;
 }
 if (VAR_7->srr) {
  unsigned char *VAR_14 = VAR_8+VAR_7->srr;
  __be32 VAR_15;

  VAR_12 = VAR_14[1];
  VAR_10 = VAR_14[2];
  VAR_11 = 0;
  if (VAR_10 > VAR_12)
   VAR_10 = VAR_12 + 1;
  VAR_10 -= 4;
  if (VAR_10 > 3) {
   FUNC_3(&VAR_15, &VAR_14[VAR_10-1], 4);
   for (VAR_10 -= 4, VAR_11 = 4; VAR_10 > 3; VAR_10 -= 4, VAR_11 += 4)
    FUNC_3(&VAR_9[VAR_11-1], &VAR_14[VAR_10-1], 4);



   if (FUNC_2(&FUNC_1(VAR_6)->saddr,
       &VAR_14[VAR_10 + 3], 4) == 0)
    VAR_11 -= 4;
  }
  if (VAR_11 > 3) {
   VAR_5->faddr = VAR_15;
   VAR_9[0] = VAR_14[0];
   VAR_9[1] = VAR_11+3;
   VAR_9[2] = 4;
   VAR_9 += VAR_11+3;
   VAR_5->srr = VAR_5->optlen + sizeof(struct iphdr);
   VAR_5->optlen += VAR_11+3;
   VAR_5->is_strictroute = VAR_7->is_strictroute;
  }
 }
 if (VAR_7->cipso) {
  VAR_12 = VAR_8[VAR_7->cipso+1];
  VAR_5->cipso = VAR_5->optlen+sizeof(struct iphdr);
  FUNC_3(VAR_9, VAR_8+VAR_7->cipso, VAR_12);
  VAR_9 += VAR_12;
  VAR_5->optlen += VAR_12;
 }
 while (VAR_5->optlen & 3) {
  *VAR_9++ = VAR_1;
  VAR_5->optlen++;
 }
 return 0;
}
