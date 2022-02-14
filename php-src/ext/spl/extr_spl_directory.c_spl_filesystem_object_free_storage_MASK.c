
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zend_object ;
struct TYPE_11__ {scalar_t__ open_mode; } ;
struct TYPE_10__ {scalar_t__ sub_path; } ;
struct TYPE_12__ {TYPE_3__ file; TYPE_2__ dir; } ;
struct TYPE_13__ {int type; scalar_t__ orig_path; TYPE_4__ u; scalar_t__ file_name; scalar_t__ _path; int std; TYPE_1__* oth_handler; } ;
typedef TYPE_5__ spl_filesystem_object ;
struct TYPE_9__ {int (* dtor ) (TYPE_5__*) ;} ;





 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_5__*) ;
 TYPE_5__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(zend_object *VAR_0)
{
 spl_filesystem_object *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->oth_handler && VAR_1->oth_handler->dtor) {
  VAR_1->oth_handler->dtor(VAR_1);
 }

 FUNC_4(&VAR_1->std);

 if (VAR_1->_path) {
  FUNC_0(VAR_1->_path);
 }
 if (VAR_1->file_name) {
  FUNC_0(VAR_1->file_name);
 }
 switch(VAR_1->type) {
 case 128:
  break;
 case 130:
  if (VAR_1->u.dir.sub_path) {
   FUNC_0(VAR_1->u.dir.sub_path);
  }
  break;
 case 129:
  if (VAR_1->u.file.open_mode) {
   FUNC_0(VAR_1->u.file.open_mode);
  }
  if (VAR_1->orig_path) {
   FUNC_0(VAR_1->orig_path);
  }
  FUNC_1(VAR_1);
  break;
 }
}
