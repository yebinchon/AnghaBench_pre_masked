
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_transport {int param_flags; int sackfreq; int sackdelay; } ;
struct sctp_cmd_seq {int dummy; } ;
struct sctp_chunk {int dummy; } ;
struct TYPE_2__ {int sack_needed; int sack_cnt; int tsn_map; struct sctp_transport* last_data_from; } ;
struct sctp_association {int param_flags; int sackfreq; scalar_t__ a_rwnd; scalar_t__ rwnd; TYPE_1__ peer; int sackdelay; int * timeouts; } ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;
 int FUNC_0 (struct sctp_chunk*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (size_t) ;
 int VAR_5 ;
 int FUNC_2 (struct sctp_cmd_seq*,int ,int ) ;
 struct sctp_chunk* FUNC_3 (struct sctp_association*) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct sctp_association *VAR_6, int VAR_7,
    struct sctp_cmd_seq *VAR_8)
{
 struct sctp_transport *VAR_9 = VAR_6->peer.last_data_from;
 __u32 VAR_10, VAR_11;
 struct sctp_chunk *VAR_12;
 int VAR_13 = 0;

 if (VAR_7 ||
     (!VAR_9 && (VAR_6->param_flags & VAR_5)) ||
     (VAR_9 && (VAR_9->param_flags & VAR_5)))
  VAR_6->peer.sack_needed = 1;

 VAR_10 = FUNC_4(&VAR_6->peer.tsn_map);
 VAR_11 = FUNC_5(&VAR_6->peer.tsn_map);
 if (VAR_11 != VAR_10)
  VAR_6->peer.sack_needed = 1;
 if (!VAR_6->peer.sack_needed) {
  VAR_6->peer.sack_cnt++;






  if (VAR_9) {

   if (VAR_6->peer.sack_cnt >= VAR_9->sackfreq - 1)
    VAR_6->peer.sack_needed = 1;

   VAR_6->timeouts[VAR_4] =
    VAR_9->sackdelay;
  } else {

   if (VAR_6->peer.sack_cnt >= VAR_6->sackfreq - 1)
    VAR_6->peer.sack_needed = 1;

   VAR_6->timeouts[VAR_4] =
    VAR_6->sackdelay;
  }


  FUNC_2(VAR_8, VAR_2,
    FUNC_1(VAR_4));
 } else {
  __u32 VAR_14 = VAR_6->a_rwnd;

  VAR_6->a_rwnd = VAR_6->rwnd;
  VAR_12 = FUNC_3(VAR_6);
  if (!VAR_12) {
   VAR_6->a_rwnd = VAR_14;
   goto nomem;
  }

  VAR_6->peer.sack_needed = 0;
  VAR_6->peer.sack_cnt = 0;

  FUNC_2(VAR_8, VAR_1, FUNC_0(VAR_12));


  FUNC_2(VAR_8, VAR_3,
    FUNC_1(VAR_4));
 }

 return VAR_13;
nomem:
 VAR_13 = -VAR_0;
 return VAR_13;
}
