
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int const zval ;
typedef int zend_uchar ;
struct TYPE_5__ {unsigned int param_count; TYPE_1__* param_bind; } ;
struct TYPE_4__ {short type; int const zv; } ;
typedef TYPE_2__ MYSQLND_STMT_DATA ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 short VAR_2 ;
 short VAR_3 ;
 short VAR_4 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const) ;
 scalar_t__ FUNC_3 (int const*) ;
 int FUNC_4 (int *,short) ;

__attribute__((used)) static void
FUNC_5(MYSQLND_STMT_DATA * VAR_5, zval * VAR_6, zend_uchar ** VAR_7)
{
 unsigned int VAR_8;
 for (VAR_8 = 0; VAR_8 < VAR_5->param_count; VAR_8++) {
  short VAR_9 = VAR_5->param_bind[VAR_8].type;
  zval *VAR_10 = &VAR_5->param_bind[VAR_8].zv;






  FUNC_0(VAR_10);
  if (!FUNC_1(VAR_10) && (VAR_9 == VAR_2 || VAR_9 == VAR_3)) {




   if (FUNC_3(VAR_10) != VAR_0) {
    const zval *VAR_11 = (VAR_6 && !FUNC_2(VAR_6[VAR_8]))? &VAR_6[VAR_8] : VAR_10;




    if (FUNC_3(VAR_11) == VAR_1) {
     VAR_9 = VAR_4;






    }
   }
  }
  FUNC_4(*VAR_7, VAR_9);
  *VAR_7+= 2;
 }
}
