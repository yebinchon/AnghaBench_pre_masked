
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int shm_mq_handle ;
typedef int shm_mq ;
struct TYPE_3__ {int nworkers; int toc; int seg; } ;
typedef int Size ;
typedef TYPE_1__ ParallelContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int) ;
 int * FUNC_2 (int *,int ,int *) ;
 int * FUNC_3 (char*,int) ;
 int FUNC_4 (int *,int ) ;
 char* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,char*) ;
 char* FUNC_7 (int ,int ,int) ;

__attribute__((used)) static shm_mq_handle **
FUNC_8(ParallelContext *VAR_3, bool VAR_4)
{
 shm_mq_handle **VAR_5;
 char *VAR_6;
 int VAR_7;


 if (VAR_3->nworkers == 0)
  return ((void*)0);


 VAR_5 = (shm_mq_handle **)
  FUNC_1(VAR_3->nworkers * sizeof(shm_mq_handle *));





 if (!VAR_4)
  VAR_6 =
   FUNC_5(VAR_3->toc,
        FUNC_0(VAR_2,
           VAR_3->nworkers));
 else
  VAR_6 = FUNC_7(VAR_3->toc, VAR_1, 0);


 for (VAR_7 = 0; VAR_7 < VAR_3->nworkers; ++VAR_7)
 {
  shm_mq *VAR_8;

  VAR_8 = FUNC_3(VAR_6 +
         ((Size) VAR_7) * VAR_2,
         (Size) VAR_2);

  FUNC_4(VAR_8, VAR_0);
  VAR_5[VAR_7] = FUNC_2(VAR_8, VAR_3->seg, ((void*)0));
 }


 if (!VAR_4)
  FUNC_6(VAR_3->toc, VAR_1, VAR_6);


 return VAR_5;
}
