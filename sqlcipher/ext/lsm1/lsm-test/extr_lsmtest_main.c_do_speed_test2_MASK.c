
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct Option TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int TestDb ;
struct Option {char const* zOpt; int eVal; int iDefault; } ;
struct TYPE_5__ {int nMinKey; int nMaxKey; int nMinVal; int nMaxVal; int member_4; int member_3; int member_2; int member_1; int member_0; } ;
typedef int FILE ;
typedef TYPE_1__ DatasourceDefn ;
typedef int Datasource ;


 int FUNC_0 (TYPE_3__*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (char*) ;
 int VAR_10 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,char*) ;
 size_t VAR_11 ;
 int FUNC_6 () ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int) ;
 int VAR_12 ;
 int FUNC_9 (int *,void*,int,void**,int*) ;
 int FUNC_10 () ;
 int FUNC_11 (char*,char*,int,int **) ;
 int FUNC_12 (int *,int ,void*) ;
 int FUNC_13 (TYPE_3__*,char*,char*,int*) ;
 int FUNC_14 (int *,int,int*) ;
 int FUNC_15 (int **) ;
 int FUNC_16 (int *,int ,int*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int,void**,int*,int ,int ) ;
 int FUNC_19 (int *,int *,int,int*) ;
 int FUNC_20 (int *) ;
 int * FUNC_21 (TYPE_1__*) ;
 int FUNC_22 (int ) ;
 int * FUNC_23 (char*,int,int*) ;
 int FUNC_24 (char*,char const*) ;
 int FUNC_25 (int) ;
 int FUNC_26 () ;
 int FUNC_27 () ;
 int FUNC_28 (int *,int *,int,int,int*) ;
 int FUNC_29 (int) ;

int FUNC_30(int VAR_13, char **VAR_14){
  struct Option {
    const char *zOpt;
    int eVal;
    int iDefault;
  } VAR_15[] = {
    { "-repeat", VAR_4, 10},
    { "-write", VAR_8, 10000},
    { "-pause", VAR_3, 0},
    { "-fetch", VAR_0, 0},
    { "-scan", VAR_5, 0},
    { "-nscan", VAR_2, 0},
    { "-keysize", VAR_1, 12},
    { "-valsize", VAR_7, 100},
    { "-trans", VAR_6, 0},
    { "-system", -1, 0},
    { "help", -2, 0},
    {0, 0, 0}
  };
  int VAR_16;
  int VAR_17[9];
  int VAR_18 = 0;
  int VAR_19 = 0;
  int VAR_20 = 0;

  TestDb *VAR_21;
  Datasource *VAR_22;
  DatasourceDefn VAR_23 = { VAR_9, 0, 0, 0, 0 };
  char *VAR_24 = "";
  int VAR_25 = 1;
  FILE *VAR_26 = 0;
  for(VAR_16=0; VAR_16<FUNC_0(VAR_15); VAR_16++){
    if( VAR_15[VAR_16].zOpt ) VAR_17[VAR_15[VAR_16].eVal] = VAR_15[VAR_16].iDefault;
  }


  for(VAR_16=0; VAR_16<VAR_13; VAR_16+=2){
    int VAR_27;
    VAR_18 = FUNC_13(VAR_15, "switch", VAR_14[VAR_16], &VAR_27);
    if( VAR_18 ){
      return VAR_18;
    }
    if( VAR_15[VAR_27].eVal==-2 ){
      FUNC_6();
      return 0;
    }
    if( VAR_16+1==VAR_13 ){
      FUNC_24("option %s requires an argument\n", VAR_15[VAR_27].zOpt);
      return 1;
    }
    if( VAR_15[VAR_27].eVal>=0 ){
      VAR_17[VAR_15[VAR_27].eVal] = FUNC_1(VAR_14[VAR_16+1]);
    }else{
      VAR_24 = VAR_14[VAR_16+1];
      VAR_25 = 0;





    }
  }

  FUNC_7("#");
  for(VAR_16=0; VAR_16<FUNC_0(VAR_15); VAR_16++){
    if( VAR_15[VAR_16].zOpt ){
      if( VAR_15[VAR_16].eVal>=0 ){
        FUNC_7(" %s=%d", &VAR_15[VAR_16].zOpt[1], VAR_17[VAR_15[VAR_16].eVal]);
      }else if( VAR_15[VAR_16].eVal==-1 ){
        FUNC_7(" %s=\"%s\"", &VAR_15[VAR_16].zOpt[1], VAR_24);
      }
    }
  }
  FUNC_7("\n");

  VAR_23.nMinKey = VAR_23.nMaxKey = VAR_17[VAR_1];
  VAR_23.nMinVal = VAR_23.nMaxVal = VAR_17[VAR_7];
  VAR_22 = FUNC_21(&VAR_23);

  if( VAR_17[VAR_8]==0 ){
    VAR_19 = 1;
  }

  if( VAR_25 ){
    VAR_18 = FUNC_11(VAR_24, "testdb.lsm", !VAR_19, &VAR_21);
  }else{
    VAR_21 = FUNC_23(VAR_24, !VAR_19, &VAR_18);
  }
  if( VAR_18!=0 ) return VAR_18;
  if( VAR_19 ){
    VAR_20 = FUNC_17(VAR_21);
  }






  for(VAR_16=0; VAR_16<VAR_17[VAR_4] && VAR_18==0; VAR_16++){
    int VAR_28, VAR_29;
    int VAR_30;
    int VAR_31 = VAR_17[VAR_8];

    if( VAR_19 ){
      VAR_28 = 0;
    }else{
      FUNC_27();

      if( VAR_17[VAR_6] ) FUNC_14(VAR_21, 2, &VAR_18);
      FUNC_28(VAR_21, VAR_22, VAR_16*VAR_31, VAR_31, &VAR_18);
      if( VAR_17[VAR_6] ) FUNC_16(VAR_21, 0, &VAR_18);

      VAR_28 = FUNC_26();
      VAR_20 += VAR_31;
    }

    if( VAR_17[VAR_3] ){
      if( VAR_17[VAR_3]/1000 ) FUNC_8(VAR_17[VAR_3]/1000);
      if( VAR_17[VAR_3]%1000 ) FUNC_29(1000 * (VAR_17[VAR_3]%1000));
    }

    if( VAR_17[VAR_0] ){
      FUNC_27();
      if( VAR_17[VAR_6] ) FUNC_14(VAR_21, 1, &VAR_18);
      for(VAR_30=0; VAR_30<VAR_17[VAR_0]; VAR_30++){
        int VAR_32 = FUNC_25(VAR_16*VAR_31+VAR_30) % VAR_20;

        FUNC_19(VAR_21, VAR_22, VAR_32, &VAR_18);
      }
      if( VAR_17[VAR_6] ) FUNC_16(VAR_21, 0, &VAR_18);
      VAR_29 = FUNC_26();
    }else{
      VAR_29 = 0;
    }

    if( VAR_16==(VAR_17[VAR_4]-1) ){
      FUNC_27();
      FUNC_15(&VAR_21);
      VAR_28 += FUNC_26();
    }

    FUNC_7("%d %d %d\n", VAR_16, VAR_28, VAR_29);
    FUNC_3(VAR_12);
  }

  FUNC_15(&VAR_21);
  FUNC_20(VAR_22);

  if( VAR_26 ){
    FUNC_4(VAR_26);
    FUNC_2(VAR_26);
  }
  return VAR_18;
}
