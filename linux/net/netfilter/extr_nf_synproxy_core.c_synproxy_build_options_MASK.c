
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tcphdr {int dummy; } ;
struct synproxy_options {int options; int mss_option; int tsval; int tsecr; int wscale; } ;
typedef int __be32 ;


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
 void* FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(struct tcphdr *VAR_13, const struct synproxy_options *VAR_14)
{
 __be32 *VAR_15 = (__be32 *)(VAR_13 + 1);
 u8 VAR_16 = VAR_14->options;

 if (VAR_16 & VAR_0)
  *VAR_15++ = FUNC_0((VAR_8 << 24) |
          (VAR_4 << 16) |
          VAR_14->mss_option);

 if (VAR_16 & VAR_2) {
  if (VAR_16 & VAR_1)
   *VAR_15++ = FUNC_0((VAR_10 << 24) |
           (VAR_5 << 16) |
           (VAR_11 << 8) |
           VAR_6);
  else
   *VAR_15++ = FUNC_0((VAR_9 << 24) |
           (VAR_9 << 16) |
           (VAR_11 << 8) |
           VAR_6);

  *VAR_15++ = FUNC_0(VAR_14->tsval);
  *VAR_15++ = FUNC_0(VAR_14->tsecr);
 } else if (VAR_16 & VAR_1)
  *VAR_15++ = FUNC_0((VAR_9 << 24) |
          (VAR_9 << 16) |
          (VAR_10 << 8) |
          VAR_5);

 if (VAR_16 & VAR_3)
  *VAR_15++ = FUNC_0((VAR_9 << 24) |
          (VAR_12 << 16) |
          (VAR_7 << 8) |
          VAR_14->wscale);
}
