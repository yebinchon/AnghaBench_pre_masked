
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int i64 ;
typedef int i16 ;
struct TYPE_6__ {scalar_t__ memDb; scalar_t__ dbSize; int pageSize; scalar_t__ eState; char* pTmpSpace; int nReserve; int pPCache; int fd; } ;
typedef scalar_t__ Pgno ;
typedef TYPE_1__ Pager ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,int*) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,int) ;

int FUNC_11(Pager *VAR_4, u32 *VAR_5, int VAR_6){
  int VAR_7 = VAR_3;
  u32 VAR_8 = *VAR_5;
  FUNC_0( VAR_8==0 || (VAR_8>=512 && VAR_8<=VAR_1) );
  if( (VAR_4->memDb==0 || VAR_4->dbSize==0)
   && FUNC_9(VAR_4->pPCache)==0
   && VAR_8 && VAR_8!=(u32)VAR_4->pageSize
  ){
    char *VAR_9 = ((void*)0);
    i64 VAR_10 = 0;

    if( VAR_4->eState>VAR_0 && FUNC_1(VAR_4->fd) ){
      VAR_7 = FUNC_6(VAR_4->fd, &VAR_10);
    }
    if( VAR_7==VAR_3 ){


      VAR_9 = (char *)FUNC_8(VAR_8+8);
      if( !VAR_9 ){
        VAR_7 = VAR_2;
      }else{
        FUNC_2(VAR_9+VAR_8, 0, 8);
      }
    }

    if( VAR_7==VAR_3 ){
      FUNC_5(VAR_4);
      VAR_7 = FUNC_10(VAR_4->pPCache, VAR_8);
    }
    if( VAR_7==VAR_3 ){
      FUNC_7(VAR_4->pTmpSpace);
      VAR_4->pTmpSpace = VAR_9;
      VAR_4->dbSize = (Pgno)((VAR_10+VAR_8-1)/VAR_8);
      VAR_4->pageSize = VAR_8;
    }else{
      FUNC_7(VAR_9);
    }
  }

  *VAR_5 = VAR_4->pageSize;
  if( VAR_7==VAR_3 ){
    if( VAR_6<0 ) VAR_6 = VAR_4->nReserve;
    FUNC_0( VAR_6>=0 && VAR_6<1000 );
    VAR_4->nReserve = (i16)VAR_6;
    FUNC_4(VAR_4);
    FUNC_3(VAR_4);
  }
  return VAR_7;
}
