
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ size; } ;
struct rtmp_stream {int packets_mutex; TYPE_1__ packets; } ;
struct encoder_packet {int dummy; } ;


 int FUNC_0 (TYPE_1__*,struct encoder_packet*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline bool FUNC_3(struct rtmp_stream *VAR_0,
       struct encoder_packet *VAR_1)
{
 bool VAR_2 = 0;

 FUNC_1(&VAR_0->packets_mutex);
 if (VAR_0->packets.size) {
  FUNC_0(&VAR_0->packets, VAR_1,
        sizeof(struct encoder_packet));
  VAR_2 = 1;
 }
 FUNC_2(&VAR_0->packets_mutex);

 return VAR_2;
}
