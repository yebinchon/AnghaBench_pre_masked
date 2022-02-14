
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
struct TYPE_4__ {scalar_t__ parent; scalar_t__ pattern; } ;
typedef TYPE_1__ browscap_entry ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(zval *VAR_0)
{
 browscap_entry *VAR_1 = FUNC_0(VAR_0);
 FUNC_2(VAR_1->pattern, 1);
 if (VAR_1->parent) {
  FUNC_2(VAR_1->parent, 1);
 }
 FUNC_1(VAR_1, 1);
}
