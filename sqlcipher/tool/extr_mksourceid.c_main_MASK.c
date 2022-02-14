
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zLine ;
typedef int SHA3Context ;
typedef int FILE ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,unsigned char*,unsigned int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (char*,int,int *) ;
 int * FUNC_7 (char const*,char*) ;
 int FUNC_8 (int ,char*,char const*) ;
 int FUNC_9 (char*,char*,int) ;
 char* FUNC_10 (char*) ;
 int FUNC_11 (char*,char*,...) ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (char*,int,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_14 (char const*,char*) ;
 int FUNC_15 (char*) ;
 scalar_t__ FUNC_16 (char*,char*,int) ;
 int FUNC_17 (char*) ;

int FUNC_18(int VAR_1, char **VAR_2){
  const char *VAR_3 = 0;
  int VAR_4;
  int VAR_5 = 0;
  FILE *VAR_6;
  int VAR_7 = 1;
  int VAR_8;
  SHA3Context VAR_9;
  char VAR_10[50];
  char VAR_11[100];
  char VAR_12[20000];

  for(VAR_4=1; VAR_4<VAR_1; VAR_4++){
    const char *VAR_13 = VAR_2[VAR_4];
    if( VAR_13[0]=='-' ){
      if( VAR_13[1]=='-' ) VAR_13++;
      if( FUNC_14(VAR_13, "-v")==0 ){
        VAR_5 = 1;
      }else
      {
        FUNC_8(VAR_0, "unknown option \"%s\"", VAR_2[VAR_4]);
        FUNC_4(1);
      }
    }else if( VAR_3!=0 ){
      FUNC_17(VAR_2[0]);
    }else{
      VAR_3 = VAR_13;
    }
  }
  if( VAR_3==0 ) FUNC_17(VAR_2[0]);
  VAR_10[0] = 0;
  VAR_6 = FUNC_7(VAR_3, "rb");
  if( VAR_6==0 ){
    FUNC_8(VAR_0, "cannot open \"%s\" for reading\n", VAR_3);
    FUNC_4(1);
  }
  FUNC_2(&VAR_9, 256);
  while( FUNC_6(VAR_12, sizeof(VAR_12), VAR_6) ){
    if( FUNC_16(VAR_12,"# Remove this line", 18)!=0 ){
      FUNC_3(&VAR_9, (unsigned char*)VAR_12, (unsigned)FUNC_15(VAR_12));
    }
    if( FUNC_16(VAR_12, "D 20", 4)==0 ){
      FUNC_9(VAR_10, &VAR_12[2], 10);
      VAR_10[10] = ' ';
      FUNC_9(&VAR_10[11], &VAR_12[13], 8);
      VAR_10[19] = 0;
      continue;
    }
    if( FUNC_16(VAR_12, "F ", 2)==0 ){
      char *VAR_14 = &VAR_12[2];
      char *VAR_15 = FUNC_10(VAR_14);
      FUNC_10(VAR_15);
      if( FUNC_15(VAR_15)==40 ){
        VAR_8 = FUNC_12(VAR_14, VAR_11);
      }else{
        VAR_8 = FUNC_13(VAR_14, 256, VAR_11);
      }
      if( VAR_8 ){
        VAR_7 = 0;
        if( VAR_5 ){
          FUNC_11("hash failed: %s\n", VAR_14);
        }
      }else if( FUNC_14(VAR_11, VAR_15)!=0 ){
        VAR_7 = 0;
        if( VAR_5 ){
          FUNC_11("wrong hash: %s\n", VAR_14);
          FUNC_11("... expected: %s\n", VAR_15);
          FUNC_11("... got:      %s\n", VAR_11);
        }
      }
    }
  }
  FUNC_5(VAR_6);
  FUNC_0(FUNC_1(&VAR_9), VAR_11, 256/8);
  if( !VAR_7 ){
    FUNC_11("%s %.60salt1\n", VAR_10, VAR_11);
  }else{
    FUNC_11("%s %s\n", VAR_10, VAR_11);
  }
  return 0;
}
