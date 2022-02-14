
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tid; int db; } ;
typedef TYPE_1__ WorkerInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char*,int) ;
 int FUNC_3 (TYPE_1__*,char*,...) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*,unsigned char const) ;
 int FUNC_7 (char*,int *,int,int ) ;
 int VAR_3 ;
 int FUNC_8 (TYPE_1__*,char*,char*) ;

__attribute__((used)) static void FUNC_9(WorkerInfo *VAR_4, int VAR_5){
  char *VAR_6;
  int VAR_7;
  int VAR_8;
  static const unsigned char VAR_9[6][3] = {
    { 1, 2, 3},
    { 1, 3, 2},
    { 2, 1, 3},
    { 2, 3, 1},
    { 3, 1, 2},
    { 3, 2, 1}
  };
  VAR_7 = (VAR_4->tid + VAR_5) % 6;
  VAR_6 = FUNC_6("tt4-test%d.db", VAR_9[VAR_7][0]);
  FUNC_0(VAR_6);
  FUNC_8(VAR_4, "open %s", VAR_6);
  VAR_8 = FUNC_7(VAR_6, &VAR_4->db,
                       VAR_1|VAR_2, 0);
  if( VAR_8!=VAR_0 ){
    FUNC_2(VAR_3, "sqlite_open_v2(%s) failed on thread %d\n",
            VAR_6, VAR_4->tid);
    FUNC_1(1);
  }
  FUNC_5(VAR_6);
  FUNC_3(VAR_4, "PRAGMA read_uncommitted=ON;");
  FUNC_4(VAR_4->db, 10000);
  FUNC_3(VAR_4, "PRAGMA synchronous=OFF;");
  FUNC_3(VAR_4, "ATTACH 'tt4-test%d.db' AS aux1", VAR_9[VAR_7][1]);
  FUNC_3(VAR_4, "ATTACH 'tt4-test%d.db' AS aux2", VAR_9[VAR_7][2]);
}
