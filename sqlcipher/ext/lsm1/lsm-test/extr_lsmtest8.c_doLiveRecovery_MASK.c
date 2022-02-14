
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int lsm_db ;
typedef int TestDb ;
struct TYPE_7__ {int member_1; int member_2; int member_3; int member_4; int member_0; } ;
struct TYPE_6__ {int hdr2; int hdr1; } ;
typedef TYPE_1__ ShmHeader ;
typedef TYPE_2__ DatasourceDefn ;
typedef int Datasource ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (char const*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int*) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int *,int *,int) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (char*,char const*,int ,int **) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int **) ;
 int FUNC_10 (char const*,char*,int*) ;
 int FUNC_11 (char const*,char const*) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (TYPE_2__ const*) ;
 int FUNC_14 (int *,int *,int,int,int*) ;
 int FUNC_15 (char const*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (int *,int *,int,int,int*) ;

__attribute__((used)) static void FUNC_18(const char *VAR_4, const char *VAR_5, int *VAR_6){
  if( *VAR_6==VAR_1 ){
    const DatasourceDefn VAR_7 = {VAR_3, 20, 25, 100, 500};
    Datasource *VAR_8;
    const char *VAR_9 = "testcopy.lsm";
    char VAR_10[VAR_2];
    TestDb *VAR_11 = 0;
    int VAR_12;

    VAR_8 = FUNC_13(&VAR_7);

    FUNC_11(VAR_4, VAR_9);
    VAR_12 = FUNC_7("test_no_recovery=1", VAR_9, 0, &VAR_11);
    if( VAR_12==0 ){
      ShmHeader *VAR_13;
      lsm_db *VAR_14;
      FUNC_8(VAR_11, VAR_10);
      FUNC_10(VAR_5, VAR_10, &VAR_12);

      FUNC_17(VAR_11, VAR_8, 1, 10, &VAR_12);
      FUNC_14(VAR_11, VAR_8, 1, 10, &VAR_12);


      VAR_13 = FUNC_0(VAR_9);
      if( VAR_12==0 && FUNC_5(&VAR_13->hdr1, &VAR_13->hdr2, sizeof(VAR_13->hdr1)) ){
        VAR_12 = 1;
      }
      FUNC_16(VAR_13);

      if( VAR_12==0 ){
        int VAR_15 = 64;
        VAR_14 = FUNC_6(VAR_11);
        FUNC_3(VAR_14, VAR_0, &VAR_15);
        FUNC_1(VAR_14, 1);
        FUNC_2(VAR_14, 0);
        VAR_12 = FUNC_4(VAR_14, 0, 0, 0);
      }

      FUNC_8(VAR_11, VAR_10);
      FUNC_10(VAR_5, VAR_10, &VAR_12);
    }

    FUNC_12(VAR_8);
    FUNC_9(&VAR_11);
    FUNC_15(VAR_9);
    *VAR_6 = VAR_12;
  }
}
