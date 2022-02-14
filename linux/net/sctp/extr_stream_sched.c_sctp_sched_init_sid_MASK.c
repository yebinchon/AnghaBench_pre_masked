
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_stream_out_ext {int outq; } ;
struct sctp_stream {int dummy; } ;
struct sctp_sched_ops {int (* init_sid ) (struct sctp_stream*,int ,int ) ;} ;
typedef int gfp_t ;
typedef int __u16 ;
struct TYPE_2__ {struct sctp_stream_out_ext* ext; } ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (struct sctp_stream*,int ) ;
 struct sctp_sched_ops* FUNC_2 (struct sctp_stream*) ;
 int FUNC_3 (struct sctp_stream*,int ,int ) ;

int FUNC_4(struct sctp_stream *VAR_0, __u16 VAR_1, gfp_t VAR_2)
{
 struct sctp_sched_ops *VAR_3 = FUNC_2(VAR_0);
 struct sctp_stream_out_ext *VAR_4 = FUNC_1(VAR_0, VAR_1)->ext;

 FUNC_0(&VAR_4->outq);
 return VAR_3->init_sid(VAR_0, VAR_1, VAR_2);
}
