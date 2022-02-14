
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct dirent {char* d_name; } ;
typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_int64 ;
typedef int mode_t ;
struct TYPE_9__ {int st_mode; } ;
struct TYPE_7__ {int iLvl; int nLvl; scalar_t__ zPath; TYPE_6__ sStat; TYPE_2__* aLvl; int iRowid; } ;
typedef TYPE_1__ fsdir_cursor ;
struct TYPE_8__ {scalar_t__ pDir; scalar_t__ zDir; } ;
typedef TYPE_2__ FsdirLevel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,TYPE_6__*) ;
 int FUNC_3 (TYPE_1__*,char*,scalar_t__) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 struct dirent* FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (char*,scalar_t__,char*) ;
 scalar_t__ FUNC_9 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_10(sqlite3_vtab_cursor *VAR_3){
  fsdir_cursor *VAR_4 = (fsdir_cursor*)VAR_3;
  mode_t VAR_5 = VAR_4->sStat.st_mode;

  VAR_4->iRowid++;
  if( FUNC_0(VAR_5) ){

    int VAR_6 = VAR_4->iLvl + 1;
    FsdirLevel *VAR_7;
    if( VAR_6>=VAR_4->nLvl ){
      int VAR_8 = VAR_6+1;
      sqlite3_int64 VAR_9 = VAR_8*sizeof(FsdirLevel);
      FsdirLevel *VAR_10 = (FsdirLevel*)FUNC_9(VAR_4->aLvl, VAR_9);
      if( VAR_10==0 ) return VAR_1;
      FUNC_4(&VAR_10[VAR_4->nLvl], 0, sizeof(FsdirLevel)*(VAR_8-VAR_4->nLvl));
      VAR_4->aLvl = VAR_10;
      VAR_4->nLvl = VAR_8;
    }
    VAR_4->iLvl = VAR_6;
    VAR_7 = &VAR_4->aLvl[VAR_6];

    VAR_7->zDir = VAR_4->zPath;
    VAR_4->zPath = 0;
    VAR_7->pDir = FUNC_5(VAR_7->zDir);
    if( VAR_7->pDir==0 ){
      FUNC_3(VAR_4, "cannot read directory: %s", VAR_4->zPath);
      return VAR_0;
    }
  }

  while( VAR_4->iLvl>=0 ){
    FsdirLevel *VAR_11 = &VAR_4->aLvl[VAR_4->iLvl];
    struct dirent *VAR_12 = FUNC_6(VAR_11->pDir);
    if( VAR_12 ){
      if( VAR_12->d_name[0]=='.' ){
       if( VAR_12->d_name[1]=='.' && VAR_12->d_name[2]=='\0' ) continue;
       if( VAR_12->d_name[1]=='\0' ) continue;
      }
      FUNC_7(VAR_4->zPath);
      VAR_4->zPath = FUNC_8("%s/%s", VAR_11->zDir, VAR_12->d_name);
      if( VAR_4->zPath==0 ) return VAR_1;
      if( FUNC_2(VAR_4->zPath, &VAR_4->sStat) ){
        FUNC_3(VAR_4, "cannot stat file: %s", VAR_4->zPath);
        return VAR_0;
      }
      return VAR_2;
    }
    FUNC_1(VAR_11->pDir);
    FUNC_7(VAR_11->zDir);
    VAR_11->pDir = 0;
    VAR_11->zDir = 0;
    VAR_4->iLvl--;
  }


  FUNC_7(VAR_4->zPath);
  VAR_4->zPath = 0;
  return VAR_2;
}
