
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,char*,...) ;
 int FUNC_5 (scalar_t__,int ,int ) ;
 int FUNC_6 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,int) ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_9(int VAR_7, char **VAR_8){
  int VAR_9, VAR_10;
  int VAR_11;
  if( VAR_7!=2 ){
    FUNC_4(VAR_6,"Usage: %s FILENAME\n", VAR_8[0]);
    FUNC_1(1);
  }
  VAR_2 = FUNC_3(VAR_8[1], "rb");
  if( VAR_2==0 ){
    FUNC_4(VAR_6,"%s: can't open %s\n", VAR_8[0], VAR_8[1]);
    FUNC_1(1);
  }
  FUNC_5(VAR_2, 0, VAR_0);
  VAR_3 = FUNC_6(VAR_2);
  FUNC_8("journal file size: %d bytes\n", VAR_3);
  FUNC_5(VAR_2, 0, VAR_1);
  VAR_11 = 0;
  while( VAR_11<VAR_3 ){
    VAR_10 = VAR_9 = (int)FUNC_0(VAR_11);
    if( VAR_10==0 ){
      VAR_10 = (VAR_3 - VAR_5)/(VAR_4+8);
    }
    VAR_11 += VAR_5;
    while( VAR_10 && VAR_11<VAR_3 ){
      FUNC_7(VAR_11);
      VAR_11 += VAR_4+8;
    }
    VAR_11 = (VAR_11/VAR_5 + 1)*VAR_5;
  }
  FUNC_2(VAR_2);
  return 0;
}
