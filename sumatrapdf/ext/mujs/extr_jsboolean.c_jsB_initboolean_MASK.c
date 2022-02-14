
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_4__* Boolean_prototype; } ;
typedef TYPE_2__ js_State ;
struct TYPE_9__ {scalar_t__ boolean; } ;
struct TYPE_11__ {TYPE_1__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,char*,int ,int ) ;
 int FUNC_1 (TYPE_2__*,char*,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ,char*,int) ;
 int FUNC_3 (TYPE_2__*,TYPE_4__*) ;

void FUNC_4(js_State *VAR_5)
{
 VAR_5->Boolean_prototype->u.boolean = 0;

 FUNC_3(VAR_5, VAR_5->Boolean_prototype);
 {
  FUNC_0(VAR_5, "Boolean.prototype.toString", VAR_0, 0);
  FUNC_0(VAR_5, "Boolean.prototype.valueOf", VAR_1, 0);
 }
 FUNC_2(VAR_5, VAR_3, VAR_4, "Boolean", 1);
 FUNC_1(VAR_5, "Boolean", VAR_2);
}
