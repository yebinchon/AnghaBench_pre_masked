
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_stream {scalar_t__ outcnt; scalar_t__ incnt; } ;
struct sctp_chunk {int dummy; } ;
struct TYPE_2__ {int reconf_capable; } ;
struct sctp_association {int strreset_enable; int strreset_outstanding; struct sctp_chunk* strreset_chunk; TYPE_1__ peer; struct sctp_stream stream; } ;
struct sctp_add_streams {scalar_t__ sas_outstrms; scalar_t__ sas_instrms; } ;
typedef scalar_t__ __u32 ;
typedef scalar_t__ __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct sctp_chunk*) ;
 int FUNC_1 (struct sctp_chunk*) ;
 struct sctp_chunk* FUNC_2 (struct sctp_association*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct sctp_association*,struct sctp_chunk*) ;
 int FUNC_4 (struct sctp_stream*,scalar_t__,int ) ;

int FUNC_5(struct sctp_association *VAR_7,
     struct sctp_add_streams *VAR_8)
{
 struct sctp_stream *VAR_9 = &VAR_7->stream;
 struct sctp_chunk *VAR_10 = ((void*)0);
 int VAR_11;
 __u32 VAR_12, VAR_13;
 __u16 VAR_14, VAR_15;

 if (!VAR_7->peer.reconf_capable ||
     !(VAR_7->strreset_enable & VAR_5)) {
  VAR_11 = -VAR_3;
  goto out;
 }

 if (VAR_7->strreset_outstanding) {
  VAR_11 = -VAR_0;
  goto out;
 }

 VAR_14 = VAR_8->sas_outstrms;
 VAR_15 = VAR_8->sas_instrms;
 VAR_12 = VAR_9->outcnt + VAR_14;
 VAR_13 = VAR_9->incnt + VAR_15;
 if (VAR_12 > VAR_6 || VAR_13 > VAR_6 ||
     (!VAR_14 && !VAR_15)) {
  VAR_11 = -VAR_1;
  goto out;
 }

 if (VAR_14) {
  VAR_11 = FUNC_4(VAR_9, VAR_12, VAR_4);
  if (VAR_11)
   goto out;
 }

 VAR_10 = FUNC_2(VAR_7, VAR_14, VAR_15);
 if (!VAR_10) {
  VAR_11 = -VAR_2;
  goto out;
 }

 VAR_7->strreset_chunk = VAR_10;
 FUNC_0(VAR_7->strreset_chunk);

 VAR_11 = FUNC_3(VAR_7, VAR_10);
 if (VAR_11) {
  FUNC_1(VAR_7->strreset_chunk);
  VAR_7->strreset_chunk = ((void*)0);
  goto out;
 }

 VAR_7->strreset_outstanding = !!VAR_14 + !!VAR_15;

out:
 return VAR_11;
}
