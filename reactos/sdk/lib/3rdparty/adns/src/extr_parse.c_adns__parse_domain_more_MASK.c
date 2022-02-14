
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ used; } ;
typedef TYPE_1__ vbuf ;
typedef int parsedomain_flags ;
typedef int findlabel_state ;
typedef int const byte ;
typedef scalar_t__ adns_status ;
typedef int adns_state ;
typedef int adns_query ;


 scalar_t__ FUNC_0 (int *,int*,int*) ;
 int FUNC_1 (TYPE_1__*,int const*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_1__*,int const*,int) ;

adns_status FUNC_5(findlabel_state *VAR_4, adns_state VAR_5,
        adns_query VAR_6, vbuf *VAR_7, parsedomain_flags VAR_8,
        const byte *VAR_9) {
  int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
  adns_status VAR_15;

  VAR_14= 1;
  for (;;) {
    VAR_15= FUNC_0(VAR_4,&VAR_10,&VAR_11);
    if (VAR_15) return VAR_15;
    if (VAR_10<0) { VAR_7->used=0; return VAR_2; }
    if (!VAR_10) break;
    if (VAR_14) {
      VAR_14= 0;
    } else {
      if (!FUNC_1(VAR_7,(byte*)".",1)) return VAR_1;
    }
    if (VAR_8 & VAR_3) {
      if (!FUNC_4(VAR_7,VAR_9+VAR_11,VAR_10))
 return VAR_1;
    } else {
      VAR_13= VAR_9[VAR_11];
      if (!FUNC_2(VAR_13) && !FUNC_3(VAR_13)) return VAR_0;
      for (VAR_12= VAR_11+1; VAR_12<VAR_11+VAR_10; VAR_12++) {
 VAR_13= VAR_9[VAR_12];
 if (VAR_13 != '-' && !FUNC_2(VAR_13) && !FUNC_3(VAR_13))
   return VAR_0;
      }
      if (!FUNC_1(VAR_7,VAR_9+VAR_11,VAR_10))
 return VAR_1;
    }
  }
  if (!FUNC_1(VAR_7,(byte*)"",1)) return VAR_1;
  return VAR_2;
}
