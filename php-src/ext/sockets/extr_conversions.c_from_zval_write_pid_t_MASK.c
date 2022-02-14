
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
typedef scalar_t__ pid_t ;
typedef int ival ;


 int FUNC_0 (TYPE_2__*,char*,char*) ;
 scalar_t__ FUNC_1 (int const*,TYPE_2__*) ;
 int FUNC_2 (char*,scalar_t__*,int) ;

__attribute__((used)) static void FUNC_3(const zval *VAR_0, char *VAR_1, ser_context *VAR_2)
{
 zend_long VAR_3;
 pid_t VAR_4;

 VAR_3 = FUNC_1(VAR_0, VAR_2);
 if (VAR_2->err.has_error) {
  return;
 }

 if (VAR_3 < 0 || (pid_t)VAR_3 != VAR_3) {
  FUNC_0(VAR_2, "%s", "given PHP integer is out of bounds "
    "for a pid_t value");
  return;
 }

 VAR_4 = (pid_t)VAR_3;
 FUNC_2(VAR_1, &VAR_4, sizeof(VAR_4));
}
