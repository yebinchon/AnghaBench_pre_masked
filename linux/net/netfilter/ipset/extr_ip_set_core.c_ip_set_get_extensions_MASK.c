
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct nlattr {int dummy; } ;
struct TYPE_2__ {int skbmark; int skbmarkmask; int skbqueue; int skbprio; } ;
struct ip_set_ext {TYPE_1__ skbinfo; int comment; void* packets; void* bytes; int timeout; } ;
struct ip_set {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct ip_set*) ;
 int FUNC_1 (struct ip_set*) ;
 int FUNC_2 (struct ip_set*) ;
 int FUNC_3 (struct ip_set*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (struct nlattr*) ;
 int FUNC_8 (struct nlattr**,size_t) ;
 int FUNC_9 (struct nlattr*) ;
 int FUNC_10 (struct nlattr*) ;
 int FUNC_11 (struct nlattr*) ;
 int FUNC_12 (struct nlattr*) ;
 scalar_t__ FUNC_13 (int) ;

int
FUNC_14(struct ip_set *VAR_12, struct nlattr *VAR_13[],
        struct ip_set_ext *VAR_14)
{
 u64 VAR_15;

 if (FUNC_13(!FUNC_8(VAR_13, VAR_6) ||
       !FUNC_8(VAR_13, VAR_2) ||
       !FUNC_8(VAR_13, VAR_0) ||
       !FUNC_8(VAR_13, VAR_3) ||
       !FUNC_8(VAR_13, VAR_4) ||
       !FUNC_8(VAR_13, VAR_5)))
  return -VAR_9;

 if (VAR_13[VAR_6]) {
  if (!FUNC_3(VAR_12))
   return -VAR_11;
  VAR_14->timeout = FUNC_9(VAR_13[VAR_6]);
 }
 if (VAR_13[VAR_0] || VAR_13[VAR_2]) {
  if (!FUNC_1(VAR_12))
   return -VAR_8;
  if (VAR_13[VAR_0])
   VAR_14->bytes = FUNC_6(FUNC_12(
       VAR_13[VAR_0]));
  if (VAR_13[VAR_2])
   VAR_14->packets = FUNC_6(FUNC_12(
         VAR_13[VAR_2]));
 }
 if (VAR_13[VAR_1]) {
  if (!FUNC_0(VAR_12))
   return -VAR_7;
  VAR_14->comment = FUNC_7(VAR_13[VAR_1]);
 }
 if (VAR_13[VAR_3]) {
  if (!FUNC_2(VAR_12))
   return -VAR_10;
  VAR_15 = FUNC_6(FUNC_12(VAR_13[VAR_3]));
  VAR_14->skbinfo.skbmark = VAR_15 >> 32;
  VAR_14->skbinfo.skbmarkmask = VAR_15 & 0xffffffff;
 }
 if (VAR_13[VAR_4]) {
  if (!FUNC_2(VAR_12))
   return -VAR_10;
  VAR_14->skbinfo.skbprio =
   FUNC_5(FUNC_11(VAR_13[VAR_4]));
 }
 if (VAR_13[VAR_5]) {
  if (!FUNC_2(VAR_12))
   return -VAR_10;
  VAR_14->skbinfo.skbqueue =
   FUNC_4(FUNC_10(VAR_13[VAR_5]));
 }
 return 0;
}
