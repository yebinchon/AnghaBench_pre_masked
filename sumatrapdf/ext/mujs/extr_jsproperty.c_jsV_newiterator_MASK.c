
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_16__ {TYPE_5__* head; TYPE_4__* target; } ;
struct TYPE_15__ {int length; } ;
struct TYPE_17__ {TYPE_2__ iter; TYPE_1__ s; } ;
struct TYPE_18__ {scalar_t__ type; TYPE_3__ u; int * properties; } ;
typedef TYPE_4__ js_Object ;
struct TYPE_19__ {struct TYPE_19__* next; int name; } ;
typedef TYPE_5__ js_Iterator ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_5__* FUNC_0 (int *,TYPE_4__*) ;
 TYPE_5__* FUNC_1 (int *,TYPE_5__*,int *,int *) ;
 int FUNC_2 (int *,TYPE_4__*,char*) ;
 TYPE_4__* FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (char*,int) ;
 TYPE_5__* FUNC_6 (int *,int) ;
 int VAR_2 ;

js_Object *FUNC_7(js_State *VAR_3, js_Object *VAR_4, int VAR_5)
{
 char VAR_6[32];
 int VAR_7;
 js_Object *VAR_8 = FUNC_3(VAR_3, VAR_0, ((void*)0));
 VAR_8->u.iter.target = VAR_4;
 if (VAR_5) {
  VAR_8->u.iter.head = ((void*)0);
  if (VAR_4->properties != &VAR_2)
   VAR_8->u.iter.head = FUNC_1(VAR_3, VAR_8->u.iter.head, VAR_4->properties, ((void*)0));
 } else {
  VAR_8->u.iter.head = FUNC_0(VAR_3, VAR_4);
 }
 if (VAR_4->type == VAR_1) {
  js_Iterator *VAR_9 = VAR_8->u.iter.head;
  if (VAR_9)
   while (VAR_9->next)
    VAR_9 = VAR_9->next;
  for (VAR_7 = 0; VAR_7 < VAR_4->u.s.length; ++VAR_7) {
   FUNC_5(VAR_6, VAR_7);
   if (!FUNC_2(VAR_3, VAR_4, VAR_6)) {
    js_Iterator *VAR_10 = FUNC_6(VAR_3, sizeof *VAR_10);
    VAR_10->name = FUNC_4(VAR_3, FUNC_5(VAR_6, VAR_7));
    VAR_10->next = ((void*)0);
    if (!VAR_9)
     VAR_8->u.iter.head = VAR_9 = VAR_10;
    else {
     VAR_9->next = VAR_10;
     VAR_9 = VAR_10;
    }
   }
  }
 }
 return VAR_8;
}
