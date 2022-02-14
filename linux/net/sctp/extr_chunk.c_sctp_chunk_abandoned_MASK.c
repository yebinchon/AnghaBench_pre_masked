
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sctp_stream_out {TYPE_4__* ext; } ;
struct TYPE_11__ {scalar_t__ sinfo_timetolive; int sinfo_flags; int sinfo_stream; } ;
struct sctp_chunk {scalar_t__ sent_count; TYPE_6__* msg; TYPE_5__ sinfo; TYPE_3__* asoc; TYPE_2__* chunk_hdr; int has_tsn; } ;
struct TYPE_12__ {int abandoned; scalar_t__ expires_at; } ;
struct TYPE_10__ {int * abandoned_sent; int * abandoned_unsent; } ;
struct TYPE_7__ {int prsctp_capable; } ;
struct TYPE_9__ {int * abandoned_sent; int stream; int * abandoned_unsent; TYPE_1__ peer; } ;
struct TYPE_8__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 struct sctp_stream_out* FUNC_4 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;

int FUNC_6(struct sctp_chunk *VAR_4)
{
 if (!VAR_4->asoc->peer.prsctp_capable)
  return 0;

 if (VAR_4->msg->abandoned)
  return 1;

 if (!VAR_4->has_tsn &&
     !(VAR_4->chunk_hdr->flags & VAR_1))
  return 0;

 if (FUNC_3(VAR_4->sinfo.sinfo_flags) &&
     FUNC_5(VAR_3, VAR_4->msg->expires_at)) {
  struct sctp_stream_out *VAR_5 =
   FUNC_4(&VAR_4->asoc->stream,
    VAR_4->sinfo.sinfo_stream);

  if (VAR_4->sent_count) {
   VAR_4->asoc->abandoned_sent[FUNC_0(VAR_2)]++;
   VAR_5->ext->abandoned_sent[FUNC_0(VAR_2)]++;
  } else {
   VAR_4->asoc->abandoned_unsent[FUNC_0(VAR_2)]++;
   VAR_5->ext->abandoned_unsent[FUNC_0(VAR_2)]++;
  }
  VAR_4->msg->abandoned = 1;
  return 1;
 } else if (FUNC_2(VAR_4->sinfo.sinfo_flags) &&
     VAR_4->sent_count > VAR_4->sinfo.sinfo_timetolive) {
  struct sctp_stream_out *VAR_6 =
   FUNC_4(&VAR_4->asoc->stream,
    VAR_4->sinfo.sinfo_stream);

  VAR_4->asoc->abandoned_sent[FUNC_0(VAR_0)]++;
  VAR_6->ext->abandoned_sent[FUNC_0(VAR_0)]++;
  VAR_4->msg->abandoned = 1;
  return 1;
 } else if (!FUNC_1(VAR_4->sinfo.sinfo_flags) &&
     VAR_4->msg->expires_at &&
     FUNC_5(VAR_3, VAR_4->msg->expires_at)) {
  VAR_4->msg->abandoned = 1;
  return 1;
 }


 return 0;
}
