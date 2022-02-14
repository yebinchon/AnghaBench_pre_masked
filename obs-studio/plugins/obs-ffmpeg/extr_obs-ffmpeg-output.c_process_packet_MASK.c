
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_8__ {int output; } ;
struct TYPE_9__ {TYPE_1__* array; scalar_t__ num; } ;
struct ffmpeg_output {scalar_t__ stop_ts; TYPE_3__ ff_data; int total_bytes; int write_mutex; TYPE_4__ packets; } ;
struct TYPE_7__ {scalar_t__ size; } ;
typedef TYPE_1__ AVPacket ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_4__,int ) ;
 int FUNC_4 (int ,TYPE_3__*,char*,int ) ;
 int FUNC_5 (struct ffmpeg_output*) ;
 scalar_t__ FUNC_6 (struct ffmpeg_output*,TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct ffmpeg_output*) ;

__attribute__((used)) static int FUNC_10(struct ffmpeg_output *VAR_1)
{
 AVPacket VAR_2;
 bool VAR_3 = 0;
 int VAR_4;

 FUNC_7(&VAR_1->write_mutex);
 if (VAR_1->packets.num) {
  VAR_2 = VAR_1->packets.array[0];
  FUNC_3(VAR_1->packets, 0);
  VAR_3 = 1;
 }
 FUNC_8(&VAR_1->write_mutex);

 if (!VAR_3)
  return 0;






 if (FUNC_9(VAR_1)) {
  uint64_t VAR_5 = FUNC_6(VAR_1, &VAR_2);
  if (VAR_5 >= VAR_1->stop_ts) {
   FUNC_5(VAR_1);
   return 0;
  }
 }

 VAR_1->total_bytes += VAR_2.size;

 VAR_4 = FUNC_2(VAR_1->ff_data.output, &VAR_2);
 if (VAR_4 < 0) {
  FUNC_1(&VAR_2);
  FUNC_4(VAR_0, &VAR_1->ff_data,
     "receive_audio: Error writing packet: %s",
     FUNC_0(VAR_4));
  return VAR_4;
 }

 return 0;
}
