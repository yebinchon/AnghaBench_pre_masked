
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int iLastPg; int iFirst; int * pRedirect; } ;
typedef TYPE_1__ Segment ;
typedef int Redirect ;
typedef int LsmPgno ;
typedef int FileSystem ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*,int,int*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;

int FUNC_3(
  FileSystem *VAR_1,
  Segment *VAR_2,
  LsmPgno VAR_3,
  int *VAR_4
){
  Redirect *VAR_5 = VAR_2->pRedirect;
  int VAR_6 = VAR_0;
  int VAR_7;
  int VAR_8;
  int VAR_9;

  VAR_9 = FUNC_1(VAR_1, VAR_2->iFirst);
  VAR_7 = FUNC_2(VAR_5, FUNC_1(VAR_1, VAR_2->iFirst));
  VAR_8 = FUNC_2(VAR_5, FUNC_1(VAR_1, VAR_2->iLastPg));

  while( VAR_7!=VAR_8 && VAR_7!=VAR_9 && VAR_6==VAR_0 ){
    VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_7, &VAR_7);
  }

  *VAR_4 = (VAR_7==VAR_9);
  return VAR_6;
}
