
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int adns_state ;
typedef int ADNS_SOCKET ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int) ;
 scalar_t__ FUNC_1 (int ,int ,unsigned long*) ;

int FUNC_2(adns_state VAR_5, ADNS_SOCKET VAR_6) {




  int VAR_7;

  VAR_7= FUNC_0(VAR_6,VAR_1,0); if (VAR_7<0) return VAR_4;
  VAR_7 |= VAR_3;
  VAR_7= FUNC_0(VAR_6,VAR_2,VAR_7); if (VAR_7<0) return VAR_4;
  return 0;

}
