
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int typeinfo ;
struct timeval {int dummy; } ;
typedef int byte ;
typedef int adns_status ;
typedef TYPE_2__* adns_state ;
typedef int adns_rrtype ;
typedef int adns_queryflags ;
typedef TYPE_3__* adns_query ;
struct TYPE_17__ {int info; scalar_t__ callback; void* ext; } ;
struct TYPE_19__ {int flags; int search_doneabs; int search_origlen; int search_vb; TYPE_1__ ctx; } ;
struct TYPE_18__ {int searchndots; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,struct timeval) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*,int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*,struct timeval) ;
 int FUNC_5 (int *,int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (struct timeval*,int ) ;
 int FUNC_8 (int *,int ,int) ;
 TYPE_3__* FUNC_9 (TYPE_2__*,int const*,int,struct timeval) ;
 int FUNC_10 (TYPE_2__*,TYPE_3__*,char const*,int,int const*,int,struct timeval) ;
 int FUNC_11 (TYPE_3__*,char const*,int) ;
 char* FUNC_12 (char const*,char) ;
 int FUNC_13 (char const*) ;

int FUNC_14(adns_state VAR_9,
  const char *VAR_10,
  adns_rrtype VAR_11,
  adns_queryflags VAR_12,
  void *VAR_13,
  adns_query *VAR_14) {
  int VAR_15, VAR_16, VAR_17;
  adns_status VAR_18;
  const typeinfo *VAR_19;
  struct timeval VAR_20;
  adns_query VAR_21;
  const char *VAR_22;

  FUNC_1(VAR_9,0,VAR_7);

  VAR_19= FUNC_2(VAR_11);
  if (!VAR_19) return VAR_1;

  VAR_15= FUNC_7(&VAR_20,0); if (VAR_15) goto x_errno;
  VAR_21= FUNC_9(VAR_9,VAR_19,VAR_12,VAR_20); if (!VAR_21) goto x_errno;

  VAR_21->ctx.ext= VAR_13;
  VAR_21->ctx.callback= 0;
  FUNC_8(&VAR_21->ctx.info,0,sizeof(VAR_21->ctx.info));

  *VAR_14= VAR_21;

  VAR_16= FUNC_13(VAR_10);
  if (!VAR_16) { VAR_18= VAR_5; goto x_adnsfail; }
  if (VAR_16>VAR_0+1) { VAR_18= VAR_6; goto x_adnsfail; }

  if (VAR_16>=1 && VAR_10[VAR_16-1]=='.' && (VAR_16<2 || VAR_10[VAR_16-2]!='\\')) {
    VAR_12 &= ~VAR_3;
    VAR_21->flags= VAR_12;
    VAR_16--;
  }

  if (VAR_12 & VAR_3) {
    VAR_15= FUNC_5(&VAR_21->search_vb,(byte*)VAR_10,VAR_16);
    if (!VAR_15) { VAR_18= VAR_4; goto x_adnsfail; }

    for (VAR_17=0, VAR_22=VAR_10; (VAR_22= FUNC_12(VAR_22,'.')); VAR_22++, VAR_17++);
    VAR_21->search_doneabs= (VAR_17 >= VAR_9->searchndots) ? -1 : 0;
    VAR_21->search_origlen= VAR_16;
    FUNC_4(VAR_9,VAR_21,VAR_20);
  } else {
    if (VAR_12 & VAR_2) {
      if (!FUNC_11(VAR_21,VAR_10,VAR_16)) { VAR_18= VAR_4; goto x_adnsfail; }
    }
    FUNC_10(VAR_9,VAR_21, VAR_10,VAR_16, VAR_19,VAR_12, VAR_20);
  }
  FUNC_0(VAR_9,VAR_20);
  FUNC_1(VAR_9,VAR_21,VAR_7);
  return 0;

 x_adnsfail:
  FUNC_3(VAR_21,VAR_18);
  FUNC_1(VAR_9,VAR_21,VAR_7);
  return 0;

 x_errno:
  VAR_15= VAR_8;
  FUNC_6(VAR_15);
  FUNC_1(VAR_9,0,VAR_7);
  return VAR_15;
}
