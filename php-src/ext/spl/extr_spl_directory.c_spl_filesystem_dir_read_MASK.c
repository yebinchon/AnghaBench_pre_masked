
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {char* d_name; } ;
struct TYPE_6__ {TYPE_5__ entry; int dirp; } ;
struct TYPE_7__ {TYPE_1__ dir; } ;
struct TYPE_8__ {TYPE_2__ u; } ;
typedef TYPE_3__ spl_filesystem_object ;


 int FUNC_0 (int ,TYPE_5__*) ;

__attribute__((used)) static int FUNC_1(spl_filesystem_object *VAR_0)
{
 if (!VAR_0->u.dir.dirp || !FUNC_0(VAR_0->u.dir.dirp, &VAR_0->u.dir.entry)) {
  VAR_0->u.dir.entry.d_name[0] = '\0';
  return 0;
 } else {
  return 1;
 }
}
