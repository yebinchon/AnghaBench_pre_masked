
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ oth; } ;
typedef TYPE_1__ spl_filesystem_object ;
struct TYPE_6__ {int refcount; int is_persistent; } ;
typedef TYPE_2__ phar_archive_data ;



__attribute__((used)) static void FUNC_0(spl_filesystem_object *VAR_0, spl_filesystem_object *VAR_1)
{
 phar_archive_data *VAR_2 = (phar_archive_data *) VAR_1->oth;

 if (!VAR_2->is_persistent) {
  ++(VAR_2->refcount);
 }
}
