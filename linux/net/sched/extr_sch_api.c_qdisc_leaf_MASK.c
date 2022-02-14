
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct Qdisc_class_ops {unsigned long (* find ) (struct Qdisc*,int ) ;struct Qdisc* (* leaf ) (struct Qdisc*,unsigned long) ;} ;
struct Qdisc {TYPE_1__* ops; } ;
struct TYPE_2__ {struct Qdisc_class_ops* cl_ops; } ;


 unsigned long FUNC_0 (struct Qdisc*,int ) ;
 struct Qdisc* FUNC_1 (struct Qdisc*,unsigned long) ;

__attribute__((used)) static struct Qdisc *FUNC_2(struct Qdisc *VAR_0, u32 VAR_1)
{
 unsigned long VAR_2;
 const struct Qdisc_class_ops *VAR_3 = VAR_0->ops->cl_ops;

 if (VAR_3 == ((void*)0))
  return ((void*)0);
 VAR_2 = VAR_3->find(VAR_0, VAR_1);

 if (VAR_2 == 0)
  return ((void*)0);
 return VAR_3->leaf(VAR_0, VAR_2);
}
