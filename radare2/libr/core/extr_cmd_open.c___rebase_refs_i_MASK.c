
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut64 ;
struct __rebase_struct {TYPE_1__* core; scalar_t__ type; scalar_t__ diff; } ;
struct TYPE_4__ {int type; int addr; int at; } ;
struct TYPE_3__ {int anal; } ;
typedef TYPE_2__ RAnalRef ;


 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static bool FUNC_1(void *VAR_0, const ut64 VAR_1, const void *VAR_2) {
 struct __rebase_struct *VAR_3 = (void*)VAR_0;
 RAnalRef *VAR_4 = (RAnalRef *)VAR_2;
 VAR_4->addr += VAR_3->diff;
 VAR_4->at += VAR_3->diff;
 if (VAR_3->type) {
  FUNC_0 (VAR_3->core->anal, VAR_4->addr, VAR_4->at, VAR_4->type);
 } else {
  FUNC_0 (VAR_3->core->anal, VAR_4->at, VAR_4->addr, VAR_4->type);
 }
 return 1;
}
