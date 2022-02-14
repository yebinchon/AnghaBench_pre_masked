
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char uint8_t ;
typedef int cx ;
struct TYPE_3__ {char execCnt; int nCb; scalar_t__ mxInterval; int db; scalar_t__ iLastCb; scalar_t__ iCutoffTime; } ;
typedef TYPE_1__ FuzzCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (char*,...) ;
 int VAR_11 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,char,int*) ;
 int FUNC_5 (int ,char*,int ,void*,char**) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int ,int ,int) ;
 char* FUNC_9 (char*,int,char const*) ;
 int FUNC_10 (char*,int *,int,int ) ;
 int FUNC_11 (int ,int,int ,void*) ;
 int FUNC_12 (int ,int ,int ) ;
 scalar_t__ FUNC_13 () ;

int FUNC_14(const uint8_t* VAR_12, size_t VAR_13) {
  char *VAR_14 = 0;
  uint8_t VAR_15;
  int VAR_16;
  char *VAR_17;
  FuzzCtx VAR_18;

  FUNC_0(&VAR_18, 0, sizeof(VAR_18));
  if( VAR_13<3 ) return 0;




  if( VAR_12[1]=='\n' ){
    VAR_15 = VAR_12[0]; VAR_12 += 2; VAR_13 -= 2;
  }else{
    VAR_15 = 0xfd;
  }


  if( FUNC_7() ) return 0;
  VAR_16 = FUNC_10("fuzz.db", &VAR_18.db,
           VAR_7 | VAR_5 | VAR_6, 0);
  if( VAR_16 ) return 0;






  VAR_18.iLastCb = FUNC_13();
  VAR_18.iCutoffTime = VAR_18.iLastCb + 10000;

  FUNC_11(VAR_18.db, 10, VAR_11, (void*)&VAR_18);



  FUNC_8(VAR_18.db, VAR_4, 25000);




  FUNC_8(VAR_18.db, VAR_3, 50000);


  FUNC_4(VAR_18.db, VAR_2, VAR_15&1, &VAR_16);
  VAR_15 >>= 1;


  FUNC_12(VAR_18.db, VAR_8, 0);



  VAR_18.execCnt = VAR_15 + 1;



  VAR_17 = FUNC_9("%.*s", (int)VAR_13, VAR_12);

  FUNC_3(VAR_17);

  FUNC_5(VAR_18.db, VAR_17, VAR_9, (void*)&VAR_18, &VAR_14);


  if( (VAR_10 & VAR_0)!=0 && VAR_14 ){
    FUNC_1("Error: %s\n", VAR_14);
  }


  FUNC_6(VAR_14);
  FUNC_6(VAR_17);
  FUNC_5(VAR_18.db, "PRAGMA temp_store_directory=''", 0, 0, 0);
  FUNC_2(VAR_18.db);

  if( VAR_10 & VAR_1 ){
    FUNC_1("Progress callback count....... %d\n", VAR_18.nCb);
    FUNC_1("Max time between callbacks.... %d ms\n", (int)VAR_18.mxInterval);
  }
  return 0;
}
