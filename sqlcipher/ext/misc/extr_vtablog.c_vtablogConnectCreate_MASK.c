
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nRow; int iInst; } ;
typedef TYPE_1__ vtablog_vtab ;
typedef int sqlite3_vtab ;
typedef int sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *,char*) ;
 TYPE_1__* FUNC_4 (int) ;
 char* FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char**,char*,char const*,char**) ;

__attribute__((used)) static int FUNC_7(
  sqlite3 *VAR_3,
  void *VAR_4,
  int VAR_5, const char *const*VAR_6,
  sqlite3_vtab **VAR_7,
  char **VAR_8,
  int VAR_9
){
  static int VAR_10 = 0;
  vtablog_vtab *VAR_11;
  int VAR_12;
  int VAR_13;
  int VAR_14 = ++VAR_10;
  char *VAR_15 = 0;
  char *VAR_16 = 0;

  FUNC_2("vtablog%s(tab=%d):\n", VAR_9 ? "Create" : "Connect", VAR_14);
  FUNC_2("  argc=%d\n", VAR_5);
  for(VAR_12=0; VAR_12<VAR_5; VAR_12++){
    FUNC_2("  argv[%d] = ", VAR_12);
    if( VAR_6[VAR_12] ){
      FUNC_2("[%s]\n", VAR_6[VAR_12]);
    }else{
      FUNC_2("NULL\n");
    }
  }

  for(VAR_12=3; VAR_12<VAR_5; VAR_12++){
    const char *VAR_17 = VAR_6[VAR_12];
    if( FUNC_6(VAR_8, "schema", VAR_17, &VAR_15) ){
      return VAR_0;
    }
    if( FUNC_6(VAR_8, "rows", VAR_17, &VAR_16) ){
      return VAR_0;
    }
  }

  if( VAR_15==0 ){
    *VAR_8 = FUNC_5("no schema defined");
    return VAR_0;
  }
  VAR_13 = FUNC_3(VAR_3, VAR_15);
  if( VAR_13==VAR_2 ){
    VAR_11 = FUNC_4( sizeof(*VAR_11) );
    *VAR_7 = (sqlite3_vtab*)VAR_11;
    if( VAR_11==0 ) return VAR_1;
    FUNC_1(VAR_11, 0, sizeof(*VAR_11));
    VAR_11->nRow = 10;
    if( VAR_16 ) VAR_11->nRow = FUNC_0(VAR_16);
    VAR_11->iInst = VAR_14;
  }
  return VAR_13;
}
