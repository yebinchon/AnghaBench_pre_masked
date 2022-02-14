
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct request {TYPE_1__* q; } ;
struct elevator_queue {TYPE_3__* type; } ;
struct TYPE_5__ {int (* completed_request ) (struct request*,int ) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {struct elevator_queue* elevator; } ;


 int FUNC_0 (struct request*,int ) ;

__attribute__((used)) static inline void FUNC_1(struct request *VAR_0, u64 VAR_1)
{
 struct elevator_queue *VAR_2 = VAR_0->q->elevator;

 if (VAR_2 && VAR_2->type->ops.completed_request)
  VAR_2->type->ops.completed_request(VAR_0, VAR_1);
}
