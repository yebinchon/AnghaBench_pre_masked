
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_stream_priorities {int dummy; } ;
struct sctp_stream_out_ext {struct sctp_stream_priorities* prio_head; } ;
struct sctp_stream_out {struct sctp_stream_out_ext* ext; } ;
struct sctp_stream {int outcnt; } ;
typedef int gfp_t ;
typedef int __u16 ;


 int VAR_0 ;
 struct sctp_stream_out* FUNC_0 (struct sctp_stream*,int) ;
 int FUNC_1 (struct sctp_stream_priorities*) ;
 struct sctp_stream_priorities* FUNC_2 (struct sctp_stream*,int,int ) ;
 int FUNC_3 (struct sctp_stream*,struct sctp_stream_out_ext*) ;
 int FUNC_4 (struct sctp_stream_out_ext*) ;

__attribute__((used)) static int FUNC_5(struct sctp_stream *VAR_1, __u16 VAR_2,
          __u16 VAR_3, gfp_t VAR_4)
{
 struct sctp_stream_out *VAR_5 = FUNC_0(VAR_1, VAR_2);
 struct sctp_stream_out_ext *VAR_6 = VAR_5->ext;
 struct sctp_stream_priorities *VAR_7, *VAR_8;
 bool VAR_9 = 0;
 int VAR_10;

 VAR_7 = FUNC_2(VAR_1, VAR_3, VAR_4);
 if (!VAR_7)
  return -VAR_0;

 VAR_9 = FUNC_4(VAR_6);
 VAR_8 = VAR_6->prio_head;
 VAR_6->prio_head = VAR_7;
 if (VAR_9)
  FUNC_3(VAR_1, VAR_6);

 if (!VAR_8)

  return 0;

 for (VAR_10 = 0; VAR_10 < VAR_1->outcnt; VAR_10++) {
  VAR_6 = FUNC_0(VAR_1, VAR_10)->ext;
  if (VAR_6 && VAR_6->prio_head == VAR_8)

   return 0;
 }


 FUNC_1(VAR_8);

 return 0;
}
