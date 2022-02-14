
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef TYPE_1__* sdlExtraAttributePtr ;
struct TYPE_4__ {struct TYPE_4__* val; struct TYPE_4__* ns; } ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(zval *VAR_0)
{
 sdlExtraAttributePtr VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->ns) {
  FUNC_1(VAR_1->ns);
 }
 if (VAR_1->val) {
  FUNC_1(VAR_1->val);
 }
 FUNC_1(VAR_1);
}
