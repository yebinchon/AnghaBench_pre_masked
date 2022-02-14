
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtmp_stream {scalar_t__ min_priority; int last_dts_usec; int dropped_frames; } ;
struct encoder_packet {scalar_t__ drop_priority; int dts_usec; } ;


 int FUNC_0 (struct rtmp_stream*,struct encoder_packet*) ;
 int FUNC_1 (struct rtmp_stream*,int) ;

__attribute__((used)) static bool FUNC_2(struct rtmp_stream *VAR_0,
        struct encoder_packet *VAR_1)
{
 FUNC_1(VAR_0, 0);
 FUNC_1(VAR_0, 1);



 if (VAR_1->drop_priority < VAR_0->min_priority) {
  VAR_0->dropped_frames++;
  return 0;
 } else {
  VAR_0->min_priority = 0;
 }

 VAR_0->last_dts_usec = VAR_1->dts_usec;
 return FUNC_0(VAR_0, VAR_1);
}
