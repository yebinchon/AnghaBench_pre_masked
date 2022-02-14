
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct Option TYPE_1__ ;


typedef int lsm_db ;
struct Option {char const* zName; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int*) ;
 int FUNC_4 (int ,int **) ;
 int FUNC_5 (int *,char const*) ;
 int FUNC_6 (int *,int,int,int ) ;
 int FUNC_7 (TYPE_1__*,char*,char*,int*) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (char*) ;

int FUNC_10(int VAR_3, char **VAR_4){
  struct Option {
    const char *zName;
  } VAR_5 [] = {
    { "-nmerge" },
    { "-nkb" },
    { 0 }
  };

  lsm_db *VAR_6;
  int VAR_7;
  int VAR_8;
  const char *VAR_9;
  int VAR_10 = 1;
  int VAR_11 = (1<<30);

  if( VAR_3==0 ) goto usage;
  VAR_9 = VAR_4[VAR_3-1];
  for(VAR_8=0; VAR_8<(VAR_3-1); VAR_8++){
    int VAR_12;
    VAR_7 = FUNC_7(VAR_5, "option", VAR_4[VAR_8], &VAR_12);
    if( VAR_7 ) return VAR_7;
    switch( VAR_12 ){
      case 0:
        VAR_8++;
        if( VAR_8==(VAR_3-1) ) goto usage;
        VAR_10 = FUNC_0(VAR_4[VAR_8]);
        break;
      case 1:
        VAR_8++;
        if( VAR_8==(VAR_3-1) ) goto usage;
        VAR_11 = FUNC_0(VAR_4[VAR_8]);
        break;
    }
  }

  VAR_7 = FUNC_4(0, &VAR_6);
  if( VAR_7!=VAR_2 ){
    FUNC_8("lsm_open(): rc=%d\n", VAR_7);
  }else{
    VAR_7 = FUNC_5(VAR_6, VAR_9);
    if( VAR_7!=VAR_2 ){
      FUNC_8("lsm_open(): rc=%d\n", VAR_7);
    }else{
      int VAR_13 = -1;
      FUNC_3(VAR_6, VAR_1, &VAR_13);
      VAR_13 = VAR_13*2;
      FUNC_3(VAR_6, VAR_0, &VAR_13);

      VAR_7 = FUNC_6(VAR_6, VAR_10, VAR_11, 0);
      if( VAR_7!=VAR_2 ){
        FUNC_8("lsm_work(): rc=%d\n", VAR_7);
      }
    }
  }
  if( VAR_7==VAR_2 ){
    VAR_7 = FUNC_1(VAR_6, 0);
  }

  FUNC_2(VAR_6);
  return VAR_7;

 usage:
  FUNC_9("?-optimize? ?-n N? DATABASE");
  return -1;
}
