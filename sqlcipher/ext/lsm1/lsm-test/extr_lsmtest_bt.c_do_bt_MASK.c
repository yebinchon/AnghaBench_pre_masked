
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct Option TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_7__ {scalar_t__ p; } ;
struct TYPE_6__ {int eType; TYPE_3__ output; scalar_t__ pgno; } ;
typedef TYPE_1__ bt_info ;
typedef int bt_db ;
struct Option {char const* zName; int bPgno; int eOpt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,int ,TYPE_1__*) ;
 int FUNC_3 (int ,int ,int **) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_2__*,char*,char*,int*) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (char*,char*,char*) ;
 int FUNC_11 (char*) ;

int FUNC_12(int VAR_9, char **VAR_10){
  struct Option {
    const char *zName;
    int bPgno;
    int eOpt;
  } VAR_11 [] = {
    { "dbhdr", 0, VAR_3 },
    { "filename", 0, VAR_2 },
    { "block_freelist", 0, VAR_1 },
    { "page_freelist", 0, VAR_6 },
    { "filename", 0, VAR_2 },
    { "page", 1, VAR_4 },
    { "page_ascii", 1, VAR_5 },
    { "leaks", 0, VAR_7 },
    { 0, 0 }
  };
  int VAR_12;
  int VAR_13;
  bt_info VAR_14;
  char *VAR_15;
  char *VAR_16;

  bt_db *VAR_17 = 0;

  if( VAR_9<2 ){
    FUNC_11("FILENAME OPTION ...");
    return -1;
  }
  VAR_16 = VAR_10[0];
  VAR_15 = VAR_10[1];

  VAR_13 = FUNC_8(VAR_11, "option", VAR_15, &VAR_12);
  if( VAR_13!=0 ) return VAR_13;
  if( VAR_9!=2+VAR_11[VAR_12].bPgno ){
    FUNC_10("FILENAME %s %s", VAR_15, VAR_11[VAR_12].bPgno ? "PGNO" : "");
    return -4;
  }

  VAR_13 = FUNC_3(FUNC_7(), 0, &VAR_17);
  if( VAR_13!=VAR_8 ){
    FUNC_9("sqlite4BtNew() failed: %d", VAR_13);
    return -2;
  }
  VAR_13 = FUNC_4(VAR_17, VAR_16);
  if( VAR_13!=VAR_8 ){
    FUNC_9("sqlite4BtOpen() failed: %d", VAR_13);
    return -3;
  }

  VAR_14.eType = VAR_11[VAR_12].eOpt;
  VAR_14.pgno = 0;
  FUNC_6(&VAR_14.output, 0);

  if( VAR_11[VAR_12].bPgno ){
    VAR_14.pgno = (u32)FUNC_0(VAR_10[2]);
  }

  VAR_13 = FUNC_2(VAR_17, VAR_0, &VAR_14);
  if( VAR_13!=VAR_8 ){
    FUNC_9("sqlite4BtControl() failed: %d\n", VAR_13);
    return -4;
  }

  FUNC_1("%s\n", (char*)VAR_14.output.p);
  FUNC_5(&VAR_14.output);
  return 0;
}
