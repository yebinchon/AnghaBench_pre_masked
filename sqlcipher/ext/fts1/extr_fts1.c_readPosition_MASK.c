
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int iLastPos; int iLastColumn; int p; TYPE_1__* pDoclist; } ;
struct TYPE_5__ {int iType; } ;
typedef TYPE_2__ DocListReader ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ,int*) ;

__attribute__((used)) static int FUNC_3(DocListReader *VAR_5, int *VAR_6){
  int VAR_7;
  int VAR_8 = VAR_5->pDoclist->iType;

  if( VAR_5->iLastPos==-1 ){
    return -1;
  }
  FUNC_0( !FUNC_1(VAR_5) );

  if( VAR_8<VAR_0 ){
    return -1;
  }
  VAR_5->p += FUNC_2(VAR_5->p, &VAR_7);
  if( VAR_7==VAR_4 ){
    VAR_5->iLastColumn = VAR_5->iLastPos = -1;
    *VAR_6 = -1;
    return -1;
  }
  if( VAR_7==VAR_3 ){
    VAR_5->p += FUNC_2(VAR_5->p, &VAR_5->iLastColumn);
    VAR_5->iLastPos = 0;
    VAR_5->p += FUNC_2(VAR_5->p, &VAR_7);
    FUNC_0( VAR_7>=VAR_2 );
  }
  VAR_5->iLastPos += ((int) VAR_7)-VAR_2;
  if( VAR_8>=VAR_1 ){

    int VAR_9, VAR_10;
    VAR_5->p += FUNC_2(VAR_5->p, &VAR_9);
    VAR_5->p += FUNC_2(VAR_5->p, &VAR_10);
  }
  *VAR_6 = VAR_5->iLastColumn;
  return VAR_5->iLastPos;
}
