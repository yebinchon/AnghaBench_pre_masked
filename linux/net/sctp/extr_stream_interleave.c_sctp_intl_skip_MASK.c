
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_ulpq {TYPE_1__* asoc; } ;
struct sctp_stream_in {scalar_t__ pd_mode; scalar_t__ pd_mode_uo; int mid_uo; } ;
struct sctp_stream {int dummy; } ;
typedef int __u8 ;
typedef int __u32 ;
typedef int __u16 ;
struct TYPE_2__ {struct sctp_stream stream; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sctp_ulpq*,int ) ;
 int FUNC_2 (struct sctp_ulpq*,int ,int ,int,int ) ;
 int FUNC_3 (struct sctp_stream*,int ,int ) ;
 int FUNC_4 (struct sctp_stream*,int ,int ,int ) ;
 struct sctp_stream_in* FUNC_5 (struct sctp_stream*,int ) ;

__attribute__((used)) static void FUNC_6(struct sctp_ulpq *VAR_3, __u16 VAR_4, __u32 VAR_5,
      __u8 VAR_6)
{
 struct sctp_stream_in *VAR_7 = FUNC_5(&VAR_3->asoc->stream, VAR_4);
 struct sctp_stream *VAR_8 = &VAR_3->asoc->stream;

 if (VAR_6 & VAR_1) {
  if (VAR_7->pd_mode_uo && FUNC_0(VAR_7->mid_uo, VAR_5)) {
   VAR_7->pd_mode_uo = 0;
   FUNC_2(VAR_3, VAR_4, VAR_5, 0x1,
        VAR_0);
  }
  return;
 }

 if (FUNC_0(VAR_5, FUNC_3(VAR_8, VAR_2, VAR_4)))
  return;

 if (VAR_7->pd_mode) {
  VAR_7->pd_mode = 0;
  FUNC_2(VAR_3, VAR_4, VAR_5, 0x0, VAR_0);
 }

 FUNC_4(VAR_8, VAR_2, VAR_4, VAR_5);

 FUNC_1(VAR_3, VAR_4);
}
