
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vbuf ;
struct TYPE_3__ {int type; } ;
typedef TYPE_1__ typeinfo ;
typedef int label ;
typedef int byte ;
typedef scalar_t__ adns_status ;
typedef int adns_state ;
typedef int adns_queryflags ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char const) ;
 int FUNC_5 (int*,int*,size_t) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int ,int *,int*,int) ;

adns_status FUNC_8(adns_state VAR_6, vbuf *VAR_7, int *VAR_8,
     const char *VAR_9, int VAR_10,
     const typeinfo *VAR_11, adns_queryflags VAR_12) {
  int VAR_13, VAR_14, VAR_15;
  byte VAR_16[255], *VAR_17;
  const char *VAR_18, *VAR_19;
  adns_status VAR_20;

  VAR_20= FUNC_7(VAR_6,VAR_7,VAR_8,VAR_10+2); if (VAR_20) return VAR_20;

  FUNC_1(VAR_7);

  VAR_18= VAR_9; VAR_19= VAR_9+VAR_10;
  VAR_15= 0;
  while (VAR_18!=VAR_19) {
    VAR_13= 0;
    while (VAR_18!=VAR_19 && (VAR_14= *VAR_18++)!='.') {
      if (VAR_14=='\\') {
 if (!(VAR_12 & VAR_2)) return VAR_4;
 if (FUNC_4(VAR_18[0])) {
   if (FUNC_4(VAR_18[1]) && FUNC_4(VAR_18[2])) {
     VAR_14= (VAR_18[0] - '0')*100 + (VAR_18[1] - '0')*10 + (VAR_18[2] - '0');
     VAR_18 += 3;
     if (VAR_14 >= 256) return VAR_4;
   } else {
     return VAR_4;
   }
 } else if (!(VAR_14= *VAR_18++)) {
   return VAR_4;
 }
      }
      if (!(VAR_12 & VAR_2)) {
 if (VAR_14 == '-') {
   if (!VAR_13) return VAR_4;
 } else if (!FUNC_3(VAR_14) && !FUNC_4(VAR_14)) {
   return VAR_4;
 }
      }
      if (VAR_13 == sizeof(VAR_16)) return VAR_4;
      VAR_16[VAR_13++]= VAR_14;
    }
    if (!VAR_13) return VAR_4;
    if (VAR_13 > VAR_1) return VAR_5;
    VAR_15+= VAR_13+1;
    if (VAR_15 >= VAR_0) return VAR_5;
    FUNC_0(VAR_13);
    FUNC_5(VAR_17,VAR_16,(size_t) VAR_13); VAR_17+= VAR_13;
  }
  FUNC_0(0);

  FUNC_2(VAR_7);

  VAR_20= FUNC_6(VAR_7,VAR_11->type);

  return VAR_3;
}
