
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct net_device {int dummy; } ;
typedef enum batadv_bandwidth_units { ____Placeholder_batadv_bandwidth_units } batadv_bandwidth_units ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,char*,char const*,char*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,int,int*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;

bool FUNC_5(struct net_device *VAR_2, char *VAR_3,
        const char *VAR_4, u32 *VAR_5)
{
 enum batadv_bandwidth_units VAR_6 = 129;
 u64 VAR_7;
 char *VAR_8;
 int VAR_9;

 if (FUNC_3(VAR_3) > 4) {
  VAR_8 = VAR_3 + FUNC_3(VAR_3) - 4;

  if (FUNC_4(VAR_8, "mbit", 4) == 0)
   VAR_6 = 128;

  if (FUNC_4(VAR_8, "kbit", 4) == 0 ||
      VAR_6 == 128)
   *VAR_8 = '\0';
 }

 VAR_9 = FUNC_2(VAR_3, 10, &VAR_7);
 if (VAR_9) {
  FUNC_0(VAR_2,
      "Invalid throughput speed for %s: %s\n",
      VAR_4, VAR_3);
  return 0;
 }

 switch (VAR_6) {
 case 128:

  if (VAR_1 / 10 < VAR_7) {
   FUNC_0(VAR_2,
       "Throughput speed for %s too large: %s\n",
       VAR_4, VAR_3);
   return 0;
  }

  VAR_7 *= 10;
  break;
 case 129:
 default:
  VAR_7 = FUNC_1(VAR_7, 100);
  break;
 }

 if (VAR_7 > VAR_0) {
  FUNC_0(VAR_2,
      "Throughput speed for %s too large: %s\n",
      VAR_4, VAR_3);
  return 0;
 }

 *VAR_5 = VAR_7;

 return 1;
}
