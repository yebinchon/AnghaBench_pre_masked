
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_6__ {int length; } ;
struct TYPE_7__ {TYPE_1__ s; } ;
struct TYPE_8__ {scalar_t__ type; TYPE_2__ u; TYPE_5__* properties; } ;
typedef TYPE_3__ js_Object ;
struct TYPE_9__ {scalar_t__ level; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,TYPE_5__*,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int,int ) ;
 TYPE_3__* FUNC_5 (int *,int) ;
 int FUNC_6 (int *,char*) ;

__attribute__((used)) static void FUNC_7(js_State *VAR_1)
{
 js_Object *VAR_2;
 int VAR_3, VAR_4;

 if (!FUNC_1(VAR_1, 1))
  FUNC_6(VAR_1, "not an object");
 VAR_2 = FUNC_5(VAR_1, 1);

 FUNC_2(VAR_1);

 if (VAR_2->properties->level)
  VAR_3 = FUNC_0(VAR_1, VAR_2->properties, 0);
 else
  VAR_3 = 0;

 if (VAR_2->type == VAR_0) {
  for (VAR_4 = 0; VAR_4 < VAR_2->u.s.length; ++VAR_4) {
   FUNC_3(VAR_1, VAR_4);
   FUNC_4(VAR_1, -2, VAR_3++);
  }
 }
}
