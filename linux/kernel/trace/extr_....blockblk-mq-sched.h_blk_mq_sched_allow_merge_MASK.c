
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {struct elevator_queue* elevator; } ;
struct request {int dummy; } ;
struct elevator_queue {TYPE_2__* type; } ;
struct bio {int dummy; } ;
struct TYPE_3__ {int (* allow_merge ) (struct request_queue*,struct request*,struct bio*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int FUNC_0 (struct request_queue*,struct request*,struct bio*) ;

__attribute__((used)) static inline bool
FUNC_1(struct request_queue *VAR_0, struct request *VAR_1,
    struct bio *VAR_2)
{
 struct elevator_queue *VAR_3 = VAR_0->elevator;

 if (VAR_3 && VAR_3->type->ops.allow_merge)
  return VAR_3->type->ops.allow_merge(VAR_0, VAR_1, VAR_2);

 return 1;
}
