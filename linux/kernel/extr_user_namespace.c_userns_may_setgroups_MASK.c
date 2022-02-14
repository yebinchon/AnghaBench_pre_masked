
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nr_extents; } ;
struct user_namespace {int flags; TYPE_1__ gid_map; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;

bool FUNC_2(const struct user_namespace *VAR_2)
{
 bool VAR_3;

 FUNC_0(&VAR_1);



 VAR_3 = VAR_2->gid_map.nr_extents != 0;

 VAR_3 = VAR_3 && (VAR_2->flags & VAR_0);
 FUNC_1(&VAR_1);

 return VAR_3;
}
