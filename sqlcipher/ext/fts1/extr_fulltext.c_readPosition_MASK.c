
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int iLastPos; int p; TYPE_1__* pDoclist; } ;
struct TYPE_5__ {int iType; } ;
typedef TYPE_2__ DocListReader ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(DocListReader *VAR_2){
  int VAR_3;
  int VAR_4 = VAR_2->pDoclist->iType;
  FUNC_0( VAR_4>=VAR_0 );
  FUNC_0( !FUNC_2(VAR_2) );

  VAR_2->p += FUNC_1(VAR_2->p, &VAR_3);
  if( VAR_3==0 ){
    VAR_2->iLastPos = -1;
    return -1;
  }
  VAR_2->iLastPos += ((int) VAR_3)-1;
  if( VAR_4>=VAR_1 ){

    int VAR_5, VAR_6;
    VAR_2->p += FUNC_1(VAR_2->p, &VAR_5);
    VAR_2->p += FUNC_1(VAR_2->p, &VAR_6);
  }
  return VAR_2->iLastPos;
}
