
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sctp_strreset_outreq {int dummy; } ;
struct sctp_strreset_inreq {int dummy; } ;
struct sctp_stream {int outcnt; int incnt; } ;
struct sctp_reset_streams {int srs_flags; int srs_number_streams; int* srs_stream_list; } ;
struct sctp_reconf_chunk {int dummy; } ;
struct sctp_chunk {int dummy; } ;
struct TYPE_3__ {int reconf_capable; } ;
struct sctp_association {int strreset_enable; int strreset_outstanding; struct sctp_chunk* strreset_chunk; TYPE_1__ peer; struct sctp_stream stream; } ;
typedef int __u16 ;
typedef int __be16 ;
struct TYPE_4__ {void* state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* FUNC_0 (struct sctp_stream*,int) ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sctp_chunk*) ;
 int FUNC_5 (struct sctp_chunk*) ;
 struct sctp_chunk* FUNC_6 (struct sctp_association*,int,int *,int,int) ;
 int FUNC_7 (struct sctp_association*,struct sctp_chunk*) ;
 int FUNC_8 (struct sctp_stream*,int,int *) ;

int FUNC_9(struct sctp_association *VAR_12,
       struct sctp_reset_streams *VAR_13)
{
 struct sctp_stream *VAR_14 = &VAR_12->stream;
 __u16 VAR_15, VAR_16, *VAR_17;
 struct sctp_chunk *VAR_18;
 int VAR_19 = -VAR_2;
 __be16 *VAR_20;
 bool VAR_21, VAR_22;

 if (!VAR_12->peer.reconf_capable ||
     !(VAR_12->strreset_enable & VAR_6)) {
  VAR_19 = -VAR_4;
  goto out;
 }

 if (VAR_12->strreset_outstanding) {
  VAR_19 = -VAR_1;
  goto out;
 }

 VAR_21 = VAR_13->srs_flags & VAR_11;
 VAR_22 = VAR_13->srs_flags & VAR_10;
 if (!VAR_21 && !VAR_22)
  goto out;

 VAR_16 = VAR_13->srs_number_streams;
 VAR_17 = VAR_13->srs_stream_list;
 if (VAR_16) {
  int VAR_23 = 0;

  if (VAR_21) {
   for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++)
    if (VAR_17[VAR_15] >= VAR_14->outcnt)
     goto out;

   VAR_23 = VAR_16 * sizeof(__u16) +
        sizeof(struct sctp_strreset_outreq);
  }

  if (VAR_22) {
   for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++)
    if (VAR_17[VAR_15] >= VAR_14->incnt)
     goto out;

   VAR_23 += VAR_16 * sizeof(__u16) +
         sizeof(struct sctp_strreset_inreq);
  }

  if (VAR_23 > VAR_7 -
    sizeof(struct sctp_reconf_chunk))
   goto out;
 }

 VAR_20 = FUNC_2(VAR_16, sizeof(__be16), VAR_5);
 if (!VAR_20) {
  VAR_19 = -VAR_3;
  goto out;
 }

 for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++)
  VAR_20[VAR_15] = FUNC_1(VAR_17[VAR_15]);

 if (VAR_21 && !FUNC_8(VAR_14, VAR_16, VAR_20)) {
  FUNC_3(VAR_20);
  VAR_19 = -VAR_0;
  goto out;
 }

 VAR_18 = FUNC_6(VAR_12, VAR_16, VAR_20, VAR_21, VAR_22);

 FUNC_3(VAR_20);

 if (!VAR_18) {
  VAR_19 = -VAR_3;
  goto out;
 }

 if (VAR_21) {
  if (VAR_16)
   for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++)
    FUNC_0(VAR_14, VAR_17[VAR_15])->state =
             VAR_8;
  else
   for (VAR_15 = 0; VAR_15 < VAR_14->outcnt; VAR_15++)
    FUNC_0(VAR_14, VAR_15)->state = VAR_8;
 }

 VAR_12->strreset_chunk = VAR_18;
 FUNC_4(VAR_12->strreset_chunk);

 VAR_19 = FUNC_7(VAR_12, VAR_18);
 if (VAR_19) {
  FUNC_5(VAR_12->strreset_chunk);
  VAR_12->strreset_chunk = ((void*)0);
  if (!VAR_21)
   goto out;

  if (VAR_16)
   for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++)
    FUNC_0(VAR_14, VAR_17[VAR_15])->state =
             VAR_9;
  else
   for (VAR_15 = 0; VAR_15 < VAR_14->outcnt; VAR_15++)
    FUNC_0(VAR_14, VAR_15)->state = VAR_9;

  goto out;
 }

 VAR_12->strreset_outstanding = VAR_21 + VAR_22;

out:
 return VAR_19;
}
