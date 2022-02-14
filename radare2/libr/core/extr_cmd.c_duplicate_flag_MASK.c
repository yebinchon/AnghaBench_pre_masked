
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct duplicate_flag_t {int ret; int word; } ;
struct TYPE_6__ {int name; } ;
typedef TYPE_1__ RFlagItem ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static bool FUNC_3(RFlagItem *VAR_0, void *VAR_1) {
 struct duplicate_flag_t *VAR_2 = (struct duplicate_flag_t *)VAR_1;

 if (FUNC_2 (VAR_0->name, VAR_2->word)) {
  RFlagItem *VAR_3 = FUNC_0 (VAR_0);
  if (!VAR_3) {
   return 0;
  }
  FUNC_1 (VAR_2->ret, VAR_3);
 }
 return 1;
}
