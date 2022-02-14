
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
typedef enum kobj_ns_type { ____Placeholder_kobj_ns_type } kobj_ns_type ;
struct TYPE_2__ {void* (* netlink_ns ) (struct sock*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__** VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (struct sock*) ;

const void *FUNC_3(enum kobj_ns_type VAR_4, struct sock *VAR_5)
{
 const void *VAR_6 = ((void*)0);

 FUNC_0(&VAR_3);
 if ((VAR_4 > VAR_1) && (VAR_4 < VAR_0) &&
     VAR_2[VAR_4])
  VAR_6 = VAR_2[VAR_4]->netlink_ns(VAR_5);
 FUNC_1(&VAR_3);

 return VAR_6;
}
