
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_3__ {char* litstr; } ;
struct TYPE_4__ {TYPE_1__ u; int type; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(js_State *VAR_3)
{
 VAR_1[VAR_2].type = VAR_0;
 VAR_1[VAR_2].u.litstr = "stack overflow";
 ++VAR_2;
 FUNC_0(VAR_3);
}
