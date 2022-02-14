
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct audio_client {TYPE_1__* port; int dev; int lock; } ;
struct audio_buffer {size_t size; scalar_t__ phys; } ;
typedef scalar_t__ phys_addr_t ;
struct TYPE_2__ {unsigned int num_periods; struct audio_buffer* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct audio_client*,unsigned int,size_t,unsigned int,int) ;
 int FUNC_1 (int ,char*) ;
 struct audio_buffer* FUNC_2 (int,int ) ;
 int FUNC_3 (struct audio_client*,TYPE_1__*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(unsigned int VAR_2, struct audio_client *VAR_3,
        phys_addr_t VAR_4,
        size_t VAR_5, unsigned int VAR_6)
{
 struct audio_buffer *VAR_7;
 unsigned long VAR_8;
 int VAR_9;
 int VAR_10;

 FUNC_4(&VAR_3->lock, VAR_8);
 if (VAR_3->port[VAR_2].buf) {
  FUNC_1(VAR_3->dev, "Buffer already allocated\n");
  FUNC_5(&VAR_3->lock, VAR_8);
  return 0;
 }

 VAR_7 = FUNC_2(((sizeof(struct audio_buffer)) * VAR_6), VAR_1);
 if (!VAR_7) {
  FUNC_5(&VAR_3->lock, VAR_8);
  return -VAR_0;
 }


 VAR_3->port[VAR_2].buf = VAR_7;

 VAR_7[0].phys = VAR_4;
 VAR_7[0].size = VAR_5;

 for (VAR_9 = 1; VAR_9 < VAR_6; VAR_9++) {
  if (VAR_5 > 0) {
   VAR_7[VAR_9].phys = VAR_7[0].phys + (VAR_9 * VAR_5);
   VAR_7[VAR_9].size = VAR_5;
  }
 }
 VAR_3->port[VAR_2].num_periods = VAR_6;

 FUNC_5(&VAR_3->lock, VAR_8);

 VAR_10 = FUNC_0(VAR_3, VAR_2, VAR_5, VAR_6, 1);
 if (VAR_10 < 0) {
  FUNC_1(VAR_3->dev, "Memory_map_regions failed\n");
  FUNC_3(VAR_3, &VAR_3->port[VAR_2]);
 }

 return VAR_10;
}
