
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int startupInfo ;
typedef int processInfo ;
struct TYPE_8__ {int iTrace; scalar_t__ zVfs; scalar_t__ bSync; scalar_t__ bSqlTrace; int zDbFile; int argv0; int db; } ;
struct TYPE_7__ {int cb; int hProcess; int hThread; } ;
typedef TYPE_1__ STARTUPINFOA ;
typedef TYPE_1__ PROCESS_INFORMATION ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int *,int *,int ,int ,int *,int *,TYPE_1__*,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int) ;
 TYPE_4__ VAR_1 ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (char*,int) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char*,char*,...) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11(int VAR_2){
  FUNC_6("INSERT OR IGNORE INTO client VALUES(%d,0)", VAR_2);
  if( FUNC_7(VAR_1.db) ){
    char *VAR_3;
    int VAR_4;
    VAR_3 = FUNC_9("%s \"%s\" --client %d --trace %d",
                 VAR_1.argv0, VAR_1.zDbFile, VAR_2, VAR_1.iTrace);
    if( VAR_1.bSqlTrace ){
      VAR_3 = FUNC_9("%z --sqltrace", VAR_3);
    }
    if( VAR_1.bSync ){
      VAR_3 = FUNC_9("%z --sync", VAR_3);
    }
    if( VAR_1.zVfs ){
      VAR_3 = FUNC_9("%z --vfs \"%s\"", VAR_3, VAR_1.zVfs);
    }
    if( VAR_1.iTrace>=2 ) FUNC_4("system('%q')", VAR_3);

    VAR_3 = FUNC_9("%z &", VAR_3);
    VAR_4 = FUNC_10(VAR_3);
    if( VAR_4 ) FUNC_3("system() fails with error code %d", VAR_4);
    FUNC_8(VAR_3);
  }
}
