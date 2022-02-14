
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_stream_out_ext {int dummy; } ;
struct sctp_stream {int dummy; } ;
typedef int __u16 ;
struct TYPE_2__ {struct sctp_stream_out_ext* ext; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct sctp_stream*,int ) ;
 int FUNC_1 (struct sctp_stream_out_ext*) ;
 struct sctp_stream_out_ext* FUNC_2 (int,int ) ;
 int FUNC_3 (struct sctp_stream*,int ,int ) ;

int FUNC_4(struct sctp_stream *VAR_2, __u16 VAR_3)
{
 struct sctp_stream_out_ext *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;
 FUNC_0(VAR_2, VAR_3)->ext = VAR_4;

 VAR_5 = FUNC_3(VAR_2, VAR_3, VAR_1);
 if (VAR_5) {
  FUNC_1(FUNC_0(VAR_2, VAR_3)->ext);
  FUNC_0(VAR_2, VAR_3)->ext = ((void*)0);
 }

 return VAR_5;
}
