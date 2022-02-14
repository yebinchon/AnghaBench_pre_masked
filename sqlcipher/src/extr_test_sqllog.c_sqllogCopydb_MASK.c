
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct SLConn {int fd; int db; } ;
typedef int sqlite3_backup ;
typedef int sqlite3 ;
struct TYPE_2__ {int bRec; int iClock; int zIdx; int zPrefix; int iNextDb; scalar_t__ bReuse; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,char*,int ,char*) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char*,int ,int ,int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int,char*) ;
 char* FUNC_12 (char*,...) ;
 int FUNC_13 (char*,int **) ;
 int FUNC_14 (int ,char const*,char*,char*) ;
 char* FUNC_15 (char*) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void FUNC_16(struct SLConn *VAR_3, const char *VAR_4, int VAR_5){
  char VAR_6[VAR_1];
  char VAR_7[VAR_1];
  char *VAR_8;
  char *VAR_9 = 0;
  int VAR_10;

  VAR_10 = FUNC_14(VAR_3->db, VAR_4, VAR_6, VAR_7);
  if( VAR_10!=VAR_0 ) return;

  if( VAR_7[0]=='\0' ){
    VAR_9 = FUNC_12("");
  }else{
    if( VAR_2.bReuse ){
      VAR_9 = FUNC_15(VAR_7);
    }else{
      VAR_9 = 0;
    }
    if( VAR_9==0 ){
      int VAR_11;
      sqlite3 *VAR_12 = 0;
      int VAR_13;


      VAR_13 = VAR_2.iNextDb++;
      VAR_9 = FUNC_12("%s_%02d.db", VAR_2.zPrefix, VAR_13);


      FUNC_0( VAR_2.bRec==0 );
      VAR_2.bRec = 1;
      VAR_11 = FUNC_13(VAR_9, &VAR_12);
      if( VAR_11==VAR_0 ){
        sqlite3_backup *VAR_14;
        FUNC_9(VAR_12, "PRAGMA synchronous = 0", 0, 0, 0);
        VAR_14 = FUNC_5(VAR_12, "main", VAR_3->db, VAR_6);
        if( VAR_14 ){
          FUNC_6(VAR_14, -1);
          VAR_11 = FUNC_4(VAR_14);
        }else{
          VAR_11 = FUNC_8(VAR_12);
        }
        FUNC_7(VAR_12);
      }
      VAR_2.bRec = 0;

      if( VAR_11==VAR_0 ){

        FILE *VAR_15 = FUNC_2(VAR_2.zIdx, "a");
        if( VAR_15 ){
          FUNC_3(*VAR_15, "%d %s\n", VAR_13, VAR_7);
          FUNC_1(VAR_15);
        }
      }else{
        FUNC_11(VAR_11, "sqllogCopydb(): error backing up database");
      }
    }
  }

  if( VAR_5 ){
    VAR_8 = FUNC_12("ATTACH '%q' AS '%q'; -- clock=%d\n",
        VAR_9, VAR_6, VAR_2.iClock++
    );
  }else{
    VAR_8 = FUNC_12("-- Main database is '%q'\n", VAR_9);
  }
  FUNC_3(VAR_3->fd, "%s", VAR_8);
  FUNC_10(VAR_8);

  FUNC_10(VAR_9);
}
