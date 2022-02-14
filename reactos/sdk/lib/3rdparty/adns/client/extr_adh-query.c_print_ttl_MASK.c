
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long time_t ;
struct TYPE_4__ {int ttl; } ;
struct query_node {TYPE_1__ pqfr; } ;
struct TYPE_5__ {unsigned long expires; } ;
typedef TYPE_2__ adns_answer ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (char*,unsigned long) ;
 int FUNC_3 (char*,int ) ;
 unsigned long FUNC_4 (unsigned long*) ;




__attribute__((used)) static void FUNC_5(struct query_node *VAR_2, adns_answer *VAR_3) {
  unsigned long VAR_4;
  time_t VAR_5;

  switch (VAR_2->pqfr.ttl) {
  case 129:
    return;
  case 128:
    if (FUNC_4(&VAR_5) == (time_t)-1) FUNC_3("get current time",VAR_1);
    VAR_4= VAR_3->expires < VAR_5 ? 0 : VAR_3->expires - VAR_5;
    break;
  case 130:
    VAR_4= VAR_3->expires;
    break;
  default:
    FUNC_0();
  }
  if (FUNC_2("%lu ",VAR_4) == VAR_0) FUNC_1();
}
