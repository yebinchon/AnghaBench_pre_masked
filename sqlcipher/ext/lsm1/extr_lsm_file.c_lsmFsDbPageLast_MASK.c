
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ pCompress; } ;
struct TYPE_9__ {int iLastPg; } ;
typedef TYPE_1__ Segment ;
typedef int Page ;
typedef int LsmPgno ;
typedef TYPE_2__ FileSystem ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*,int ,int *) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int ,int ,int **,int*) ;

int FUNC_2(FileSystem *VAR_1, Segment *VAR_2, Page **VAR_3){
  int VAR_4;
  LsmPgno VAR_5 = VAR_2->iLastPg;
  if( VAR_1->pCompress ){
    int VAR_6;
    VAR_5++;
    do {
      VAR_6 = 0;
      VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_5, &VAR_5);
      if( VAR_4==VAR_0 ){
        VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_5, 0, VAR_3, &VAR_6);
      }
    }while( VAR_4==VAR_0 && VAR_6>0 );

  }else{
    VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_5, 0, VAR_3, 0);
  }
  return VAR_4;
}
