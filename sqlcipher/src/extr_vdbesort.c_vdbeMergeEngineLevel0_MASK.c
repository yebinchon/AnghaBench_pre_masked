
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_12__ {TYPE_2__* aReadr; } ;
struct TYPE_11__ {int iEof; } ;
struct TYPE_10__ {int file; } ;
typedef TYPE_1__ SortSubtask ;
typedef TYPE_2__ PmaReader ;
typedef TYPE_3__ MergeEngine ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 TYPE_3__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int *,int ,TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_3(
  SortSubtask *VAR_2,
  int VAR_3,
  i64 *VAR_4,
  MergeEngine **VAR_5
){
  MergeEngine *VAR_6;
  i64 VAR_7 = *VAR_4;
  int VAR_8;
  int VAR_9 = VAR_1;

  *VAR_5 = VAR_6 = FUNC_1(VAR_3);
  if( VAR_6==0 ) VAR_9 = VAR_0;

  for(VAR_8=0; VAR_8<VAR_3 && VAR_9==VAR_1; VAR_8++){
    i64 VAR_10 = 0;
    PmaReader *VAR_11 = &VAR_6->aReadr[VAR_8];
    VAR_9 = FUNC_2(VAR_2, &VAR_2->file, VAR_7, VAR_11, &VAR_10);
    VAR_7 = VAR_11->iEof;
  }

  if( VAR_9!=VAR_1 ){
    FUNC_0(VAR_6);
    *VAR_5 = 0;
  }
  *VAR_4 = VAR_7;
  return VAR_9;
}
