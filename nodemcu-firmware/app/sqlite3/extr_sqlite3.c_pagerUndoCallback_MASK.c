
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_12__ {int pBackup; int (* xReiniter ) (TYPE_1__*) ;int pWal; } ;
struct TYPE_11__ {int pgno; } ;
typedef int Pgno ;
typedef TYPE_1__ PgHdr ;
typedef TYPE_2__ Pager ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,int ,int *) ;
 int FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_10(void *VAR_1, Pgno VAR_2){
  int VAR_3 = VAR_0;
  Pager *VAR_4 = (Pager *)VAR_1;
  PgHdr *VAR_5;

  FUNC_0( FUNC_1(VAR_4) );
  VAR_5 = FUNC_4(VAR_4, VAR_2);
  if( VAR_5 ){
    if( FUNC_7(VAR_5)==1 ){
      FUNC_6(VAR_5);
    }else{
      u32 VAR_6 = 0;
      VAR_3 = FUNC_8(VAR_4->pWal, VAR_5->pgno, &VAR_6);
      if( VAR_3==VAR_0 ){
        VAR_3 = FUNC_2(VAR_5, VAR_6);
      }
      if( VAR_3==VAR_0 ){
        VAR_4->xReiniter(VAR_5);
      }
      FUNC_5(VAR_5);
    }
  }
  FUNC_3(VAR_4->pBackup);

  return VAR_3;
}
