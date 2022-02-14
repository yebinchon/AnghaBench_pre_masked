
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_ulpq {TYPE_1__* asoc; } ;
struct sctp_stream_in {int mid; scalar_t__ pd_mode; int mid_uo; scalar_t__ pd_mode_uo; } ;
struct sctp_stream {scalar_t__ incnt; } ;
typedef int gfp_t ;
typedef int __u32 ;
typedef scalar_t__ __u16 ;
struct TYPE_2__ {struct sctp_stream stream; } ;


 struct sctp_stream_in* FUNC_0 (struct sctp_stream*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (struct sctp_ulpq*,scalar_t__) ;
 int FUNC_2 (struct sctp_ulpq*,scalar_t__,int ,int,int ) ;
 int FUNC_3 (struct sctp_stream*,int ,scalar_t__,int ) ;
 int FUNC_4 (struct sctp_ulpq*) ;

__attribute__((used)) static void FUNC_5(struct sctp_ulpq *VAR_1, gfp_t VAR_2)
{
 struct sctp_stream *VAR_3 = &VAR_1->asoc->stream;
 __u16 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->incnt; VAR_4++) {
  struct sctp_stream_in *VAR_5 = FUNC_0(VAR_3, VAR_4);
  __u32 VAR_6;

  if (VAR_5->pd_mode_uo) {
   VAR_5->pd_mode_uo = 0;

   VAR_6 = VAR_5->mid_uo;
   FUNC_2(VAR_1, VAR_4, VAR_6, 0x1, VAR_2);
  }

  if (VAR_5->pd_mode) {
   VAR_5->pd_mode = 0;

   VAR_6 = VAR_5->mid;
   FUNC_2(VAR_1, VAR_4, VAR_6, 0, VAR_2);
   FUNC_3(VAR_3, VAR_0, VAR_4, VAR_6);

   FUNC_1(VAR_1, VAR_4);
  }
 }


 FUNC_4(VAR_1);
}
