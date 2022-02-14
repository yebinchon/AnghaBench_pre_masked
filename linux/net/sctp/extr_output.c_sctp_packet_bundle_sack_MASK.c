
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct sctp_packet {TYPE_1__* transport; int has_cookie_echo; int has_sack; } ;
struct sctp_chunk {int dummy; } ;
struct TYPE_8__ {scalar_t__ sack_generation; scalar_t__ sack_needed; } ;
struct TYPE_7__ {int octrlchunks; } ;
struct TYPE_6__ {int sk; } ;
struct sctp_association {TYPE_4__ peer; TYPE_3__ stats; TYPE_2__ base; int rwnd; int a_rwnd; struct timer_list* timers; } ;
typedef enum sctp_xmit { ____Placeholder_sctp_xmit } sctp_xmit ;
struct TYPE_5__ {scalar_t__ sack_generation; struct sctp_association* asoc; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sctp_packet*,struct sctp_chunk*) ;
 scalar_t__ FUNC_2 (struct timer_list*) ;
 int FUNC_3 (struct sctp_association*) ;
 int FUNC_4 (struct sctp_chunk*) ;
 scalar_t__ FUNC_5 (struct sctp_chunk*) ;
 struct sctp_chunk* FUNC_6 (struct sctp_association*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct timer_list*) ;

__attribute__((used)) static enum sctp_xmit FUNC_9(struct sctp_packet *VAR_3,
           struct sctp_chunk *VAR_4)
{
 enum sctp_xmit VAR_5 = VAR_2;




 if (FUNC_5(VAR_4) && !VAR_3->has_sack &&
     !VAR_3->has_cookie_echo) {
  struct sctp_association *VAR_6;
  struct timer_list *VAR_7;
  VAR_6 = VAR_3->transport->asoc;
  VAR_7 = &VAR_6->timers[VAR_0];


  if (FUNC_8(VAR_7)) {
   struct sctp_chunk *VAR_8;

   if (VAR_3->transport->sack_generation !=
       VAR_3->transport->asoc->peer.sack_generation)
    return VAR_5;

   VAR_6->a_rwnd = VAR_6->rwnd;
   VAR_8 = FUNC_6(VAR_6);
   if (VAR_8) {
    VAR_5 = FUNC_1(VAR_3, VAR_8);
    if (VAR_5 != VAR_2) {
     FUNC_4(VAR_8);
     goto out;
    }
    FUNC_0(FUNC_7(VAR_6->base.sk),
            VAR_1);
    VAR_6->stats.octrlchunks++;
    VAR_6->peer.sack_needed = 0;
    if (FUNC_2(VAR_7))
     FUNC_3(VAR_6);
   }
  }
 }
out:
 return VAR_5;
}
