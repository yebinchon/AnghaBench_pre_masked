
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sound_queue {int numBufs; int * buffers; int bufSize; } ;
struct TYPE_3__ {int (* dma_free ) (int ,int ) ;} ;
struct TYPE_4__ {TYPE_1__ mach; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct sound_queue *VAR_1)
{
 int VAR_2;

 if (VAR_1->buffers) {
  for (VAR_2 = 0; VAR_2 < VAR_1->numBufs; VAR_2++)
   VAR_0.mach.dma_free(VAR_1->buffers[VAR_2], VAR_1->bufSize);
  FUNC_0(VAR_1->buffers);
  VAR_1->buffers = ((void*)0);
 }
}
