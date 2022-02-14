
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_int64 ;
struct TYPE_2__ {int bRaw; unsigned char pagesize; int mxPage; } ;


 int FUNC_0 (char) ;
 int FUNC_1 (unsigned char*,int,int,char*) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char const*,char*) ;
 unsigned char* FUNC_7 (int,int) ;
 int FUNC_8 (int ,char*,...) ;
 TYPE_1__ VAR_0 ;
 int FUNC_9 (char const*,char*) ;
 int FUNC_10 () ;
 int FUNC_11 (int) ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (unsigned char*) ;
 scalar_t__ FUNC_15 (char*,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_16 (char*,char*) ;
 int FUNC_17 (char*,char**,int ) ;
 int FUNC_18 (char const*) ;

int FUNC_19(int VAR_2, char **VAR_3){
  sqlite3_int64 VAR_4;
  unsigned char *VAR_5;
  const char *VAR_6 = VAR_3[0];
  char **VAR_7 = VAR_3;
  int VAR_8 = VAR_2;


  if( VAR_8>1 ){
    if( FUNC_15("-raw", VAR_7[1])==0
     || FUNC_15("--raw", VAR_7[1])==0
    ){
      VAR_0.bRaw = 1;
      VAR_7++;
      VAR_8--;
    }
  }

  if( VAR_8<2 ){
    FUNC_18(VAR_6);
    FUNC_3(1);
  }

  FUNC_6(VAR_6, VAR_7[1]);
  VAR_4 = FUNC_5();

  VAR_5 = FUNC_7(16, 2);
  VAR_0.pagesize = VAR_5[0]*256 + VAR_5[1]*65536;
  if( VAR_0.pagesize==0 ) VAR_0.pagesize = 1024;
  FUNC_14(VAR_5);

  FUNC_12("Pagesize: %d\n", VAR_0.pagesize);
  VAR_0.mxPage = (int)((VAR_4+VAR_0.pagesize-1)/VAR_0.pagesize);

  FUNC_12("Available pages: 1..%d\n", VAR_0.mxPage);
  if( VAR_8==2 ){
    int VAR_9;
    for(VAR_9=1; VAR_9<=VAR_0.mxPage; VAR_9++) FUNC_11(VAR_9);
  }else{
    int VAR_10;
    for(VAR_10=2; VAR_10<VAR_8; VAR_10++){
      int VAR_11, VAR_12;
      char *VAR_13;
      if( FUNC_16(VAR_7[VAR_10], "dbheader")==0 ){
        FUNC_10();
        continue;
      }
      if( FUNC_16(VAR_7[VAR_10], "pgidx")==0 ){
        FUNC_9(VAR_6, VAR_7[1]);
        continue;
      }
      if( FUNC_16(VAR_7[VAR_10], "ptrmap")==0 ){
        FUNC_13(VAR_7[1]);
        continue;
      }
      if( FUNC_16(VAR_7[VAR_10], "help")==0 ){
        FUNC_18(VAR_6);
        continue;
      }
      if( !FUNC_0(VAR_7[VAR_10][0]) ){
        FUNC_8(VAR_1, "%s: unknown option: [%s]\n", VAR_6, VAR_7[VAR_10]);
        continue;
      }
      VAR_11 = FUNC_17(VAR_7[VAR_10], &VAR_13, 0);
      if( VAR_13 && FUNC_16(VAR_13,"..end")==0 ){
        VAR_12 = VAR_0.mxPage;
      }else if( VAR_13 && VAR_13[0]=='.' && VAR_13[1]=='.' ){
        VAR_12 = FUNC_17(&VAR_13[2], 0, 0);
      }else if( VAR_13 && VAR_13[0]=='b' ){
        int VAR_14, VAR_15, VAR_16;
        unsigned char *VAR_17;
        if( VAR_11==1 ){
          VAR_14 = VAR_16 = 100;
          VAR_15 = VAR_0.pagesize-100;
        }else{
          VAR_16 = 0;
          VAR_14 = (VAR_11-1)*VAR_0.pagesize;
          VAR_15 = VAR_0.pagesize;
        }
        VAR_17 = FUNC_7(VAR_14, VAR_15);
        FUNC_1(VAR_17, VAR_11, VAR_16, &VAR_13[1]);
        FUNC_14(VAR_17);
        continue;
      }else if( VAR_13 && VAR_13[0]=='t' ){
        int VAR_18 = 0;
        int VAR_19 = 0;
        int VAR_20;
        for(VAR_20=1; VAR_13[VAR_20]; VAR_20++){
          if( VAR_13[VAR_20]=='r' ) VAR_19 = 1;
          if( VAR_13[VAR_20]=='d' ) VAR_18 = 1;
        }
        FUNC_2(VAR_11, VAR_18, VAR_19);
        continue;
      }else{
        VAR_12 = VAR_11;
      }
      if( VAR_11<1 || VAR_12<VAR_11 || VAR_12>VAR_0.mxPage ){
        FUNC_8(VAR_1,
          "Page argument should be LOWER?..UPPER?.  Range 1 to %d\n",
          VAR_0.mxPage);
        FUNC_3(1);
      }
      while( VAR_11<=VAR_12 ){
        FUNC_11(VAR_11);
        VAR_11++;
      }
    }
  }
  FUNC_4();
  return 0;
}
