
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_stream {int outcnt; int out; } ;
struct sctp_sched_ops {int (* free ) (struct sctp_stream*) ;int (* sched_all ) (struct sctp_stream*) ;int (* unsched_all ) (struct sctp_stream*) ;} ;
typedef int gfp_t ;
typedef int __u16 ;
struct TYPE_2__ {int state; } ;


 TYPE_1__* FUNC_0 (struct sctp_stream*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 struct sctp_sched_ops* FUNC_2 (struct sctp_stream*) ;
 int FUNC_3 (struct sctp_stream*,int,int ) ;
 int FUNC_4 (struct sctp_stream*,int,int ) ;
 int FUNC_5 (struct sctp_stream*) ;
 int FUNC_6 (struct sctp_stream*,int *,int) ;
 int FUNC_7 (struct sctp_stream*) ;
 int FUNC_8 (struct sctp_stream*) ;
 int FUNC_9 (struct sctp_stream*) ;

int FUNC_10(struct sctp_stream *VAR_2, __u16 VAR_3, __u16 VAR_4,
       gfp_t VAR_5)
{
 struct sctp_sched_ops *VAR_6 = FUNC_2(VAR_2);
 int VAR_7, VAR_8 = 0;

 VAR_5 |= VAR_1;




 if (VAR_3 == VAR_2->outcnt)
  goto in;


 VAR_6->unsched_all(VAR_2);
 FUNC_6(VAR_2, ((void*)0), VAR_3);
 VAR_6->sched_all(VAR_2);

 VAR_8 = FUNC_4(VAR_2, VAR_3, VAR_5);
 if (VAR_8)
  goto out;

 for (VAR_7 = 0; VAR_7 < VAR_2->outcnt; VAR_7++)
  FUNC_0(VAR_2, VAR_7)->state = VAR_0;

in:
 FUNC_5(VAR_2);
 if (!VAR_4)
  goto out;

 VAR_8 = FUNC_3(VAR_2, VAR_4, VAR_5);
 if (VAR_8) {
  VAR_6->free(VAR_2);
  FUNC_1(&VAR_2->out);
  VAR_2->outcnt = 0;
  goto out;
 }

out:
 return VAR_8;
}
