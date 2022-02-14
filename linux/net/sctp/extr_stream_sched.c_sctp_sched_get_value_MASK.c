
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ outcnt; } ;
struct TYPE_7__ {TYPE_1__* sched; } ;
struct sctp_association {TYPE_3__ stream; TYPE_2__ outqueue; } ;
typedef scalar_t__ __u16 ;
struct TYPE_9__ {int ext; } ;
struct TYPE_6__ {int (* get ) (TYPE_3__*,scalar_t__,scalar_t__*) ;} ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (TYPE_3__*,scalar_t__) ;
 int FUNC_1 (TYPE_3__*,scalar_t__,scalar_t__*) ;

int FUNC_2(struct sctp_association *VAR_1, __u16 VAR_2,
    __u16 *VAR_3)
{
 if (VAR_2 >= VAR_1->stream.outcnt)
  return -VAR_0;

 if (!FUNC_0(&VAR_1->stream, VAR_2)->ext)
  return 0;

 return VAR_1->outqueue.sched->get(&VAR_1->stream, VAR_2, VAR_3);
}
