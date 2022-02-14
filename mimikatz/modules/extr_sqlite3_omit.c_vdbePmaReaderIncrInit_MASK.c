
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ bUseThread; int pTask; } ;
struct TYPE_5__ {TYPE_2__* pIncr; } ;
typedef TYPE_1__ PmaReader ;
typedef TYPE_2__ IncrMerger ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ,int ,void*) ;

__attribute__((used)) static int FUNC_3(PmaReader *VAR_3, int VAR_4){
  IncrMerger *VAR_5 = VAR_3->pIncr;
  int VAR_6 = VAR_1;
  if( VAR_5 ){







    {
      VAR_6 = FUNC_1(VAR_3, VAR_4);
    }
  }
  return VAR_6;
}
