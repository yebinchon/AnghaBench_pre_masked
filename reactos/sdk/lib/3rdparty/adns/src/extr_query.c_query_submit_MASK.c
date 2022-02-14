
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ used; int buf; } ;
typedef TYPE_1__ vbuf ;
typedef int typeinfo ;
struct timeval {int dummy; } ;
typedef int adns_state ;
typedef int adns_queryflags ;
typedef TYPE_2__* adns_query ;
struct TYPE_9__ {int id; TYPE_1__ vb; int query_dgram; scalar_t__ query_dglen; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,struct timeval) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (int ,int ,size_t) ;

__attribute__((used)) static void FUNC_5(adns_state VAR_1, adns_query VAR_2,
    const typeinfo *VAR_3, vbuf *VAR_4, int VAR_5,
    adns_queryflags VAR_6, struct timeval VAR_7) {




  VAR_2->vb= *VAR_4;
  FUNC_2(VAR_4);

  VAR_2->query_dgram= FUNC_3( (size_t) VAR_2->vb.used);
  if (!VAR_2->query_dgram) { FUNC_0(VAR_2,VAR_0); return; }

  VAR_2->id= VAR_5;
  VAR_2->query_dglen= VAR_2->vb.used;
  FUNC_4(VAR_2->query_dgram,VAR_2->vb.buf,(size_t) VAR_2->vb.used);

  FUNC_1(VAR_2,VAR_7);
}
