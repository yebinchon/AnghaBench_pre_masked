
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct timeval {int dummy; } ;
typedef TYPE_1__* adns_query ;
struct TYPE_7__ {int tcpw; } ;
struct TYPE_6__ {TYPE_3__* ads; struct timeval timeout; int state; } ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,struct timeval) ;
 int FUNC_2 (TYPE_3__*,struct timeval) ;
 int VAR_1 ;
 int FUNC_3 (struct timeval*,int ) ;

__attribute__((used)) static void FUNC_4(adns_query VAR_2, struct timeval VAR_3) {
  VAR_2->state= VAR_1;
  VAR_2->timeout= VAR_3;
  FUNC_3(&VAR_2->timeout,VAR_0);
  FUNC_0(VAR_2->ads->tcpw,VAR_2);
  FUNC_1(VAR_2,VAR_3);
  FUNC_2(VAR_2->ads,VAR_3);
}
