
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int nworkers; } ;
typedef TYPE_1__ worker_state ;
struct TYPE_7__ {int workers_ready; int mutex; } ;
typedef TYPE_2__ test_shm_mq_header ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int,int ,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void
FUNC_9(worker_state *VAR_6,
         volatile test_shm_mq_header *VAR_7)
{
 bool VAR_8 = 0;

 for (;;)
 {
  int VAR_9;


  FUNC_2(&VAR_7->mutex);
  VAR_9 = VAR_7->workers_ready;
  FUNC_3(&VAR_7->mutex);
  if (VAR_9 >= VAR_6->nworkers)
  {
   VAR_8 = 1;
   break;
  }


  if (!FUNC_5(VAR_6))
  {
   VAR_8 = 0;
   break;
  }


  (void) FUNC_4(VAR_2, VAR_5 | VAR_4, 0,
       VAR_3);


  FUNC_1(VAR_2);


  FUNC_0();
 }

 if (!VAR_8)
  FUNC_6(VAR_1,
    (FUNC_7(VAR_0),
     FUNC_8("one or more background workers failed to start")));
}
