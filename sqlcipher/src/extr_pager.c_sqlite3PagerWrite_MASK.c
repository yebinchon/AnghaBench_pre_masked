
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_9__ {scalar_t__ eState; scalar_t__ dbSize; int errCode; scalar_t__ sectorSize; scalar_t__ tempFile; scalar_t__ pageSize; scalar_t__ nSavepoint; } ;
struct TYPE_8__ {int flags; scalar_t__ pgno; TYPE_2__* pPager; } ;
typedef TYPE_1__ PgHdr ;
typedef TYPE_2__ Pager ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5(PgHdr *VAR_4){
  Pager *VAR_5 = VAR_4->pPager;
  FUNC_0( (VAR_4->flags & VAR_1)==0 );
  FUNC_0( VAR_5->eState>=VAR_0 );
  FUNC_0( FUNC_1(VAR_5) );
  if( (VAR_4->flags & VAR_2)!=0 && VAR_5->dbSize>=VAR_4->pgno ){
    if( VAR_5->nSavepoint ) return FUNC_4(VAR_4);
    return VAR_3;
  }else if( VAR_5->errCode ){
    return VAR_5->errCode;
  }else if( VAR_5->sectorSize > (u32)VAR_5->pageSize ){
    FUNC_0( VAR_5->tempFile==0 );
    return FUNC_2(VAR_4);
  }else{
    return FUNC_3(VAR_4);
  }
}
