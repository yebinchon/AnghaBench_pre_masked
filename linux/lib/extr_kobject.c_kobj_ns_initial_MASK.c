
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum kobj_ns_type { ____Placeholder_kobj_ns_type } kobj_ns_type ;
struct TYPE_2__ {void* (* initial_ns ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__** VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 () ;

const void *FUNC_3(enum kobj_ns_type VAR_4)
{
 const void *VAR_5 = ((void*)0);

 FUNC_0(&VAR_3);
 if ((VAR_4 > VAR_1) && (VAR_4 < VAR_0) &&
     VAR_2[VAR_4])
  VAR_5 = VAR_2[VAR_4]->initial_ns();
 FUNC_1(&VAR_3);

 return VAR_5;
}
