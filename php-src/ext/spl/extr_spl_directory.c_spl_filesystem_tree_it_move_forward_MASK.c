
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zend_object_iterator ;
struct TYPE_9__ {int d_name; } ;
struct TYPE_11__ {TYPE_1__ entry; int index; } ;
struct TYPE_10__ {TYPE_3__ dir; } ;
struct TYPE_12__ {int * file_name; TYPE_2__ u; } ;
typedef TYPE_4__ spl_filesystem_object ;
struct TYPE_13__ {int current; } ;
typedef TYPE_5__ spl_filesystem_iterator ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_4__* FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(zend_object_iterator *VAR_0)
{
 spl_filesystem_iterator *VAR_1 = (spl_filesystem_iterator *)VAR_0;
 spl_filesystem_object *VAR_2 = FUNC_5(VAR_1);

 VAR_2->u.dir.index++;
 do {
  FUNC_3(VAR_2);
 } while (FUNC_4(VAR_2->u.dir.entry.d_name));
 if (VAR_2->file_name) {
  FUNC_2(VAR_2->file_name);
  VAR_2->file_name = ((void*)0);
 }
 if (!FUNC_1(VAR_1->current)) {
  FUNC_6(&VAR_1->current);
  FUNC_0(&VAR_1->current);
 }
}
