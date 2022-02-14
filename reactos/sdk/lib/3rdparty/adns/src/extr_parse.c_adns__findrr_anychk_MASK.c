
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int findlabel_state ;
typedef int byte ;
typedef scalar_t__ adns_status ;
typedef TYPE_1__* adns_query ;
struct TYPE_4__ {int ads; } ;


 int FUNC_0 (int,unsigned long) ;
 int FUNC_1 (int,int) ;
 unsigned long VAR_0 ;
 scalar_t__ FUNC_2 (int *,int*,int*) ;
 int FUNC_3 (int *,int ,int,TYPE_1__*,int const*,int,int,int,int*) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;

adns_status FUNC_6(adns_query VAR_2, int VAR_3,
    const byte *VAR_4, int VAR_5, int *VAR_6,
    int *VAR_7, int *VAR_8, unsigned long *VAR_9,
    int *VAR_10, int *VAR_11,
    const byte *VAR_12, int VAR_13, int VAR_14,
    int *VAR_15) {
  findlabel_state VAR_16, VAR_17;
  int VAR_18;

  int VAR_19, VAR_20, VAR_21;
  unsigned long VAR_22;
  int VAR_23, VAR_24, VAR_25;
  int VAR_26, VAR_27, VAR_28;
  adns_status VAR_29;

  VAR_18= *VAR_6;

  FUNC_3(&VAR_16,VAR_2->ads, VAR_3,VAR_2, VAR_4,VAR_5,VAR_5,VAR_18,&VAR_18);
  if (VAR_12) {
    FUNC_3(&VAR_17,VAR_2->ads, -1,0, VAR_12,VAR_13,VAR_13,VAR_14,0);
    VAR_21= 0;
  } else {
    VAR_21= 1;
  }

  for (;;) {
    VAR_29= FUNC_2(&VAR_16,&VAR_23,&VAR_24);
    if (VAR_29) return VAR_29;
    if (VAR_23<0) goto x_truncated;

    if (!VAR_21) {
      VAR_29= FUNC_2(&VAR_17,&VAR_26,&VAR_27);
      FUNC_4(!VAR_29); FUNC_4(VAR_26>=0);
      if (VAR_23 != VAR_26) VAR_21= 1;
      while (!VAR_21 && VAR_26-- > 0) {
 VAR_25= VAR_4[VAR_24++]; if (FUNC_5(VAR_25)) VAR_25 &= ~32;
 VAR_28= VAR_12[VAR_27++]; if (FUNC_5(VAR_28)) VAR_28 &= ~32;
 if (VAR_25 != VAR_28) VAR_21= 1;
      }
    }
    if (!VAR_23) break;
  }
  if (VAR_15) *VAR_15= !VAR_21;

  if (VAR_18+10>VAR_5) goto x_truncated;
  FUNC_1(VAR_18,VAR_19); *VAR_7= VAR_19;
  FUNC_1(VAR_18,VAR_19); *VAR_8= VAR_19;

  FUNC_0(VAR_18,VAR_22);
  if (VAR_22 > VAR_0) VAR_22= VAR_0;
  *VAR_9= VAR_22;

  FUNC_1(VAR_18,VAR_20); if (VAR_10) *VAR_10= VAR_20;
  if (VAR_11) *VAR_11= VAR_18;
  VAR_18+= VAR_20;
  if (VAR_18>VAR_5) goto x_truncated;
  *VAR_6= VAR_18;
  return VAR_1;

 x_truncated:
  *VAR_7= -1;
  return 0;
}
