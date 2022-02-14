
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zend_object ;
struct TYPE_9__ {TYPE_6__* stream; } ;
struct TYPE_8__ {TYPE_6__* dirp; } ;
struct TYPE_10__ {TYPE_2__ file; TYPE_1__ dir; } ;
struct TYPE_11__ {int type; TYPE_3__ u; } ;
typedef TYPE_4__ spl_filesystem_object ;
struct TYPE_12__ {int is_persistent; } ;




 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*) ;
 TYPE_4__* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(zend_object *VAR_0)
{
 spl_filesystem_object *VAR_1 = FUNC_2(VAR_0);

 FUNC_3(VAR_0);

 switch(VAR_1->type) {
 case 129:
  if (VAR_1->u.dir.dirp) {
   FUNC_0(VAR_1->u.dir.dirp);
   VAR_1->u.dir.dirp = ((void*)0);
  }
  break;
 case 128:
  if (VAR_1->u.file.stream) {





   if (!VAR_1->u.file.stream->is_persistent) {
    FUNC_0(VAR_1->u.file.stream);
   } else {
    FUNC_1(VAR_1->u.file.stream);
   }
   VAR_1->u.file.stream = ((void*)0);
  }
  break;
 default:
  break;
 }
}
