
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zend_object_iterator ;
struct TYPE_6__ {int index; } ;
struct TYPE_7__ {TYPE_1__ dir; } ;
struct TYPE_8__ {int * file_name; TYPE_2__ u; } ;
typedef TYPE_3__ spl_filesystem_object ;
typedef int spl_filesystem_iterator ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(zend_object_iterator *VAR_0)
{
 spl_filesystem_object *VAR_1 = FUNC_2((spl_filesystem_iterator *)VAR_0);

 VAR_1->u.dir.index++;
 FUNC_1(VAR_1);
 if (VAR_1->file_name) {
  FUNC_0(VAR_1->file_name);
  VAR_1->file_name = ((void*)0);
 }
}
