
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3_vfs ;
struct TYPE_6__ {int * pMethods; } ;
typedef TYPE_1__ sqlite3_file ;
struct TYPE_7__ {TYPE_3__* pVFile; } ;
typedef TYPE_2__ VHandle ;
struct TYPE_8__ {int nRef; } ;
typedef TYPE_3__ VFile ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (char const*,int ) ;

__attribute__((used)) static int FUNC_1(
  sqlite3_vfs *VAR_3,
  const char *VAR_4,
  sqlite3_file *VAR_5,
  int VAR_6,
  int *VAR_7
){
  VFile *VAR_8 = FUNC_0(VAR_4, 0);
  VHandle *VAR_9 = (VHandle*)VAR_5;
  if( VAR_8==0 ){
    return VAR_0;
  }
  VAR_9->pVFile = VAR_8;
  VAR_8->nRef++;
  VAR_5->pMethods = &VAR_2;
  if( VAR_7 ) *VAR_7 = VAR_6;
  return VAR_1;
}
