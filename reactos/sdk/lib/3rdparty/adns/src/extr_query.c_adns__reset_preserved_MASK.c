
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_3__* adns_query ;
struct TYPE_8__ {int preserved_allocd; int interim_allocd; TYPE_2__* answer; int final_allocspace; } ;
struct TYPE_6__ {scalar_t__ untyped; } ;
struct TYPE_7__ {TYPE_1__ rrs; scalar_t__ nrrs; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;

void FUNC_2(adns_query VAR_0) {
  FUNC_0(!VAR_0->final_allocspace);
  FUNC_1(VAR_0);
  VAR_0->answer->nrrs= 0;
  VAR_0->answer->rrs.untyped= 0;
  VAR_0->interim_allocd= VAR_0->preserved_allocd;
}
