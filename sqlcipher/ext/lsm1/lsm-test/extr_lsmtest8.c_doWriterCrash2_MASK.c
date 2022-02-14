
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int TestDb ;
struct TYPE_7__ {int* aCksum; } ;
struct TYPE_6__ {int bWriter; TYPE_4__ hdr2; TYPE_4__ hdr1; } ;
typedef TYPE_1__ ShmHeader ;
typedef int Datasource ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int*) ;
 int FUNC_1 (TYPE_4__*,TYPE_4__*,int) ;
 int FUNC_2 (int *,int **) ;
 int FUNC_3 (char*,char*,int,int **) ;
 int FUNC_4 (int *,int,int*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int **) ;
 int FUNC_7 (int *,int ,int*) ;
 int FUNC_8 (TYPE_1__*) ;
 TYPE_1__* FUNC_9 (int) ;
 int FUNC_10 (char*,int ,void*,int,int*) ;
 int FUNC_11 (int *,int *,int,int,int*) ;
 int FUNC_12 (char*,int ,void*,int,int*) ;

__attribute__((used)) static void FUNC_13(int *VAR_1){
  int VAR_2 = 0;
  TestDb *VAR_3 = 0;
  Datasource *VAR_4 = 0;

  VAR_2 = FUNC_3("autowork=0", "testdb.lsm", 1, &VAR_3);
  if( VAR_2==0 ){
    ShmHeader *VAR_5;
    ShmHeader *VAR_6;
    char VAR_7[VAR_0];
    char VAR_8[VAR_0];

    VAR_5 = FUNC_9(sizeof(ShmHeader));
    VAR_6 = FUNC_9(sizeof(ShmHeader));
    FUNC_2(VAR_3, &VAR_4);


    FUNC_10("testdb.lsm-shm", 0, (void *)VAR_5, sizeof(ShmHeader), &VAR_2);
    FUNC_5(VAR_3, VAR_7);


    FUNC_4(VAR_3, 2, &VAR_2);
    FUNC_11(VAR_3, VAR_4, 30000, 200, &VAR_2);
    FUNC_7(VAR_3, 0, &VAR_2);


    FUNC_10("testdb.lsm-shm", 0, (void *)VAR_6, sizeof(ShmHeader), &VAR_2);
    FUNC_5(VAR_3, VAR_8);
    FUNC_0("testdb.lsm", VAR_8, &VAR_2);


    FUNC_1(&VAR_6->hdr1, &VAR_5->hdr1, sizeof(VAR_5->hdr1));
    VAR_6->bWriter = 1;
    FUNC_12("testdb.lsm-shm", 0, (void *)VAR_6, sizeof(ShmHeader), &VAR_2);
    FUNC_0("testdb.lsm", VAR_7, &VAR_2);


    FUNC_1(&VAR_6->hdr1, &VAR_6->hdr2, sizeof(VAR_5->hdr1));
    FUNC_1(&VAR_6->hdr2, &VAR_5->hdr1, sizeof(VAR_5->hdr1));
    VAR_6->bWriter = 1;
    FUNC_12("testdb.lsm-shm", 0, (void *)VAR_6, sizeof(ShmHeader), &VAR_2);
    FUNC_0("testdb.lsm", VAR_8, &VAR_2);


    FUNC_1(&VAR_6->hdr2, &VAR_6->hdr1, sizeof(VAR_5->hdr1));
    VAR_6->hdr1.aCksum[0] = 5;
    VAR_6->hdr1.aCksum[0] = 6;
    VAR_6->bWriter = 1;
    FUNC_12("testdb.lsm-shm", 0, (void *)VAR_6, sizeof(ShmHeader), &VAR_2);
    FUNC_0("testdb.lsm", VAR_8, &VAR_2);


    FUNC_1(&VAR_6->hdr1, &VAR_6->hdr2, sizeof(VAR_5->hdr1));
    VAR_6->hdr2.aCksum[0] = 5;
    VAR_6->hdr2.aCksum[0] = 6;
    VAR_6->bWriter = 1;
    FUNC_12("testdb.lsm-shm", 0, (void *)VAR_6, sizeof(ShmHeader), &VAR_2);
    FUNC_0("testdb.lsm", VAR_8, &VAR_2);

    FUNC_8(VAR_5);
    FUNC_8(VAR_6);
    FUNC_6(&VAR_3);
  }

  *VAR_1 = VAR_2;
}
