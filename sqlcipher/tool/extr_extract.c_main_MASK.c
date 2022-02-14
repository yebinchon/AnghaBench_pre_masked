
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*,...) ;
 size_t FUNC_4 (char*,int,int,int *) ;
 int FUNC_5 (int *,int,int ) ;
 int FUNC_6 (char*,int,int,int ) ;
 char* FUNC_7 (int) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_8(int VAR_3, char **VAR_4){
  FILE *VAR_5;
  char *VAR_6;
  int VAR_7;
  int VAR_8;
  size_t VAR_9;

  if( VAR_3!=4 ){
    FUNC_3(VAR_1, "Usage: %s FILENAME OFFSET AMOUNT\n", *VAR_4);
    return 1;
  }
  VAR_5 = FUNC_2(VAR_4[1], "rb");
  if( VAR_5==0 ){
    FUNC_3(VAR_1, "cannot open \"%s\"\n", VAR_4[1]);
    return 1;
  }
  VAR_7 = FUNC_0(VAR_4[2]);
  VAR_8 = FUNC_0(VAR_4[3]);
  VAR_6 = FUNC_7( VAR_8 );
  if( VAR_6==0 ){
    FUNC_3(VAR_1, "out of memory\n");
    return 1;
  }
  FUNC_5(VAR_5, VAR_7, VAR_0);
  VAR_9 = FUNC_4(VAR_6, 1, VAR_8, VAR_5);
  FUNC_1(VAR_5);
  if( VAR_9<VAR_8 ){
    FUNC_3(VAR_1, "got only %d of %d bytes\n", VAR_9, VAR_8);
    return 1;
  }else{
    FUNC_6(VAR_6, 1, VAR_8, VAR_2);
  }
  return 0;
}
