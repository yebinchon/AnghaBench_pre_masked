
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int f; int (* unset_name ) (int ,char const*) ;} ;
struct TYPE_5__ {TYPE_1__ flb; scalar_t__ (* flg_class_get ) (int ,char const*) ;} ;
typedef TYPE_2__ RAnal ;


 scalar_t__ FUNC_0 (int ,char const*) ;
 int FUNC_1 (int ,char const*) ;

__attribute__((used)) static void FUNC_2(RAnal *VAR_0, const char *VAR_1) {
 if (!VAR_1 || !VAR_0->flb.unset_name || !VAR_0->flg_class_get) {
  return;
 }
 if (VAR_0->flg_class_get (VAR_0->flb.f, VAR_1)) {
  VAR_0->flb.unset_name (VAR_0->flb.f, VAR_1);
 }
}
