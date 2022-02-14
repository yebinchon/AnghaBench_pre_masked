
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ pWal; scalar_t__ tempFile; scalar_t__ eLock; int journalSizeLimit; scalar_t__ exclusiveMode; int zWal; int fd; int pVfs; } ;
typedef TYPE_1__ Pager ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ,int ,scalar_t__,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_4(Pager *VAR_3){
  int VAR_4 = VAR_2;

  FUNC_0( VAR_3->pWal==0 && VAR_3->tempFile==0 );
  FUNC_0( VAR_3->eLock==VAR_1 || VAR_3->eLock==VAR_0 );






  if( VAR_3->exclusiveMode ){
    VAR_4 = FUNC_1(VAR_3);
  }




  if( VAR_4==VAR_2 ){
    VAR_4 = FUNC_3(VAR_3->pVfs,
        VAR_3->fd, VAR_3->zWal, VAR_3->exclusiveMode,
        VAR_3->journalSizeLimit, &VAR_3->pWal
    );
  }
  FUNC_2(VAR_3);

  return VAR_4;
}
