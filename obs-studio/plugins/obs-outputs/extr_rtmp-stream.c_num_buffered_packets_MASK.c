
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; } ;
struct rtmp_stream {TYPE_1__ packets; } ;
struct encoder_packet {int dummy; } ;



__attribute__((used)) static inline size_t FUNC_0(struct rtmp_stream *VAR_0)
{
 return VAR_0->packets.size / sizeof(struct encoder_packet);
}
