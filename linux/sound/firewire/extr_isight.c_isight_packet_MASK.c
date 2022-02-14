
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {TYPE_1__* packets; int iso_buffer; } ;
struct isight {unsigned int packet_index; unsigned int total_samples; int first_packet; int context; TYPE_3__* unit; TYPE_2__ buffer; } ;
struct fw_iso_context {int dummy; } ;
struct audio_payload {scalar_t__ signature; int samples; int sample_total; int sample_count; } ;
struct TYPE_6__ {int device; } ;
struct TYPE_4__ {int offset; struct audio_payload* buffer; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int ,int *,int *,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct isight*,unsigned int) ;
 int FUNC_7 (struct isight*) ;
 int FUNC_8 (struct isight*,int ,unsigned int) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct fw_iso_context *VAR_2, u32 VAR_3,
     size_t VAR_4, void *VAR_5, void *VAR_6)
{
 struct isight *VAR_7 = VAR_6;
 const struct audio_payload *VAR_8;
 unsigned int VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13;

 if (VAR_7->packet_index < 0)
  return;
 VAR_9 = VAR_7->packet_index;
 VAR_8 = VAR_7->buffer.packets[VAR_9].buffer;
 VAR_10 = FUNC_1(VAR_5) >> 16;

 if (FUNC_9(VAR_10 >= 16 &&
     VAR_8->signature == FUNC_2(0x73676874 ))) {
  VAR_11 = FUNC_0(VAR_8->sample_count);
  if (FUNC_9(VAR_11 <= (VAR_10 - 16) / 4)) {
   VAR_12 = FUNC_0(VAR_8->sample_total);
   if (FUNC_10(VAR_12 != VAR_7->total_samples)) {
    if (!VAR_7->first_packet)
     FUNC_6(VAR_7, VAR_12);
    VAR_7->first_packet = 0;
    VAR_7->total_samples = VAR_12;
   }

   FUNC_8(VAR_7, VAR_8->samples, VAR_11);
   VAR_7->total_samples += VAR_11;
  }
 }

 VAR_13 = FUNC_4(VAR_7->context, &VAR_1,
       &VAR_7->buffer.iso_buffer,
       VAR_7->buffer.packets[VAR_9].offset);
 if (VAR_13 < 0) {
  FUNC_3(&VAR_7->unit->device, "queueing error: %d\n", VAR_13);
  FUNC_7(VAR_7);
  VAR_7->packet_index = -1;
  return;
 }
 FUNC_5(VAR_7->context);

 if (++VAR_9 >= VAR_0)
  VAR_9 = 0;
 VAR_7->packet_index = VAR_9;
}
