
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
typedef scalar_t__ zend_long ;
struct TYPE_6__ {scalar_t__ has_error; } ;
struct TYPE_7__ {TYPE_1__ err; } ;
typedef TYPE_2__ ser_context ;
typedef int ival ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*,char*) ;
 scalar_t__ FUNC_1 (int const*,TYPE_2__*) ;
 int FUNC_2 (char*,int*,int) ;

void FUNC_3(const zval *VAR_2, char *VAR_3, ser_context *VAR_4)
{
 zend_long VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_2, VAR_4);
 if (VAR_4->err.has_error) {
  return;
 }

 if (VAR_5 > VAR_0 || VAR_5 < VAR_1) {
  FUNC_0(VAR_4, "%s", "given PHP integer is out of bounds "
    "for a native int");
  return;
 }

 VAR_6 = (int)VAR_5;
 FUNC_2(VAR_3, &VAR_6, sizeof(VAR_6));
}
