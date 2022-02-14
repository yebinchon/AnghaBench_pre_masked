
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int TestDb ;
struct TYPE_5__ {int nWorker; TYPE_1__* aWorker; int db; } ;
struct TYPE_4__ {int pWorker; } ;
typedef TYPE_2__ LsmDb ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int ,int,char const*,int ) ;

int FUNC_2(TestDb *VAR_0, const char *VAR_1){
  int VAR_2 = 0;
  if( FUNC_0(VAR_0) ){



    LsmDb *VAR_3 = (LsmDb *)VAR_0;

    VAR_2 = FUNC_1(VAR_3, VAR_3->db, 0, VAR_1, 0);





  }
  return VAR_2;
}
