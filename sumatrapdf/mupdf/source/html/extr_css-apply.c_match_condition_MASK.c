
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int fz_xml ;
struct TYPE_3__ {int type; char* key; struct TYPE_3__* next; int val; } ;
typedef TYPE_1__ fz_css_condition ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int ) ;

__attribute__((used)) static int
FUNC_3(fz_css_condition *VAR_0, fz_xml *VAR_1)
{
 if (!VAR_0)
  return 1;

 switch (VAR_0->type) {
 default: return 0;
 case ':': return 0;
 case '#': if (!FUNC_2(VAR_1, "id", VAR_0->val)) return 0; break;
 case '.': if (!FUNC_1(VAR_1, "class", VAR_0->val)) return 0; break;
 case '[': if (!FUNC_0(VAR_1, VAR_0->key)) return 0; break;
 case '=': if (!FUNC_2(VAR_1, VAR_0->key, VAR_0->val)) return 0; break;
 case '~': if (!FUNC_1(VAR_1, VAR_0->key, VAR_0->val)) return 0; break;
 case '|': if (!FUNC_2(VAR_1, VAR_0->key, VAR_0->val)) return 0; break;
 }

 return FUNC_3(VAR_0->next, VAR_1);
}
