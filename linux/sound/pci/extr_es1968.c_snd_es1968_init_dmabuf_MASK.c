
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dev; int type; } ;
struct TYPE_7__ {int addr; int bytes; int area; TYPE_1__ dev; } ;
struct esm_memory {int empty; int list; TYPE_3__ buf; } ;
struct es1968 {int buf_list; TYPE_3__ dma; TYPE_2__* card; int total_bufsize; int pci; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,...) ;
 struct esm_memory* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (int ,int ,int ,TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct es1968*) ;

__attribute__((used)) static int
FUNC_9(struct es1968 *VAR_4)
{
 int VAR_5;
 struct esm_memory *VAR_6;

 VAR_4->dma.dev.type = VAR_3;
 VAR_4->dma.dev.dev = FUNC_7(VAR_4->pci);
 VAR_5 = FUNC_5(VAR_3,
        FUNC_7(VAR_4->pci),
        VAR_4->total_bufsize, &VAR_4->dma);
 if (VAR_5 < 0 || ! VAR_4->dma.area) {
  FUNC_1(VAR_4->card->dev,
   "can't allocate dma pages for size %d\n",
      VAR_4->total_bufsize);
  return -VAR_0;
 }
 if ((VAR_4->dma.addr + VAR_4->dma.bytes - 1) & ~((1 << 28) - 1)) {
  FUNC_6(&VAR_4->dma);
  FUNC_1(VAR_4->card->dev, "DMA buffer beyond 256MB.\n");
  return -VAR_0;
 }

 FUNC_0(&VAR_4->buf_list);

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_2);
 if (VAR_6 == ((void*)0)) {
  FUNC_8(VAR_4);
  return -VAR_0;
 }
 FUNC_4(VAR_4->dma.area, 0, VAR_1);
 VAR_6->buf = VAR_4->dma;
 VAR_6->buf.area += VAR_1;
 VAR_6->buf.addr += VAR_1;
 VAR_6->buf.bytes -= VAR_1;
 VAR_6->empty = 1;
 FUNC_3(&VAR_6->list, &VAR_4->buf_list);

 return 0;
}
