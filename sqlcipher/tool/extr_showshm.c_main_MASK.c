
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,char*,char*,...) ;
 int FUNC_3 (unsigned char*) ;
 unsigned char* FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (char*,int ) ;
 int FUNC_6 (unsigned char*) ;
 int FUNC_7 (unsigned char*,int) ;
 int VAR_2 ;

int FUNC_8(int VAR_3, char **VAR_4){
  unsigned char *VAR_5;
  if( VAR_3<2 ){
    FUNC_2(VAR_2,"Usage: %s FILENAME\n", VAR_4[0]);
    FUNC_1(1);
  }
  VAR_1 = FUNC_5(VAR_4[1], VAR_0);
  if( VAR_1<0 ){
    FUNC_2(VAR_2,"%s: can't open %s\n", VAR_4[0], VAR_4[1]);
    FUNC_1(1);
  }
  VAR_5 = FUNC_4(0, 136);
  FUNC_7(VAR_5, 0);
  FUNC_7(VAR_5, 1);
  FUNC_6(VAR_5);
  FUNC_3(VAR_5);
  FUNC_0(VAR_1);
  return 0;
}
