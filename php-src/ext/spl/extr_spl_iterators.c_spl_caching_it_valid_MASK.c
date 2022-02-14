
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
struct TYPE_6__ {TYPE_1__ caching; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
typedef TYPE_3__ spl_dual_it_object ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline int FUNC_0(spl_dual_it_object *VAR_3)
{
 return VAR_3->u.caching.flags & VAR_0 ? VAR_2 : VAR_1;
}
