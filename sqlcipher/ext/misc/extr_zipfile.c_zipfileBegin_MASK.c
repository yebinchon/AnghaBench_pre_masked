
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_vtab ;
typedef scalar_t__ i64 ;
struct TYPE_5__ {int zErrMsg; } ;
struct TYPE_6__ {scalar_t__ pWriteFd; scalar_t__ szOrig; scalar_t__ szCurrent; int zFile; TYPE_1__ base; } ;
typedef TYPE_2__ ZipfileTab ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static int FUNC_7(sqlite3_vtab *VAR_3){
  ZipfileTab *VAR_4 = (ZipfileTab*)VAR_3;
  int VAR_5 = VAR_2;

  FUNC_0( VAR_4->pWriteFd==0 );





  VAR_4->pWriteFd = FUNC_1(VAR_4->zFile, "ab+");
  if( VAR_4->pWriteFd==0 ){
    VAR_4->base.zErrMsg = FUNC_4(
        "zipfile: failed to open file %s for writing", VAR_4->zFile
        );
    VAR_5 = VAR_1;
  }else{
    FUNC_2(VAR_4->pWriteFd, 0, VAR_0);
    VAR_4->szCurrent = VAR_4->szOrig = (i64)FUNC_3(VAR_4->pWriteFd);
    VAR_5 = FUNC_6(VAR_4, 0, 0);
  }

  if( VAR_5!=VAR_2 ){
    FUNC_5(VAR_4);
  }

  return VAR_5;
}
