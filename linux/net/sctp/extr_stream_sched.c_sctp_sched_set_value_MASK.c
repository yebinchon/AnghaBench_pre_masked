
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ outcnt; } ;
struct TYPE_8__ {TYPE_1__* sched; } ;
struct sctp_association {TYPE_3__ stream; TYPE_2__ outqueue; } ;
typedef int gfp_t ;
typedef scalar_t__ __u16 ;
struct TYPE_10__ {int ext; } ;
struct TYPE_7__ {int (* set ) (TYPE_3__*,scalar_t__,scalar_t__,int ) ;} ;


 int VAR_0 ;
 TYPE_5__* FUNC_0 (TYPE_3__*,scalar_t__) ;
 int FUNC_1 (TYPE_3__*,scalar_t__) ;
 int FUNC_2 (TYPE_3__*,scalar_t__,scalar_t__,int ) ;

int FUNC_3(struct sctp_association *VAR_1, __u16 VAR_2,
    __u16 VAR_3, gfp_t VAR_4)
{
 if (VAR_2 >= VAR_1->stream.outcnt)
  return -VAR_0;

 if (!FUNC_0(&VAR_1->stream, VAR_2)->ext) {
  int VAR_5;

  VAR_5 = FUNC_1(&VAR_1->stream, VAR_2);
  if (VAR_5)
   return VAR_5;
 }

 return VAR_1->outqueue.sched->set(&VAR_1->stream, VAR_2, VAR_3, VAR_4);
}
