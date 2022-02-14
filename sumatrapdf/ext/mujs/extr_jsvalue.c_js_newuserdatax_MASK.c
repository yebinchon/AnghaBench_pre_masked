
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int js_State ;
typedef int js_Put ;
struct TYPE_8__ {char const* tag; int finalize; int delete; int put; int has; void* data; } ;
struct TYPE_9__ {TYPE_1__ user; } ;
struct TYPE_10__ {TYPE_2__ u; } ;
typedef TYPE_3__ js_Object ;
typedef int js_HasProperty ;
typedef int js_Finalize ;
typedef int js_Delete ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int *,int ,TYPE_3__*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 TYPE_3__* FUNC_4 (int *,int) ;

void FUNC_5(js_State *VAR_1, const char *VAR_2, void *VAR_3, js_HasProperty VAR_4, js_Put VAR_5, js_Delete VAR_6, js_Finalize VAR_7)
{
 js_Object *VAR_8 = ((void*)0);
 js_Object *VAR_9;

 if (FUNC_1(VAR_1, -1))
  VAR_8 = FUNC_4(VAR_1, -1);
 FUNC_2(VAR_1, 1);

 VAR_9 = FUNC_0(VAR_1, VAR_0, VAR_8);
 VAR_9->u.user.tag = VAR_2;
 VAR_9->u.user.data = VAR_3;
 VAR_9->u.user.has = VAR_4;
 VAR_9->u.user.put = VAR_5;
 VAR_9->u.user.delete = VAR_6;
 VAR_9->u.user.finalize = VAR_7;
 FUNC_3(VAR_1, VAR_9);
}
