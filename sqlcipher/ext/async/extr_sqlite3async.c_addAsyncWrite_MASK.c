
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int pQueueFirst; int nFile; TYPE_2__* pQueueLast; } ;
struct TYPE_6__ {size_t op; int iOffset; TYPE_1__* pFileData; struct TYPE_6__* pNext; } ;
struct TYPE_5__ {char* zName; } ;
typedef TYPE_2__ AsyncWrite ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 size_t VAR_3 ;
 int FUNC_1 (int) ;
 TYPE_3__ VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int * VAR_5 ;

__attribute__((used)) static void FUNC_5(AsyncWrite *VAR_6){

  if( VAR_6->op!=VAR_3 ){
    FUNC_3(VAR_2);
  }


  FUNC_1( !VAR_6->pNext );
  if( VAR_4.pQueueLast ){
    FUNC_1( VAR_4.pQueueFirst );
    VAR_4.pQueueLast->pNext = VAR_6;
  }else{
    VAR_4.pQueueFirst = VAR_6;
  }
  VAR_4.pQueueLast = VAR_6;
  FUNC_0(("PUSH %p (%s %s %d)\n", VAR_6, VAR_5[VAR_6->op],
         VAR_6->pFileData ? VAR_6->pFileData->zName : "-", VAR_6->iOffset));

  if( VAR_6->op==VAR_0 ){
    VAR_4.nFile--;
  }



  FUNC_2(VAR_1);


  if( VAR_6->op!=VAR_3 ){
    FUNC_4(VAR_2);
  }
}
