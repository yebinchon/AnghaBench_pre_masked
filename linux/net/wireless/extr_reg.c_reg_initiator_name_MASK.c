
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum nl80211_reg_initiator { ____Placeholder_nl80211_reg_initiator } nl80211_reg_initiator ;






 int FUNC_0 (int) ;

const char *FUNC_1(enum nl80211_reg_initiator VAR_0)
{
 switch (VAR_0) {
 case 131:
  return "core";
 case 128:
  return "user";
 case 129:
  return "driver";
 case 130:
  return "country element";
 default:
  FUNC_0(1);
  return "bug";
 }
}
