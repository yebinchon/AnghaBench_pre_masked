
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vbuf ;
typedef int findlabel_state ;
typedef int byte ;
typedef scalar_t__ adns_status ;
typedef int adns_state ;
typedef int adns_rrtype ;
typedef int adns_queryflags ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int*,int*) ;
 int FUNC_4 (int *,int ,int,int ,int const*,int,int,int,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,int const*,size_t) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int ,int *,int*,int) ;

adns_status FUNC_9(adns_state VAR_1, vbuf *VAR_2, int *VAR_3,
      const byte *VAR_4, int VAR_5, int VAR_6,
      adns_rrtype VAR_7, adns_queryflags VAR_8) {
  byte *VAR_9;
  findlabel_state VAR_10;
  int VAR_11, VAR_12;
  adns_status VAR_13;

  VAR_13= FUNC_8(VAR_1,VAR_2,VAR_3,VAR_5); if (VAR_13) return VAR_13;

  FUNC_1(VAR_2);

  FUNC_4(&VAR_10,VAR_1,-1,0,VAR_4,VAR_5,VAR_5,VAR_6,0);
  for (;;) {
    VAR_13= FUNC_3(&VAR_10,&VAR_11,&VAR_12); FUNC_5(!VAR_13);
    if (!VAR_11) break;
    FUNC_5(VAR_11<255);
    FUNC_0(VAR_11);
    FUNC_6(VAR_9,VAR_4+VAR_12, (size_t) VAR_11);
    VAR_9+= VAR_11;
  }
  FUNC_0(0);

  FUNC_2(VAR_2);

  VAR_13= FUNC_7(VAR_2,VAR_7);

  return VAR_0;
}
