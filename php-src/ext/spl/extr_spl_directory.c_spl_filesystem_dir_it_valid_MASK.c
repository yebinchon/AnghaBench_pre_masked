
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zend_object_iterator ;
struct TYPE_6__ {char* d_name; } ;
struct TYPE_7__ {TYPE_1__ entry; } ;
struct TYPE_8__ {TYPE_2__ dir; } ;
struct TYPE_9__ {TYPE_3__ u; } ;
typedef TYPE_4__ spl_filesystem_object ;
typedef int spl_filesystem_iterator ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(zend_object_iterator *VAR_2)
{
 spl_filesystem_object *VAR_3 = FUNC_0((spl_filesystem_iterator *)VAR_2);

 return VAR_3->u.dir.entry.d_name[0] != '\0' ? VAR_1 : VAR_0;
}
