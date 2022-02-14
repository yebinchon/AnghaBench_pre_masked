
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int band; int stop; int num; int bit; int pix; int cookie; int tbounds; int ctm; int list; int ctx; int start; } ;
typedef TYPE_1__ worker_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int ,int ,int ,int *,int,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_1)
{
 worker_t *VAR_2 = (worker_t *)VAR_1;

 do
 {
  FUNC_0(("Worker %d waiting\n", VAR_2->num));
  FUNC_3(&VAR_2->start);
  FUNC_0(("Worker %d woken for band %d\n", VAR_2->num, VAR_2->band));
  if (VAR_2->band >= 0)
   FUNC_1(VAR_2->ctx, ((void*)0), VAR_2->list, VAR_2->ctm, VAR_2->tbounds, &VAR_2->cookie, VAR_2->band * VAR_0, VAR_2->pix, &VAR_2->bit);
  FUNC_0(("Worker %d completed band %d\n", VAR_2->num, VAR_2->band));
  FUNC_2(&VAR_2->stop);
 }
 while (VAR_2->band >= 0);
}
