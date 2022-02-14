
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int pDb; } ;
struct TYPE_9__ {scalar_t__ iLastPg; scalar_t__ pRedirect; int nSize; } ;
typedef TYPE_1__ Segment ;
typedef scalar_t__ LsmPgno ;
typedef TYPE_2__ FileSystem ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ,int,int*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*,scalar_t__) ;
 int FUNC_4 (TYPE_2__*,scalar_t__) ;
 int FUNC_5 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_6(
  FileSystem *VAR_1,
  Segment *VAR_2,
  LsmPgno *VAR_3,
  int *VAR_4,
  int *VAR_5
){
  LsmPgno VAR_6 = VAR_2->iLastPg;
  int VAR_7;
  FUNC_0( VAR_6!=0 );

  *VAR_4 = 0;
  *VAR_5 = 0;

  if( FUNC_3(VAR_1, VAR_6) ){




    int VAR_8;
    int VAR_9 = FUNC_4(VAR_1, VAR_6);
    FUNC_0( VAR_2->pRedirect==0 );
    VAR_7 = FUNC_1(VAR_1, 0, VAR_9, &VAR_8);
    if( VAR_7!=VAR_0 ) return VAR_7;
    *VAR_3 = FUNC_2(VAR_1, VAR_8);
    *VAR_4 = VAR_9;
  }else{
    *VAR_3 = VAR_6+1;
    if( FUNC_3(VAR_1, *VAR_3) ){

      int VAR_10;
      VAR_7 = FUNC_5(VAR_1->pDb, 0, &VAR_10);
      if( VAR_7!=VAR_0 ) return VAR_7;
      *VAR_5 = VAR_10;
    }
  }

  VAR_2->nSize++;
  VAR_2->iLastPg = *VAR_3;
  return VAR_0;
}
