
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_15__ {int flags; } ;
struct TYPE_14__ {int addr; } ;
struct TYPE_13__ {TYPE_6__* print; int anal; TYPE_3__* cons; } ;
struct TYPE_12__ {TYPE_2__* context; } ;
struct TYPE_10__ {char* num; char* reg; } ;
struct TYPE_11__ {TYPE_1__ pal; } ;
typedef TYPE_4__ RCore ;
typedef TYPE_5__ RAnalFunction ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 TYPE_5__* FUNC_1 (int ,int ,int ) ;
 char* FUNC_2 (TYPE_6__*,int) ;
 char* FUNC_3 (TYPE_6__*,char*,char const*,char const*,int,int ) ;
 char* FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*,int) ;
 char* FUNC_7 (char*,int ,int ) ;
 char* FUNC_8 (char*) ;
 char* FUNC_9 (char*,char*) ;

__attribute__((used)) static char *FUNC_10(RCore *VAR_2, const char *VAR_3, int VAR_4, ut64 VAR_5) {
 char *VAR_6, *VAR_7 = ((void*)0);
 char *VAR_8 = (char*)VAR_3;
 bool VAR_9 = VAR_2->print->flags & VAR_1;
 const char *VAR_10 = VAR_2->cons->context->pal.num;
 const char *VAR_11 = VAR_2->cons->context->pal.reg;
 RAnalFunction* VAR_12 = FUNC_1 (VAR_2->anal, VAR_5, VAR_0);

 if (!VAR_9) {
  return FUNC_8 (VAR_8);
 }

 VAR_7 = FUNC_9 (VAR_8, "||");
 if (VAR_7) {
  char *VAR_13 = FUNC_6 (VAR_8, VAR_7 - VAR_8);
  char *VAR_14 = FUNC_8 (VAR_7 + 2);
  char *VAR_15 = FUNC_3 (VAR_2->print, VAR_13, VAR_11, VAR_10, 0, VAR_12 ? VAR_12->addr : 0);
  char *VAR_16 = FUNC_3 (VAR_2->print, VAR_14, VAR_11, VAR_10, 0, VAR_12 ? VAR_12->addr : 0);
  char *VAR_17 = FUNC_7 ("%s||%s", FUNC_5 (VAR_15), FUNC_5 (VAR_16));
  FUNC_0 (VAR_15);
  FUNC_0 (VAR_16);
  FUNC_0 (VAR_13);
  FUNC_0 (VAR_14);
  return VAR_17;
 }
 char *VAR_18 = FUNC_8 ("");
 VAR_18 = FUNC_4 (VAR_18, FUNC_2 (VAR_2->print, VAR_4));
 VAR_6 = FUNC_3 (VAR_2->print, VAR_8, VAR_11, VAR_10, 0, VAR_12 ? VAR_12->addr : 0);
 VAR_18 = FUNC_4 (VAR_18, VAR_6);
 FUNC_0 (VAR_6);
 return VAR_18;
}
