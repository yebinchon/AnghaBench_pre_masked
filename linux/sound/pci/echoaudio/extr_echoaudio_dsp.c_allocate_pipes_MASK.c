
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct echoaudio {int pipe_alloc_mask; int pipe_cyclic_mask; TYPE_2__* comm_page; TYPE_1__* card; scalar_t__ bad_board; } ;
struct audiopipe {int index; int interleave; scalar_t__* dma_counter; int state; } ;
typedef scalar_t__ __le32 ;
struct TYPE_4__ {scalar_t__* position; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct echoaudio *VAR_3, struct audiopipe *VAR_4,
     int VAR_5, int VAR_6)
{
 int VAR_7;
 u32 VAR_8;

 FUNC_0(VAR_3->card->dev,
  "allocate_pipes: ch=%d int=%d\n", VAR_5, VAR_6);

 if (VAR_3->bad_board)
  return -VAR_1;

 for (VAR_8 = VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
  VAR_8 |= 1 << (VAR_5 + VAR_7);
 if (VAR_3->pipe_alloc_mask & VAR_8) {
  FUNC_1(VAR_3->card->dev,
   "allocate_pipes: channel already open\n");
  return -VAR_0;
 }

 VAR_3->comm_page->position[VAR_5] = 0;
 VAR_3->pipe_alloc_mask |= VAR_8;

 VAR_3->pipe_cyclic_mask |= VAR_8;
 VAR_4->index = VAR_5;
 VAR_4->interleave = VAR_6;
 VAR_4->state = VAR_2;




 VAR_4->dma_counter = (__le32 *)&VAR_3->comm_page->position[VAR_5];
 *VAR_4->dma_counter = 0;
 return VAR_5;
}
