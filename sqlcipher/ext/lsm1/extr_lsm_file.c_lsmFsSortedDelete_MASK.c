
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ iFirst; scalar_t__ iLastPg; TYPE_1__* pRedirect; } ;
struct TYPE_10__ {scalar_t__ n; } ;
struct TYPE_11__ {TYPE_1__ redirect; } ;
typedef TYPE_2__ Snapshot ;
typedef TYPE_3__ Segment ;
typedef int FileSystem ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_3__*,int,int*) ;
 int FUNC_2 (int *,TYPE_2__*,TYPE_3__*,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (TYPE_3__*,int ,int) ;

int FUNC_6(
  FileSystem *VAR_1,
  Snapshot *VAR_2,
  int VAR_3,
  Segment *VAR_4
){
  if( VAR_4->iFirst ){
    int VAR_5 = VAR_0;

    int VAR_6;
    int VAR_7;

    VAR_6 = FUNC_4(VAR_1, VAR_4->iFirst);
    VAR_7 = FUNC_4(VAR_1, VAR_4->iLastPg);


    while( VAR_6 && VAR_5==VAR_0 ){
      int VAR_8 = 0;
      if( VAR_6!=VAR_7 ){
        VAR_5 = FUNC_1(VAR_1, VAR_4, VAR_6, &VAR_8);
      }else if( VAR_3==0 && VAR_4->iLastPg!=FUNC_3(VAR_1, VAR_7) ){
        break;
      }
      VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_4, VAR_6);
      VAR_6 = VAR_8;
    }

    if( VAR_4->pRedirect ){
      FUNC_0( VAR_4->pRedirect==&VAR_2->redirect );
      VAR_2->redirect.n = 0;
    }

    if( VAR_3 ) FUNC_5(VAR_4, 0, sizeof(Segment));
  }
  return VAR_0;
}
