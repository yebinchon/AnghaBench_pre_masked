
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
struct TYPE_3__ {unsigned int param_count; } ;
typedef TYPE_1__ MYSQLND_STMT_DATA ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(MYSQLND_STMT_DATA * VAR_0, zval *VAR_1)
{
 if (VAR_1) {
  unsigned int VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_0->param_count; VAR_2++) {
   FUNC_1(&VAR_1[VAR_2]);
  }
  FUNC_0(VAR_1);
 }
}
