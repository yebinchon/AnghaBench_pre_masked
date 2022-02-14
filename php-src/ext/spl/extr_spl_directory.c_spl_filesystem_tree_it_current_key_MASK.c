
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zval ;
typedef int zend_object_iterator ;
struct TYPE_8__ {int d_name; } ;
struct TYPE_9__ {TYPE_1__ entry; } ;
struct TYPE_10__ {TYPE_2__ dir; } ;
struct TYPE_11__ {int file_name_len; int file_name; TYPE_3__ u; } ;
typedef TYPE_4__ spl_filesystem_object ;
typedef int spl_filesystem_iterator ;


 scalar_t__ FUNC_0 (TYPE_4__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 TYPE_4__* FUNC_3 (int *) ;
 int FUNC_4 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_5(zend_object_iterator *VAR_1, zval *VAR_2)
{
 spl_filesystem_object *VAR_3 = FUNC_3((spl_filesystem_iterator *)VAR_1);

 if (FUNC_0(VAR_3, VAR_0)) {
  FUNC_1(VAR_2, VAR_3->u.dir.entry.d_name);
 } else {
  FUNC_4(VAR_3);
  FUNC_2(VAR_2, VAR_3->file_name, VAR_3->file_name_len);
 }
}
