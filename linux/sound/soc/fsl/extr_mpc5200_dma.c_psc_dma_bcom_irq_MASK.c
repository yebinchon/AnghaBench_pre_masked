
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct psc_dma_stream {int period_current; int stream; scalar_t__ active; TYPE_2__* psc_dma; int period_count; TYPE_1__* runtime; int bcom_task; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int lock; } ;
struct TYPE_3__ {int periods; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (struct psc_dma_stream*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_1, void *VAR_2)
{
 struct psc_dma_stream *VAR_3 = VAR_2;

 FUNC_4(&VAR_3->psc_dma->lock);


 while (FUNC_0(VAR_3->bcom_task)) {
  FUNC_1(VAR_3->bcom_task, ((void*)0), ((void*)0));

  VAR_3->period_current = (VAR_3->period_current+1) % VAR_3->runtime->periods;
  VAR_3->period_count++;

  FUNC_2(VAR_3);
 }
 FUNC_5(&VAR_3->psc_dma->lock);



 if (VAR_3->active)
  FUNC_3(VAR_3->stream);

 return VAR_0;
}
