
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct ftl_stream {scalar_t__ last_nack_count; int status_thread; int dropped_frames; int ftl_handle; } ;
struct TYPE_11__ {scalar_t__ queue_fullness; float period; int max_frame_size; scalar_t__ bytes_sent; scalar_t__ frames_sent; scalar_t__ bytes_queued; scalar_t__ frames_queued; } ;
typedef TYPE_3__ ftl_video_frame_stats_msg_t ;
typedef scalar_t__ ftl_status_t ;
struct TYPE_14__ {int avg_rtt; int max_rtt; int min_rtt; int max_xmit_delay; int min_xmit_delay; int avg_xmit_delay; } ;
struct TYPE_13__ {scalar_t__ nack_reqs; float period; scalar_t__ sent; } ;
struct TYPE_9__ {int string; int log_level; } ;
struct TYPE_10__ {TYPE_3__ video_stats; TYPE_6__ ipkt_stats; TYPE_5__ pkt_stats; TYPE_1__ log; } ;
struct TYPE_12__ {int type; TYPE_2__ msg; } ;
typedef TYPE_4__ ftl_status_msg_t ;
typedef TYPE_5__ ftl_packet_stats_msg_t ;
typedef TYPE_6__ ftl_packet_stats_instant_msg_t ;
typedef enum ret_type { ____Placeholder_ret_type } ret_type ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (struct ftl_stream*) ;
 int FUNC_2 (struct ftl_stream*,TYPE_4__) ;
 scalar_t__ FUNC_3 (int *,TYPE_4__*,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void *FUNC_5(void *VAR_12)
{
 struct ftl_stream *VAR_13 = VAR_12;

 ftl_status_msg_t VAR_14;
 ftl_status_t VAR_15;

 while (!FUNC_1(VAR_13)) {
  VAR_15 = FUNC_3(&VAR_13->ftl_handle,
          &VAR_14, 1000);

  if (VAR_15 == VAR_4 ||
      VAR_15 == VAR_1) {
   continue;
  } else if (VAR_15 == VAR_0) {
   break;
  }

  if (VAR_14.type == VAR_2) {
   enum ret_type VAR_16 = FUNC_2(VAR_13, VAR_14);
   if (VAR_16 == VAR_11)
    return ((void*)0);
   else if (VAR_16 == VAR_10)
    break;

  } else if (VAR_14.type == VAR_3) {
   FUNC_0(VAR_9, "[%d] %s", VAR_14.msg.log.log_level,
        VAR_14.msg.log.string);

  } else if (VAR_14.type == VAR_6) {
   ftl_packet_stats_msg_t *VAR_17 = &VAR_14.msg.pkt_stats;


   VAR_13->dropped_frames +=
    VAR_17->nack_reqs - VAR_13->last_nack_count;
   VAR_13->last_nack_count = VAR_17->nack_reqs;

   int VAR_18 = VAR_17->nack_reqs > 0 ? VAR_9 : VAR_8;

   FUNC_0(VAR_18,
        "Avg packet send per second %3.1f, "
        "total nack requests %d",
        (float)VAR_17->sent * 1000.f / VAR_17->period,
        (int)VAR_17->nack_reqs);

  } else if (VAR_14.type == VAR_7) {
   ftl_packet_stats_instant_msg_t *VAR_19 =
    &VAR_14.msg.ipkt_stats;

   int VAR_20 = VAR_19->avg_rtt > 20 ? VAR_9 : VAR_8;

   FUNC_0(VAR_20,
        "avg transmit delay %dms "
        "(min: %d, max: %d), "
        "avg rtt %dms (min: %d, max: %d)",
        VAR_19->avg_xmit_delay, VAR_19->min_xmit_delay,
        VAR_19->max_xmit_delay, VAR_19->avg_rtt, VAR_19->min_rtt,
        VAR_19->max_rtt);

  } else if (VAR_14.type == VAR_5) {
   ftl_video_frame_stats_msg_t *VAR_21 =
    &VAR_14.msg.video_stats;

   int VAR_22 = VAR_21->queue_fullness > 0 ? VAR_9
             : VAR_8;

   FUNC_0(VAR_22,
        "Queue an average of %3.2f fps "
        "(%3.1f kbps), "
        "sent an average of %3.2f fps "
        "(%3.1f kbps), "
        "queue fullness %d, "
        "max frame size %d",
        (float)VAR_21->frames_queued * 1000.f / VAR_21->period,
        (float)VAR_21->bytes_queued / VAR_21->period * 8,
        (float)VAR_21->frames_sent * 1000.f / VAR_21->period,
        (float)VAR_21->bytes_sent / VAR_21->period * 8,
        VAR_21->queue_fullness, VAR_21->max_frame_size);
  } else {
   FUNC_0(VAR_8,
        "Status:  Got Status message of type "
        "%d",
        VAR_14.type);
  }
 }

 FUNC_0(VAR_8, "status_thread:  Exited");
 FUNC_4(VAR_13->status_thread);
 return ((void*)0);
}
