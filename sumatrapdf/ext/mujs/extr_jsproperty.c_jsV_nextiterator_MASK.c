
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_12__ {TYPE_9__* target; TYPE_6__* head; } ;
struct TYPE_13__ {TYPE_3__ iter; } ;
struct TYPE_14__ {scalar_t__ type; TYPE_4__ u; } ;
typedef TYPE_5__ js_Object ;
struct TYPE_15__ {char* name; struct TYPE_15__* next; } ;
typedef TYPE_6__ js_Iterator ;
struct TYPE_10__ {int length; } ;
struct TYPE_11__ {TYPE_1__ s; } ;
struct TYPE_16__ {scalar_t__ type; TYPE_2__ u; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,TYPE_9__*,char const*) ;
 int FUNC_1 (int *,TYPE_6__*) ;
 scalar_t__ FUNC_2 (int *,char const*,int*) ;
 int FUNC_3 (int *,char*) ;

const char *FUNC_4(js_State *VAR_2, js_Object *VAR_3)
{
 int VAR_4;
 if (VAR_3->type != VAR_0)
  FUNC_3(VAR_2, "not an iterator");
 while (VAR_3->u.iter.head) {
  js_Iterator *VAR_5 = VAR_3->u.iter.head->next;
  const char *VAR_6 = VAR_3->u.iter.head->name;
  FUNC_1(VAR_2, VAR_3->u.iter.head);
  VAR_3->u.iter.head = VAR_5;
  if (FUNC_0(VAR_2, VAR_3->u.iter.target, VAR_6))
   return VAR_6;
  if (VAR_3->u.iter.target->type == VAR_1)
   if (FUNC_2(VAR_2, VAR_6, &VAR_4) && VAR_4 < VAR_3->u.iter.target->u.s.length)
    return VAR_6;
 }
 return ((void*)0);
}
