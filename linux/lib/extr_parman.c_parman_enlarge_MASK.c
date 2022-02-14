
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parman {unsigned long limit_count; int priv; TYPE_1__* ops; } ;
struct TYPE_2__ {unsigned long resize_step; int (* resize ) (int ,unsigned long) ;} ;


 int FUNC_0 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_1(struct parman *VAR_0)
{
 unsigned long VAR_1 = VAR_0->limit_count +
      VAR_0->ops->resize_step;
 int VAR_2;

 VAR_2 = VAR_0->ops->resize(VAR_0->priv, VAR_1);
 if (VAR_2)
  return VAR_2;
 VAR_0->limit_count = VAR_1;
 return 0;
}
