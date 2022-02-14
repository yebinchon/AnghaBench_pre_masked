
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* sdlContentModelPtr ;
struct TYPE_6__ {TYPE_2__* group_ref; TYPE_2__* content; } ;
struct TYPE_7__ {int kind; TYPE_1__ u; } ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(sdlContentModelPtr VAR_0)
{
 switch (VAR_0->kind) {
  case 131:
  case 130:
   break;
  case 128:
  case 133:
  case 132:
   FUNC_1(VAR_0->u.content);
   FUNC_0(VAR_0->u.content);
   break;
  case 129:
   FUNC_0(VAR_0->u.group_ref);
   break;
  default:
   break;
 }
 FUNC_0(VAR_0);
}
