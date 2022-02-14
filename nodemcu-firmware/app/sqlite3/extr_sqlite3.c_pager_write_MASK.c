
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ eState; scalar_t__ errCode; scalar_t__ readOnly; scalar_t__ pInJournal; scalar_t__ dbOrigSize; scalar_t__ nSavepoint; scalar_t__ dbSize; int jfd; } ;
struct TYPE_12__ {scalar_t__ pgno; int flags; TYPE_2__* pPager; } ;
typedef TYPE_1__ PgHdr ;
typedef TYPE_2__ Pager ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_12(PgHdr *VAR_6){
  Pager *VAR_7 = VAR_6->pPager;
  int VAR_8 = VAR_5;





  FUNC_3( VAR_7->eState==VAR_2
       || VAR_7->eState==VAR_0
       || VAR_7->eState==VAR_1
  );
  FUNC_3( FUNC_4(VAR_7) );
  FUNC_3( VAR_7->errCode==0 );
  FUNC_3( VAR_7->readOnly==0 );
  FUNC_0(VAR_6);
  if( VAR_7->eState==VAR_2 ){
    VAR_8 = FUNC_8(VAR_7);
    if( VAR_8!=VAR_5 ) return VAR_8;
  }
  FUNC_3( VAR_7->eState>=VAR_0 );
  FUNC_3( FUNC_4(VAR_7) );


  FUNC_10(VAR_6);





  FUNC_3( (VAR_7->pInJournal!=0) == FUNC_5(VAR_7->jfd) );
  if( VAR_7->pInJournal!=0
   && FUNC_9(VAR_7->pInJournal, VAR_6->pgno)==0
  ){
    FUNC_3( FUNC_7(VAR_7)==0 );
    if( VAR_6->pgno<=VAR_7->dbOrigSize ){
      VAR_8 = FUNC_6(VAR_6);
      if( VAR_8!=VAR_5 ){
        return VAR_8;
      }
    }else{
      if( VAR_7->eState!=VAR_1 ){
        VAR_6->flags |= VAR_3;
      }
      FUNC_2(("APPEND %d page %d needSync=%d\n",
              FUNC_1(VAR_7), VAR_6->pgno,
             ((VAR_6->flags&VAR_3)?1:0)));
    }
  }






  VAR_6->flags |= VAR_4;




  if( VAR_7->nSavepoint>0 ){
    VAR_8 = FUNC_11(VAR_6);
  }


  if( VAR_7->dbSize<VAR_6->pgno ){
    VAR_7->dbSize = VAR_6->pgno;
  }
  return VAR_8;
}
