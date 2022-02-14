
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ play_dir; } ;
struct priv {scalar_t__ start; scalar_t__ end; scalar_t__ codec; scalar_t__ packet_fed; TYPE_1__ public; } ;
struct mp_frame {scalar_t__ type; struct demux_packet* data; } ;
struct demux_packet {scalar_t__ start; scalar_t__ end; scalar_t__ codec; scalar_t__ back_restart; scalar_t__ segmented; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct priv *VAR_1, struct mp_frame VAR_2)
{
    if (VAR_2.type != VAR_0)
        return 0;
    struct demux_packet *VAR_3 = VAR_2.data;
    return (VAR_3->segmented && (VAR_3->start != VAR_1->start || VAR_3->end != VAR_1->end ||
                               VAR_3->codec != VAR_1->codec)) ||
           (VAR_1->public.play_dir < 0 && VAR_3->back_restart && VAR_1->packet_fed);
}
