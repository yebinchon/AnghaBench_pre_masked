
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int zval ;
struct TYPE_15__ {TYPE_1__* ce; } ;
typedef TYPE_5__ zend_object ;
struct TYPE_12__ {int d_name; } ;
struct TYPE_13__ {TYPE_2__ entry; } ;
struct TYPE_14__ {TYPE_3__ dir; } ;
struct TYPE_16__ {int type; TYPE_4__ u; int file_name_len; int file_name; } ;
typedef TYPE_6__ spl_filesystem_object ;
struct TYPE_11__ {scalar_t__ __tostring; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 TYPE_6__* FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*,int *,int) ;

__attribute__((used)) static int FUNC_6(zend_object *VAR_4, zval *VAR_5, int VAR_6)
{
 spl_filesystem_object *VAR_7 = FUNC_4(VAR_4);

 if (VAR_6 == VAR_1) {
  if (VAR_4->ce->__tostring) {
   return FUNC_5(VAR_4, VAR_5, VAR_6);
  }

  switch (VAR_7->type) {
  case 128:
  case 129:
   FUNC_2(VAR_5, VAR_7->file_name, VAR_7->file_name_len);
   return VAR_2;
  case 130:
   FUNC_1(VAR_5, VAR_7->u.dir.entry.d_name);
   return VAR_2;
  }
 } else if (VAR_6 == VAR_3) {
  FUNC_3(VAR_5);
  return VAR_2;
 }
 FUNC_0(VAR_5);
 return VAR_0;
}
