
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_14__ ;


struct TYPE_24__ {int tracetop; } ;
typedef TYPE_4__ js_State ;
struct TYPE_22__ {int function; int length; int name; } ;
struct TYPE_21__ {int scope; TYPE_14__* function; } ;
struct TYPE_23__ {TYPE_2__ c; TYPE_1__ f; } ;
struct TYPE_25__ {scalar_t__ type; TYPE_3__ u; } ;
typedef TYPE_5__ js_Object ;
struct TYPE_20__ {char* filename; int line; int name; scalar_t__ lightweight; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*,int,int ,int ) ;
 int FUNC_1 (TYPE_4__*,int,TYPE_14__*,int ) ;
 int FUNC_2 (TYPE_4__*,int,TYPE_14__*,int ) ;
 int FUNC_3 (TYPE_4__*,int,TYPE_14__*,int ) ;
 int FUNC_4 (TYPE_4__*,int ,char*,int ) ;
 int FUNC_5 (TYPE_4__*,int) ;
 TYPE_5__* FUNC_6 (TYPE_4__*,int) ;
 int FUNC_7 (TYPE_4__*,char*,int ) ;
 int FUNC_8 (TYPE_4__*,int) ;

void FUNC_9(js_State *VAR_5, int VAR_6)
{
 js_Object *VAR_7;
 int VAR_8;

 if (!FUNC_5(VAR_5, -VAR_6-2))
  FUNC_7(VAR_5, "%s is not callable", FUNC_8(VAR_5, -VAR_6-2));

 VAR_7 = FUNC_6(VAR_5, -VAR_6-2);

 VAR_8 = VAR_0;
 VAR_0 = VAR_4 - VAR_6 - 1;

 if (VAR_7->type == VAR_2) {
  FUNC_4(VAR_5, VAR_7->u.f.function->name, VAR_7->u.f.function->filename, VAR_7->u.f.function->line);
  if (VAR_7->u.f.function->lightweight)
   FUNC_2(VAR_5, VAR_6, VAR_7->u.f.function, VAR_7->u.f.scope);
  else
   FUNC_1(VAR_5, VAR_6, VAR_7->u.f.function, VAR_7->u.f.scope);
  --VAR_5->tracetop;
 } else if (VAR_7->type == VAR_3) {
  FUNC_4(VAR_5, VAR_7->u.f.function->name, VAR_7->u.f.function->filename, VAR_7->u.f.function->line);
  FUNC_3(VAR_5, VAR_6, VAR_7->u.f.function, VAR_7->u.f.scope);
  --VAR_5->tracetop;
 } else if (VAR_7->type == VAR_1) {
  FUNC_4(VAR_5, VAR_7->u.c.name, "native", 0);
  FUNC_0(VAR_5, VAR_6, VAR_7->u.c.length, VAR_7->u.c.function);
  --VAR_5->tracetop;
 }

 VAR_0 = VAR_8;
}
