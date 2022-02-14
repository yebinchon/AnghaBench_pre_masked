
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tcphdr {int doff; } ;
struct synproxy_options {scalar_t__ options; void* tsecr; void* tsval; int wscale; int mss_option; } ;
struct sk_buff {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;






 int VAR_8 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int *) ;
 int * FUNC_2 (struct sk_buff const*,unsigned int,int,int *) ;

bool
FUNC_3(const struct sk_buff *VAR_9, unsigned int VAR_10,
         const struct tcphdr *VAR_11, struct synproxy_options *VAR_12)
{
 int VAR_13 = (VAR_11->doff * 4) - sizeof(*VAR_11);
 u8 VAR_14[40], *VAR_15;

 VAR_15 = FUNC_2(VAR_9, VAR_10 + sizeof(*VAR_11), VAR_13, VAR_14);
 if (VAR_15 == ((void*)0))
  return 0;

 VAR_12->options = 0;
 while (VAR_13 > 0) {
  int VAR_16 = *VAR_15++;
  int VAR_17;

  switch (VAR_16) {
  case 133:
   return 1;
  case 131:
   VAR_13--;
   continue;
  default:
   VAR_17 = *VAR_15++;
   if (VAR_17 < 2)
    return 1;
   if (VAR_17 > VAR_13)
    return 1;

   switch (VAR_16) {
   case 132:
    if (VAR_17 == VAR_4) {
     VAR_12->mss_option = FUNC_0(VAR_15);
     VAR_12->options |= VAR_0;
    }
    break;
   case 128:
    if (VAR_17 == VAR_7) {
     VAR_12->wscale = *VAR_15;
     if (VAR_12->wscale > VAR_8)
      VAR_12->wscale = VAR_8;
     VAR_12->options |= VAR_3;
    }
    break;
   case 129:
    if (VAR_17 == VAR_6) {
     VAR_12->tsval = FUNC_1(VAR_15);
     VAR_12->tsecr = FUNC_1(VAR_15 + 4);
     VAR_12->options |= VAR_2;
    }
    break;
   case 130:
    if (VAR_17 == VAR_5)
     VAR_12->options |= VAR_1;
    break;
   }

   VAR_15 += VAR_17 - 2;
   VAR_13 -= VAR_17;
  }
 }
 return 1;
}
