
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psc_dma_stream {int period_bytes; int period_next; TYPE_1__* runtime; int bcom_task; } ;
struct bcom_bd {int status; scalar_t__* data; } ;
struct TYPE_2__ {int periods; scalar_t__ dma_addr; } ;


 struct bcom_bd* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct psc_dma_stream *VAR_0)
{
 struct bcom_bd *VAR_1;


 VAR_1 = FUNC_0(VAR_0->bcom_task);
 VAR_1->status = VAR_0->period_bytes;
 VAR_1->data[0] = VAR_0->runtime->dma_addr + (VAR_0->period_next * VAR_0->period_bytes);
 FUNC_1(VAR_0->bcom_task, ((void*)0));


 VAR_0->period_next = (VAR_0->period_next + 1) % VAR_0->runtime->periods;
}
