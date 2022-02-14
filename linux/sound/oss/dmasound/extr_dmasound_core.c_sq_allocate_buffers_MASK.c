
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sound_queue {int numBufs; int bufSize; int * buffers; } ;
struct TYPE_3__ {int (* dma_free ) (int ,int) ;int (* dma_alloc ) (int,int ) ;} ;
struct TYPE_4__ {TYPE_1__ mach; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int,int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct sound_queue *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;

 if (VAR_3->buffers)
  return 0;
 VAR_3->numBufs = VAR_4;
 VAR_3->bufSize = VAR_5;
 VAR_3->buffers = FUNC_1 (VAR_4, sizeof(char *), VAR_1);
 if (!VAR_3->buffers)
  return -VAR_0;
 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_3->buffers[VAR_6] = VAR_2.mach.dma_alloc(VAR_5, VAR_1);
  if (!VAR_3->buffers[VAR_6]) {
   while (VAR_6--)
    VAR_2.mach.dma_free(VAR_3->buffers[VAR_6], VAR_5);
   FUNC_0(VAR_3->buffers);
   VAR_3->buffers = ((void*)0);
   return -VAR_0;
  }
 }
 return 0;
}
