
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,...) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int ,int ) ;
 int VAR_2 ;

int FUNC_5(int VAR_3, char **VAR_4){
  int VAR_5;
  int VAR_6;

  if( VAR_3!=2 ){
    FUNC_1(VAR_2, "Usage: %s FILENAME\n", VAR_4[0]);
    return 1;
  }
  VAR_5 = FUNC_2(VAR_4[1], VAR_1, 0);
  if( VAR_5<0 ){
    FUNC_1(VAR_2, "%s: cannot open %s\n", VAR_4[0], VAR_4[1]);
    return 1;
  }
  VAR_6 = FUNC_4(VAR_5, 0, VAR_0);
  if( VAR_6==0 ) FUNC_3("no locks\n");
  FUNC_0(VAR_5);
  return 0;
}
