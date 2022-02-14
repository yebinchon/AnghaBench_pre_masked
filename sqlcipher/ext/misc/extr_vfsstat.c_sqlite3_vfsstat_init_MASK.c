
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_api_routines ;
typedef int sqlite3 ;
typedef int VStatFile ;
struct TYPE_6__ {scalar_t__ szOsFile; } ;
struct TYPE_5__ {scalar_t__ szOsFile; } ;
struct TYPE_4__ {TYPE_2__ base; TYPE_3__* pVfs; } ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int (*) (int *,char**,int const*)) ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int *,char**,int const*) ;
 TYPE_1__ VAR_2 ;

int FUNC_5(
  sqlite3 *VAR_3,
  char **VAR_4,
  const sqlite3_api_routines *VAR_5
){
  int VAR_6 = VAR_0;
  FUNC_0(VAR_5);
  VAR_2.pVfs = FUNC_2(0);
  VAR_2.base.szOsFile = sizeof(VStatFile) + VAR_2.pVfs->szOsFile;
  VAR_6 = FUNC_3(&VAR_2.base, 1);
  if( VAR_6==VAR_0 ){
    VAR_6 = FUNC_4(VAR_3, VAR_4, VAR_5);
    if( VAR_6==VAR_0 ){
      VAR_6 = FUNC_1(FUNC_4);
    }
  }
  if( VAR_6==VAR_0 ) VAR_6 = VAR_1;
  return VAR_6;
}
