
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int adns_status ;
typedef TYPE_2__* adns_query ;
struct TYPE_7__ {TYPE_1__* answer; } ;
struct TYPE_6__ {int status; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(adns_query VAR_0, adns_status VAR_1) {
  FUNC_1(VAR_0);
  VAR_0->answer->status= VAR_1;
  FUNC_0(VAR_0);
}
