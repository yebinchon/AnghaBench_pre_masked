
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atm_trafprm {int max_sdu; scalar_t__ max_cdv; int traffic_class; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,unsigned char) ;

__attribute__((used)) static int FUNC_1(struct atm_trafprm *VAR_5, unsigned char VAR_6)
{
 int VAR_7;

 if (!VAR_5->traffic_class)
  return 0;
 switch (VAR_6) {
 case 130:
  VAR_7 = VAR_0-1;
  break;
 case 129:
  VAR_7 = VAR_1;
  break;
 default:
  FUNC_0("AAL problems ... (%d)\n", VAR_6);

 case 128:
  VAR_7 = VAR_2;
 }
 if (!VAR_5->max_sdu)
  VAR_5->max_sdu = VAR_7;
 else if (VAR_5->max_sdu > VAR_7)
  return -VAR_4;
 if (!VAR_5->max_cdv)
  VAR_5->max_cdv = VAR_3;
 return 0;
}
