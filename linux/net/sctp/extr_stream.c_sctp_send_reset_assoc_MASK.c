
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sctp_stream {scalar_t__ outcnt; } ;
struct sctp_chunk {int dummy; } ;
struct TYPE_3__ {int reconf_capable; } ;
struct sctp_association {int strreset_enable; int strreset_outstanding; struct sctp_chunk* strreset_chunk; int outqueue; TYPE_1__ peer; struct sctp_stream stream; } ;
typedef scalar_t__ __u16 ;
struct TYPE_4__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_0 (struct sctp_stream*,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct sctp_chunk*) ;
 int FUNC_2 (struct sctp_chunk*) ;
 struct sctp_chunk* FUNC_3 (struct sctp_association*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sctp_association*,struct sctp_chunk*) ;

int FUNC_6(struct sctp_association *VAR_7)
{
 struct sctp_stream *VAR_8 = &VAR_7->stream;
 struct sctp_chunk *VAR_9 = ((void*)0);
 int VAR_10;
 __u16 VAR_11;

 if (!VAR_7->peer.reconf_capable ||
     !(VAR_7->strreset_enable & VAR_4))
  return -VAR_3;

 if (VAR_7->strreset_outstanding)
  return -VAR_1;

 if (!FUNC_4(&VAR_7->outqueue))
  return -VAR_0;

 VAR_9 = FUNC_3(VAR_7);
 if (!VAR_9)
  return -VAR_2;


 for (VAR_11 = 0; VAR_11 < VAR_8->outcnt; VAR_11++)
  FUNC_0(VAR_8, VAR_11)->state = VAR_5;

 VAR_7->strreset_chunk = VAR_9;
 FUNC_1(VAR_7->strreset_chunk);

 VAR_10 = FUNC_5(VAR_7, VAR_9);
 if (VAR_10) {
  FUNC_2(VAR_7->strreset_chunk);
  VAR_7->strreset_chunk = ((void*)0);

  for (VAR_11 = 0; VAR_11 < VAR_8->outcnt; VAR_11++)
   FUNC_0(VAR_8, VAR_11)->state = VAR_6;

  return VAR_10;
 }

 VAR_7->strreset_outstanding = 1;

 return 0;
}
