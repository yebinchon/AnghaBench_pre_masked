
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int ** str; } ;
struct TYPE_10__ {scalar_t__ status; struct TYPE_10__* next; TYPE_1__ rrs; scalar_t__ rest; scalar_t__ addr; int start; int query; } ;
typedef TYPE_2__ logline ;
typedef int adns_state ;
typedef int adns_initflags ;
typedef TYPE_2__ adns_answer ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *,TYPE_2__**,int *) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (int *,int ,int ,scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int ,int *,TYPE_2__**,int *) ;
 int FUNC_6 (int ,int *,TYPE_2__**,int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,char*,char*,char*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (char*,int,scalar_t__,int ) ;
 int FUNC_12 (int *,int ,scalar_t__,scalar_t__,int *) ;
 char* VAR_8 ;
 TYPE_2__* FUNC_13 (int *,int ,int) ;
 int VAR_9 ;
 char* FUNC_14 (int) ;

__attribute__((used)) static void FUNC_15(FILE *VAR_10, FILE *VAR_11, int VAR_12, int VAR_13) {
  int VAR_14, VAR_15, VAR_16;
  adns_state VAR_17;
  adns_answer *VAR_18;
  logline *VAR_19, *VAR_20, *VAR_21;
  adns_initflags VAR_22;

  VAR_22= (VAR_13 & VAR_2) ? VAR_4 : 0;
  if (VAR_6) {
    VAR_7= FUNC_4(&VAR_17, VAR_22, VAR_9, VAR_6);
  } else {
    VAR_7= FUNC_3(&VAR_17, VAR_22, 0);
  }
  if (VAR_7) FUNC_0("adns_init");
  VAR_19= VAR_20= FUNC_13(VAR_10, VAR_17, VAR_13);
  VAR_16= 1; VAR_14= 0;
  while (VAR_19) {
    while (VAR_19) {
      if (VAR_13 & VAR_2)
 FUNC_11("%d in queue; checking %.*s", VAR_16,
     VAR_19->rest-VAR_19->addr, FUNC_10(VAR_19->addr));
      if (VAR_14 || VAR_16 >= VAR_12) {





   VAR_15= FUNC_5(VAR_17, &VAR_19->query, &VAR_18, ((void*)0));
      } else {
 VAR_15= FUNC_1(VAR_17, &VAR_19->query, &VAR_18, ((void*)0));
      }
      if ((VAR_15 == VAR_0) || (VAR_1 == VAR_15)) break;
      if (VAR_15) {
 FUNC_8(VAR_9, "%s: adns_wait/check: %s", VAR_8, FUNC_14(VAR_15));
 FUNC_7(1);
      }
      FUNC_12(VAR_11, VAR_19->start, VAR_19->addr, VAR_19->rest,
  VAR_18->status == VAR_5 ? *VAR_18->rrs.str : ((void*)0));
      VAR_21= VAR_19; VAR_19= VAR_19->next;
      FUNC_9(VAR_21);
      FUNC_9(VAR_18);
      VAR_16--;
    }
    if (!VAR_14) {
      VAR_21= FUNC_13(VAR_10, VAR_17, VAR_13);
      if (VAR_21) {
        if (!VAR_19) VAR_19= VAR_21;
        else VAR_20->next= VAR_21;
        VAR_20= VAR_21; VAR_16++;
      } else {
 VAR_14= 1;
      }
    }
  }
  FUNC_2(VAR_17);
}
