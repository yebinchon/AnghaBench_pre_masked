
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct timeval {scalar_t__ tv_sec; } ;
typedef TYPE_1__* adns_query ;
struct TYPE_3__ {scalar_t__ expires; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int) ;

void FUNC_1(adns_query VAR_1, unsigned long VAR_2, struct timeval VAR_3) {
  time_t VAR_4;

  FUNC_0(VAR_2 <= VAR_0);
  VAR_4= VAR_3.tv_sec + VAR_2;
  if (VAR_1->expires < VAR_4) return;
  VAR_1->expires= VAR_4;
}
