
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
typedef int adns_state ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,struct timeval const**,struct timeval*) ;
 int FUNC_2 (int ,int,int ,int ,struct timeval const) ;
 int VAR_0 ;

void FUNC_3(adns_state VAR_1, const struct timeval *VAR_2) {
  struct timeval VAR_3;

  FUNC_0(VAR_1,0,VAR_0);
  FUNC_1(VAR_1,&VAR_2,&VAR_3);
  if (VAR_2) FUNC_2(VAR_1, 1, 0,0, *VAR_2);
  FUNC_0(VAR_1,0,VAR_0);
}
