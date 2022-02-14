
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t num; struct encoder_packet* array; } ;
struct obs_output {TYPE_1__ interleaved_packets; } ;
struct encoder_packet {scalar_t__ type; scalar_t__ dts_usec; } ;
typedef scalar_t__ int64_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct encoder_packet* FUNC_0 (struct obs_output*,int ,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static size_t FUNC_2(struct obs_output *VAR_3)
{
 int64_t VAR_4 = 0x7FFFFFFFFFFFFFFFLL;
 struct encoder_packet *VAR_5 =
  FUNC_0(VAR_3, VAR_2, 0);
 size_t VAR_6 = VAR_0;
 size_t VAR_7 = 0;

 for (size_t VAR_8 = 0; VAR_8 < VAR_3->interleaved_packets.num; VAR_8++) {
  struct encoder_packet *VAR_9 =
   &VAR_3->interleaved_packets.array[VAR_8];
  int64_t VAR_10;

  if (VAR_9->type != VAR_1) {
   if (VAR_9 == VAR_5)
    VAR_6 = VAR_8;
   continue;
  }

  VAR_10 = FUNC_1(VAR_9->dts_usec - VAR_5->dts_usec);
  if (VAR_10 < VAR_4) {
   VAR_4 = VAR_10;
   VAR_7 = VAR_8;
  }
 }

 return VAR_6 < VAR_7 ? VAR_6 : VAR_7;
}
