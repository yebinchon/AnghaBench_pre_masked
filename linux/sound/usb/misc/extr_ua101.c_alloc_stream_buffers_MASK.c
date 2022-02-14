
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ua101_stream {unsigned int queue_length; unsigned int max_packet_bytes; TYPE_2__* buffers; } ;
struct ua101 {TYPE_1__* dev; } ;
struct TYPE_4__ {size_t size; int addr; int dma; } ;
struct TYPE_3__ {int dev; } ;


 unsigned int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_1 (int *,char*) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 void* FUNC_3 (unsigned int,unsigned int) ;
 unsigned int VAR_6 ;
 int FUNC_4 (TYPE_1__*,size_t,int ,int *) ;

__attribute__((used)) static int FUNC_5(struct ua101 *VAR_7, struct ua101_stream *VAR_8)
{
 unsigned int VAR_9, VAR_10, VAR_11, VAR_12;
 size_t VAR_13;

 VAR_8->queue_length = VAR_6;
 VAR_8->queue_length = FUNC_2(VAR_8->queue_length,
       (unsigned int)VAR_4);
 VAR_8->queue_length = FUNC_3(VAR_8->queue_length,
       (unsigned int)VAR_3);







 VAR_9 = VAR_8->queue_length;
 VAR_11 = VAR_5 / VAR_8->max_packet_bytes;
 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_8->buffers); ++VAR_12) {
  VAR_10 = FUNC_3(VAR_9, VAR_11);
  VAR_13 = VAR_10 * VAR_8->max_packet_bytes;
  VAR_8->buffers[VAR_12].addr =
   FUNC_4(VAR_7->dev, VAR_13, VAR_2,
        &VAR_8->buffers[VAR_12].dma);
  if (!VAR_8->buffers[VAR_12].addr)
   return -VAR_0;
  VAR_8->buffers[VAR_12].size = VAR_13;
  VAR_9 -= VAR_10;
  if (!VAR_9)
   break;
 }
 if (VAR_9) {
  FUNC_1(&VAR_7->dev->dev, "too many packets\n");
  return -VAR_1;
 }
 return 0;
}
