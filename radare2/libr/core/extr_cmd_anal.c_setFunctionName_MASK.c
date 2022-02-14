
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_10__ {int (* on_fcn_rename ) (TYPE_4__*,int ,TYPE_3__*,char*) ;} ;
struct TYPE_13__ {int user; TYPE_1__ cb; } ;
struct TYPE_12__ {char* name; } ;
struct TYPE_11__ {TYPE_4__* anal; } ;
typedef TYPE_2__ RCore ;
typedef TYPE_3__ RAnalFunction ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (TYPE_2__*,int ,char const*,int) ;
 TYPE_3__* FUNC_2 (TYPE_4__*,int ,int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (TYPE_4__*,int ,TYPE_3__*,char*) ;

__attribute__((used)) static bool FUNC_5(RCore *VAR_1, ut64 VAR_2, const char *VAR_3, bool VAR_4) {
 FUNC_3 (VAR_1 && VAR_3, 0);
 char *VAR_5 = FUNC_1 (VAR_1, VAR_2, VAR_3, VAR_4);
 RAnalFunction *VAR_6 = FUNC_2 (VAR_1->anal, VAR_2, VAR_0);
 if (VAR_6) {
  FUNC_0 (VAR_6->name);
  VAR_6->name = VAR_5;
  if (VAR_1->anal->cb.on_fcn_rename) {
   VAR_1->anal->cb.on_fcn_rename (VAR_1->anal,
     VAR_1->anal->user, VAR_6, VAR_5);
  }
  return 1;
 }
 FUNC_0 (VAR_5);
 return 0;
}
