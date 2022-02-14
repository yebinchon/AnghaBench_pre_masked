
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
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,TYPE_5__*,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int,int ) ;
 TYPE_3__* FUNC_6 (int *,int) ;
 int FUNC_7 (int *,char*) ;

__attribute__((used)) static void FUNC_8(js_State *VAR_3)
{
 js_Object *VAR_4;
 int VAR_5;
 int VAR_6;

 if (!FUNC_1(VAR_3, 1))
  FUNC_7(VAR_3, "not an object");
 VAR_4 = FUNC_6(VAR_3, 1);

 FUNC_2(VAR_3);

 if (VAR_4->properties->level)
  VAR_6 = FUNC_0(VAR_3, VAR_4->properties, 0);
 else
  VAR_6 = 0;

 if (VAR_4->type == VAR_0) {
  FUNC_3(VAR_3, "length");
  FUNC_5(VAR_3, -2, VAR_6++);
 }

 if (VAR_4->type == VAR_2) {
  FUNC_3(VAR_3, "length");
  FUNC_5(VAR_3, -2, VAR_6++);
  for (VAR_5 = 0; VAR_5 < VAR_4->u.s.length; ++VAR_5) {
   FUNC_4(VAR_3, VAR_5);
   FUNC_5(VAR_3, -2, VAR_6++);
  }
 }

 if (VAR_4->type == VAR_1) {
  FUNC_3(VAR_3, "source");
  FUNC_5(VAR_3, -2, VAR_6++);
  FUNC_3(VAR_3, "global");
  FUNC_5(VAR_3, -2, VAR_6++);
  FUNC_3(VAR_3, "ignoreCase");
  FUNC_5(VAR_3, -2, VAR_6++);
  FUNC_3(VAR_3, "multiline");
  FUNC_5(VAR_3, -2, VAR_6++);
  FUNC_3(VAR_3, "lastIndex");
  FUNC_5(VAR_3, -2, VAR_6++);
 }
}
