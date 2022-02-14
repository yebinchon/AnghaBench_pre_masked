
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int current_zval; int * current_line; } ;
struct TYPE_6__ {TYPE_1__ file; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
typedef TYPE_3__ spl_filesystem_object ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(spl_filesystem_object *VAR_0)
{
 if (VAR_0->u.file.current_line) {
  FUNC_2(VAR_0->u.file.current_line);
  VAR_0->u.file.current_line = ((void*)0);
 }
 if (!FUNC_1(VAR_0->u.file.current_zval)) {
  FUNC_3(&VAR_0->u.file.current_zval);
  FUNC_0(&VAR_0->u.file.current_zval);
 }
}
