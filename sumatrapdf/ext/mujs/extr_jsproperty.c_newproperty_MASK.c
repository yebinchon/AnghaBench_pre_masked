
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_8__ {scalar_t__ number; } ;
struct TYPE_9__ {TYPE_1__ u; int type; } ;
struct TYPE_10__ {int level; int * setter; int * getter; TYPE_2__ value; scalar_t__ atts; int * right; int * left; int name; } ;
typedef TYPE_3__ js_Property ;
struct TYPE_11__ {int count; } ;
typedef TYPE_4__ js_Object ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*) ;
 TYPE_3__* FUNC_1 (int *,int) ;
 int VAR_1 ;

__attribute__((used)) static js_Property *FUNC_2(js_State *VAR_2, js_Object *VAR_3, const char *VAR_4)
{
 js_Property *VAR_5 = FUNC_1(VAR_2, sizeof *VAR_5);
 VAR_5->name = FUNC_0(VAR_2, VAR_4);
 VAR_5->left = VAR_5->right = &VAR_1;
 VAR_5->level = 1;
 VAR_5->atts = 0;
 VAR_5->value.type = VAR_0;
 VAR_5->value.u.number = 0;
 VAR_5->getter = ((void*)0);
 VAR_5->setter = ((void*)0);
 ++VAR_3->count;
 return VAR_5;
}
