
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
typedef int adns_state ;


 int FUNC_0 (int ,int,int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct timeval*,int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(adns_state VAR_1, const struct timeval **VAR_2,
        struct timeval *VAR_3) {
  const struct timeval *VAR_4;
  int VAR_5;

  VAR_4= *VAR_2;
  if (VAR_4) return;
  VAR_5= FUNC_2(VAR_3,0); if (!VAR_5) { *VAR_2= VAR_3; return; }
  FUNC_0(VAR_1,-1,0,"gettimeofday failed: %s",FUNC_3(VAR_0));
  FUNC_1(VAR_1);
  return;
}
