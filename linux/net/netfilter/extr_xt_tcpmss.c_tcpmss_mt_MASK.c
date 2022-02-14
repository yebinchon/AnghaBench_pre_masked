
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u_int8_t ;
typedef unsigned int u_int16_t ;
struct tcphdr {int doff; } ;
typedef struct tcphdr u8 ;
struct xt_tcpmss_match_info {unsigned int mss_min; unsigned int mss_max; int invert; } ;
struct xt_action_param {int hotdrop; scalar_t__ thoff; struct xt_tcpmss_match_info* matchinfo; } ;
struct sk_buff {int dummy; } ;
typedef int _tcph ;


 unsigned int VAR_0 ;
 unsigned int const VAR_1 ;
 void* FUNC_0 (struct sk_buff const*,scalar_t__,unsigned int,struct tcphdr*) ;

__attribute__((used)) static bool
FUNC_1(const struct sk_buff *VAR_2, struct xt_action_param *VAR_3)
{
 const struct xt_tcpmss_match_info *VAR_4 = VAR_3->matchinfo;
 const struct tcphdr *VAR_5;
 struct tcphdr VAR_6;

 const u_int8_t *VAR_7;
 u8 VAR_8[15 * 4 - sizeof(VAR_6)];
 unsigned int VAR_9, VAR_10;


 VAR_5 = FUNC_0(VAR_2, VAR_3->thoff, sizeof(VAR_6), &VAR_6);
 if (VAR_5 == ((void*)0))
  goto dropit;


 if (VAR_5->doff*4 < sizeof(*VAR_5))
  goto dropit;

 VAR_10 = VAR_5->doff*4 - sizeof(*VAR_5);
 if (!VAR_10)
  goto out;


 VAR_7 = FUNC_0(VAR_2, VAR_3->thoff + sizeof(*VAR_5), VAR_10, VAR_8);
 if (VAR_7 == ((void*)0))
  goto dropit;

 for (VAR_9 = 0; VAR_9 < VAR_10; ) {
  if (VAR_7[VAR_9] == VAR_1
      && (VAR_10 - VAR_9) >= VAR_0
      && VAR_7[VAR_9+1] == VAR_0) {
   u_int16_t VAR_11;

   VAR_11 = (VAR_7[VAR_9+2] << 8) | VAR_7[VAR_9+3];

   return (VAR_11 >= VAR_4->mss_min &&
    VAR_11 <= VAR_4->mss_max) ^ VAR_4->invert;
  }
  if (VAR_7[VAR_9] < 2)
   VAR_9++;
  else
   VAR_9 += VAR_7[VAR_9+1] ? : 1;
 }
out:
 return VAR_4->invert;

dropit:
 VAR_3->hotdrop = 1;
 return 0;
}
