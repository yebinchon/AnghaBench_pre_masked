
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; } ;
struct ftl_stream {TYPE_1__ packets; } ;
struct encoder_packet {scalar_t__ type; int keyframe; } ;


 scalar_t__ VAR_0 ;
 struct encoder_packet* FUNC_0 (TYPE_1__*,size_t) ;

__attribute__((used)) static bool FUNC_1(struct ftl_stream *VAR_1,
        struct encoder_packet *VAR_2)
{
 size_t VAR_3 = VAR_1->packets.size / sizeof(*VAR_2);

 for (size_t VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  struct encoder_packet *VAR_5 =
   FUNC_0(&VAR_1->packets, VAR_4 * sizeof(*VAR_2));
  if (VAR_5->type == VAR_0 && !VAR_5->keyframe) {
   *VAR_2 = *VAR_5;
   return 1;
  }
 }

 return 0;
}
