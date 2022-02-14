
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
typedef TYPE_2__* sdlContentModelPtr ;
struct TYPE_6__ {TYPE_2__* group_ref; TYPE_2__* content; } ;
struct TYPE_7__ {int kind; TYPE_1__ u; } ;
 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3(zval *VAR_0)
{
 sdlContentModelPtr VAR_1 = FUNC_0(VAR_0);
 switch (VAR_1->kind) {
  case 131:
  case 130:
   break;
  case 128:
  case 133:
  case 132:
   FUNC_2(VAR_1->u.content);
   FUNC_1(VAR_1->u.content);
   break;
  case 129:
   FUNC_1(VAR_1->u.group_ref);
   break;
  default:
   break;
 }
 FUNC_1(VAR_1);
}
