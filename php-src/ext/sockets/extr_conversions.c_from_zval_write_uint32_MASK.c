
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
typedef int zend_long ;
typedef scalar_t__ uint32_t ;
struct TYPE_6__ {scalar_t__ has_error; } ;
struct TYPE_7__ {TYPE_1__ err; } ;
typedef TYPE_2__ ser_context ;
typedef int ival ;


 int FUNC_0 (TYPE_2__*,char*,char*) ;
 int FUNC_1 (int const*,TYPE_2__*) ;
 int FUNC_2 (char*,scalar_t__*,int) ;

__attribute__((used)) static void FUNC_3(const zval *VAR_0, char *VAR_1, ser_context *VAR_2)
{
 zend_long VAR_3;
 uint32_t VAR_4;

 VAR_3 = FUNC_1(VAR_0, VAR_2);
 if (VAR_2->err.has_error) {
  return;
 }

 if (sizeof(zend_long) > sizeof(uint32_t) && (VAR_3 < 0 || VAR_3 > 0xFFFFFFFF)) {
  FUNC_0(VAR_2, "%s", "given PHP integer is out of bounds "
    "for an unsigned 32-bit integer");
  return;
 }

 VAR_4 = (uint32_t)VAR_3;
 FUNC_2(VAR_1, &VAR_4, sizeof(VAR_4));
}
