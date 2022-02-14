
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kmem_cache {int flags; int object_size; } ;
typedef int gfp_t ;
struct TYPE_2__ {int attr; scalar_t__ cache_filter; scalar_t__ ignore_gfp_reclaim; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 struct kmem_cache* VAR_4 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int) ;

bool FUNC_2(struct kmem_cache *VAR_5, gfp_t VAR_6)
{

 if (FUNC_1(VAR_5 == VAR_4))
  return 0;

 if (VAR_6 & VAR_2)
  return 0;

 if (VAR_3.ignore_gfp_reclaim &&
   (VAR_6 & VAR_1))
  return 0;

 if (VAR_3.cache_filter && !(VAR_5->flags & VAR_0))
  return 0;

 return FUNC_0(&VAR_3.attr, VAR_5->object_size);
}
