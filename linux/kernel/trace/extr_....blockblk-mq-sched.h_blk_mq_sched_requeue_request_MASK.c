
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {struct elevator_queue* elevator; } ;
struct request {struct request_queue* q; } ;
struct elevator_queue {TYPE_2__* type; } ;
struct TYPE_3__ {int (* requeue_request ) (struct request*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int FUNC_0 (struct request*) ;

__attribute__((used)) static inline void FUNC_1(struct request *VAR_0)
{
 struct request_queue *VAR_1 = VAR_0->q;
 struct elevator_queue *VAR_2 = VAR_1->elevator;

 if (VAR_2 && VAR_2->type->ops.requeue_request)
  VAR_2->type->ops.requeue_request(VAR_0);
}
