
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vbuf ;
typedef int typeinfo ;
struct timeval {int dummy; } ;
typedef int qcontext ;
typedef int adns_status ;
typedef int adns_state ;
typedef int adns_queryflags ;
typedef TYPE_1__* adns_query ;
struct TYPE_5__ {int ctx; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int const*,size_t) ;
 TYPE_1__* FUNC_2 (int ,int const*,int ,struct timeval) ;
 int FUNC_3 (int ,TYPE_1__*,int const*,int *,int,int ,struct timeval) ;

adns_status FUNC_4(adns_state VAR_2, adns_query *VAR_3,
      const typeinfo *VAR_4, vbuf *VAR_5, int VAR_6,
      adns_queryflags VAR_7, struct timeval VAR_8,
      const qcontext *VAR_9) {
  adns_query VAR_10;

  VAR_10= FUNC_2(VAR_2,VAR_4,VAR_7,VAR_8);
  if (!VAR_10) { FUNC_0(VAR_5); return VAR_0; }
  *VAR_3= VAR_10;

  FUNC_1(&VAR_10->ctx,VAR_9,(size_t) sizeof(VAR_10->ctx));
  FUNC_3(VAR_2,VAR_10, VAR_4,VAR_5,VAR_6,VAR_7,VAR_8);

  return VAR_1;
}
