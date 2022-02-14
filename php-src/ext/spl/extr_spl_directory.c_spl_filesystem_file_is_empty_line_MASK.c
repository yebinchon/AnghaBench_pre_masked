
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zval ;
typedef size_t uint32_t ;
struct TYPE_9__ {scalar_t__ current_line_len; int current_zval; scalar_t__ current_line; } ;
struct TYPE_10__ {TYPE_2__ file; } ;
struct TYPE_11__ {TYPE_3__ u; int flags; } ;
typedef TYPE_4__ spl_filesystem_object ;
struct TYPE_12__ {TYPE_1__* arData; } ;
struct TYPE_8__ {int val; } ;





 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 TYPE_5__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int const FUNC_6 (int *) ;
 int FUNC_7 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_8(spl_filesystem_object *VAR_1)
{
 if (VAR_1->u.file.current_line) {
  return VAR_1->u.file.current_line_len == 0;
 } else if (!FUNC_2(VAR_1->u.file.current_zval)) {
  switch(FUNC_5(VAR_1->u.file.current_zval)) {
   case 128:
    return FUNC_3(VAR_1->u.file.current_zval) == 0;
   case 130:
    if (FUNC_0(VAR_1->flags, VAR_0)
      && FUNC_7(FUNC_1(VAR_1->u.file.current_zval)) == 1) {
     uint32_t VAR_2 = 0;
     zval *VAR_3;

     while (FUNC_2(FUNC_1(VAR_1->u.file.current_zval)->arData[VAR_2].val)) {
      VAR_2++;
     }
     VAR_3 = &FUNC_1(VAR_1->u.file.current_zval)->arData[VAR_2].val;
     return FUNC_6(VAR_3) == 128 && FUNC_4(VAR_3) == 0;
    }
    return FUNC_7(FUNC_1(VAR_1->u.file.current_zval)) == 0;
   case 129:
    return 1;
   default:
    return 0;
  }
 } else {
  return 1;
 }
}
