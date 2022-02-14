
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int FILE ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *,size_t) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (char const*,char*) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int *,size_t,int,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int ) ;
 size_t FUNC_9 (int *) ;
 int FUNC_10 (unsigned int) ;
 int FUNC_11 (char*,...) ;
 int * FUNC_12 (int *,size_t) ;
 int FUNC_13 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_14 (char const*,char*) ;

int FUNC_15(int VAR_6, char **VAR_7){
  FILE *VAR_8;
  int VAR_9;
  int VAR_10 = 0;
  uint8_t *VAR_11 = 0;
  size_t VAR_12;
  unsigned VAR_13 = 0;

  for(VAR_9=1; VAR_9<VAR_6; VAR_9++){
    const char *VAR_14 = VAR_7[VAR_9];
    if( VAR_14[0]=='-' ){
      if( VAR_14[1]=='-' ) VAR_14++;
      if( FUNC_14(VAR_14, "-show-errors")==0 ){
        VAR_13 |= VAR_0;
        FUNC_10(VAR_13);
      }else
      if( FUNC_14(VAR_14, "-show-max-delay")==0 ){
        VAR_13 |= VAR_1;
        FUNC_10(VAR_13);
      }else
      if( FUNC_14(VAR_14, "-sql-trace")==0 ){
        VAR_13 |= VAR_2;
        FUNC_10(VAR_13);
      }else
      {
        FUNC_11("unknown option \"%s\"\n", VAR_7[VAR_9]);
        FUNC_11("should be one of: --show-errors --show-max-delay"
               " --sql-trace\n");
        FUNC_1(1);
      }
      continue;
    }
    VAR_8 = FUNC_4(VAR_14, "rb");
    if( VAR_8==0 ){
      FUNC_5(VAR_4, "cannot open \"%s\"\n", VAR_14);
      VAR_10++;
      continue;
    }
    FUNC_8(VAR_8, 0, VAR_3);
    VAR_12 = FUNC_9(VAR_8);
    FUNC_13(VAR_8);
    VAR_11 = FUNC_12(VAR_11, VAR_12);
    if( VAR_11==0 ){
      FUNC_5(VAR_4, "cannot malloc() for %d bytes\n", (int)VAR_12);
      FUNC_1(1);
    }
    if( FUNC_6(VAR_11, VAR_12, 1, VAR_8)!=1 ){
      FUNC_5(VAR_4, "cannot read %d bytes from \"%s\"\n",
                       (int)VAR_12, VAR_14);
      VAR_10++;
    }else{
      FUNC_11("%s... ", VAR_14);
      if( VAR_13 ) FUNC_11("\n");
      FUNC_3(VAR_5);
      (void)FUNC_0(VAR_11, VAR_12);
      if( VAR_13 ) FUNC_11("%s: ", VAR_14);
      FUNC_11("ok\n");
    }
    FUNC_2(VAR_8);
  }
  FUNC_7(VAR_11);
  return VAR_10;
}
