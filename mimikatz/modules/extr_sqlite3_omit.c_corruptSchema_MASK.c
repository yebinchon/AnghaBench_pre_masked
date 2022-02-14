
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; scalar_t__ mallocFailed; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_7__ {scalar_t__* pzErrMsg; int mInitFlags; void* rc; TYPE_1__* db; } ;
typedef TYPE_2__ InitData ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_1__*,char const*) ;
 char* FUNC_1 (TYPE_1__*,char*,char const*,...) ;

__attribute__((used)) static void FUNC_2(
  InitData *VAR_5,
  const char *VAR_6,
  const char *VAR_7
){
  sqlite3 *VAR_8 = VAR_5->db;
  if( VAR_8->mallocFailed ){
    VAR_5->rc = VAR_3;
  }else if( VAR_5->pzErrMsg[0]!=0 ){

  }else if( VAR_5->mInitFlags & VAR_0 ){
    *VAR_5->pzErrMsg = FUNC_0(VAR_8, VAR_7);
    VAR_5->rc = VAR_2;
  }else if( VAR_8->flags & VAR_4 ){
    VAR_5->rc = VAR_1;
  }else{
    char *VAR_9;
    if( VAR_6==0 ) VAR_6 = "?";
    VAR_9 = FUNC_1(VAR_8, "malformed database schema (%s)", VAR_6);
    if( VAR_7 && VAR_7[0] ) VAR_9 = FUNC_1(VAR_8, "%z - %s", VAR_9, VAR_7);
    *VAR_5->pzErrMsg = VAR_9;
    VAR_5->rc = VAR_1;
  }
}
