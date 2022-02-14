
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {scalar_t__ tv_sec; int tv_usec; } ;
struct TYPE_3__ {int quot; } ;
typedef TYPE_1__ ldiv_t ;


 int FUNC_0 (struct timeval**,struct timeval*,struct timeval) ;
 TYPE_1__ FUNC_1 (int,int) ;
 int FUNC_2 (struct timeval*) ;

__attribute__((used)) static void FUNC_3(struct timeval **VAR_0, struct timeval *VAR_1,
      struct timeval VAR_2, struct timeval VAR_3) {

  ldiv_t VAR_4;



  if (!VAR_0) return;
  VAR_3.tv_sec -= (VAR_2.tv_sec+2);
  VAR_3.tv_usec -= (VAR_2.tv_usec-2000000);
  VAR_4= FUNC_1(VAR_3.tv_usec,1000000);
  VAR_3.tv_sec += VAR_4.quot;
  VAR_3.tv_usec -= VAR_4.quot*1000000;
  if (VAR_3.tv_sec<0) FUNC_2(&VAR_3);
  FUNC_0(VAR_0,VAR_1,VAR_3);
}
