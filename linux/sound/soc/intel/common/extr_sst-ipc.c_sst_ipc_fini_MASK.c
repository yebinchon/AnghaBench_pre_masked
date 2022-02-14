
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sst_generic_ipc {TYPE_3__* msg; int kwork; } ;
struct TYPE_5__ {TYPE_3__* data; } ;
struct TYPE_4__ {TYPE_3__* data; } ;
struct TYPE_6__ {TYPE_2__ rx; TYPE_1__ tx; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*) ;

void FUNC_2(struct sst_generic_ipc *VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_1->kwork);

 if (VAR_1->msg) {
  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
   FUNC_1(VAR_1->msg[VAR_2].tx.data);
   FUNC_1(VAR_1->msg[VAR_2].rx.data);
  }
  FUNC_1(VAR_1->msg);
 }
}
