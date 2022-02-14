
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int String_prototype; } ;
typedef TYPE_3__ js_State ;
struct TYPE_10__ {int length; int string; } ;
struct TYPE_11__ {TYPE_1__ s; } ;
struct TYPE_13__ {TYPE_2__ u; } ;
typedef TYPE_4__ js_Object ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (TYPE_3__*,int ,int ) ;
 int FUNC_1 (TYPE_3__*,char const*) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static js_Object *FUNC_3(js_State *VAR_1, const char *VAR_2)
{
 js_Object *VAR_3 = FUNC_0(VAR_1, VAR_0, VAR_1->String_prototype);
 VAR_3->u.s.string = FUNC_1(VAR_1, VAR_2);
 VAR_3->u.s.length = FUNC_2(VAR_2);
 return VAR_3;
}
