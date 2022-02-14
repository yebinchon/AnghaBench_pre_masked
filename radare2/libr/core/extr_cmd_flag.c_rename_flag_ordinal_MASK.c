
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rename_flag_t {TYPE_1__* core; int count; int pfx; } ;
struct TYPE_2__ {int flags; } ;
typedef int RFlagItem ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *,char*) ;
 char* FUNC_2 (char*,int ,int ) ;

__attribute__((used)) static bool FUNC_3(RFlagItem *VAR_0, void *VAR_1) {
 struct rename_flag_t *VAR_2 = (struct rename_flag_t *)VAR_1;
 char *VAR_3 = FUNC_2 ("%s%d", VAR_2->pfx, VAR_2->count++);
 if (!VAR_3) {
  return 0;
 }
 FUNC_1 (VAR_2->core->flags, VAR_0, VAR_3);
 FUNC_0 (VAR_3);
 return 1;
}
