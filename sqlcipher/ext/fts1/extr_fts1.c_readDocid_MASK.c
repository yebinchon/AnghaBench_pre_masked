
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite_int64 ;
struct TYPE_6__ {int iLastPos; scalar_t__ iLastColumn; TYPE_1__* pDoclist; int p; } ;
struct TYPE_5__ {scalar_t__ iType; } ;
typedef TYPE_2__ DocListReader ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static sqlite_int64 FUNC_3(DocListReader *VAR_1){
  sqlite_int64 VAR_2;
  FUNC_0( !FUNC_1(VAR_1) );
  FUNC_0( VAR_1->iLastPos==-1 );
  VAR_1->p += FUNC_2(VAR_1->p, &VAR_2);
  if( VAR_1->pDoclist->iType>=VAR_0 ){
    VAR_1->iLastColumn = 0;
    VAR_1->iLastPos = 0;
  }
  return VAR_2;
}
