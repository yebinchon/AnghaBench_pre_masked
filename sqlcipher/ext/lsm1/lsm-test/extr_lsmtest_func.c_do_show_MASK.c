
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct Option TYPE_1__ ;


typedef int lsm_db ;
struct Option {char const* zName; int bConfig; int eOpt; } ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int,...) ;
 int FUNC_8 (int ,int **) ;
 int FUNC_9 (int *,char const*) ;
 scalar_t__ FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*,...) ;
 int VAR_3 ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int *,char const*) ;
 int FUNC_14 (TYPE_1__*,char*,char*,int*) ;
 int FUNC_15 (char*,int) ;
 int FUNC_16 (char*) ;

int FUNC_17(int VAR_4, char **VAR_5){
  lsm_db *VAR_6;
  int VAR_7;
  const char *VAR_8;

  int VAR_9 = 131;
  unsigned int VAR_10 = 0;
  int VAR_11 = 0;
  const char *VAR_12 = "";

  struct Option {
    const char *zName;
    int bConfig;
    int eOpt;
  } VAR_13 [] = {
    { "array", 0, 132 },
    { "array-pages", 0, 133 },
    { "blocksize", 1, VAR_0 },
    { "pagesize", 1, VAR_1 },
    { "freelist", 0, 130 },
    { "page-ascii", 0, 129 },
    { "page-hex", 0, 128 },
    { 0, 0 }
  };

  char *VAR_14 = 0;
  int VAR_15 = 0;


  if( VAR_4>2 && FUNC_12(VAR_5[0])>1
   && FUNC_10(VAR_5[0], "-config", FUNC_12(VAR_5[0]))==0
  ){
    VAR_12 = VAR_5[1];
    VAR_15 = 2;
  }
  if( VAR_4<(VAR_15+1) ) goto usage;

  if( VAR_4>(VAR_15+1) ){
    VAR_7 = FUNC_14(VAR_13, "option", VAR_5[VAR_15+1], &VAR_9);
    if( VAR_7!=0 ) return VAR_7;
    VAR_11 = VAR_13[VAR_9].bConfig;
    VAR_9 = VAR_13[VAR_9].eOpt;
    if( (VAR_11==0 && VAR_9==130)
     || (VAR_11==1 && VAR_9==VAR_0)
     || (VAR_11==1 && VAR_9==VAR_1)
    ){
      if( VAR_4!=(VAR_15+2) ) goto usage;
    }else{
      if( VAR_4!=(VAR_15+3) ) goto usage;
      VAR_10 = FUNC_1(VAR_5[VAR_15+2]);
    }
  }
  VAR_8 = VAR_5[VAR_15];

  VAR_7 = FUNC_8(0, &VAR_6);
  FUNC_13(VAR_6, VAR_12);
  if( VAR_7!=VAR_2 ){
    FUNC_15("lsm_new(): rc=%d\n", VAR_7);
  }else{
    VAR_7 = FUNC_9(VAR_6, VAR_8);
    if( VAR_7!=VAR_2 ){
      FUNC_15("lsm_open(): rc=%d\n", VAR_7);
    }
  }

  if( VAR_7==VAR_2 ){
    if( VAR_11==0 ){
      switch( VAR_9 ){
        case 131:
        case 130:
          VAR_7 = FUNC_7(VAR_6, VAR_9, &VAR_14);
          break;
        case 132:
        case 133:
        case 129:
        case 128:
          VAR_7 = FUNC_7(VAR_6, VAR_9, VAR_10, &VAR_14);
          break;
        default:
          FUNC_0( !"no chance" );
      }

      if( VAR_7==VAR_2 ){
        FUNC_11("%s\n", VAR_14 ? VAR_14 : "");
        FUNC_2(VAR_3);
      }
      FUNC_5(FUNC_6(VAR_6), VAR_14);
    }else{
      int VAR_16 = -1;
      FUNC_4(VAR_6, VAR_9, &VAR_16);
      FUNC_11("%d\n", VAR_16);
      FUNC_2(VAR_3);
    }
  }

  FUNC_3(VAR_6);
  return VAR_7;

 usage:
  FUNC_16("DATABASE ?array|page-ascii|page-hex PGNO?");
  return -1;
}
