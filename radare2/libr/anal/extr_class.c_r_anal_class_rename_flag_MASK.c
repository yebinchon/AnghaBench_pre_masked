
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_7__ {int f; int (* unset ) (int ,TYPE_2__*) ;} ;
struct TYPE_9__ {TYPE_1__ flb; int (* flg_class_set ) (int ,char const*,int ,int ) ;TYPE_2__* (* flg_class_get ) (int ,char const*) ;} ;
struct TYPE_8__ {int offset; } ;
typedef TYPE_2__ RFlagItem ;
typedef TYPE_3__ RAnal ;


 TYPE_2__* FUNC_0 (int ,char const*) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ,char const*,int ,int ) ;

__attribute__((used)) static void FUNC_3(RAnal *VAR_0, const char *VAR_1, const char *VAR_2) {
 if (!VAR_1 || !VAR_2 || !VAR_0->flb.unset || !VAR_0->flg_class_get || !VAR_0->flg_class_set) {
  return;
 }
 RFlagItem *VAR_3 = VAR_0->flg_class_get (VAR_0->flb.f, VAR_1);
 if (!VAR_3) {
  return;
 }
 ut64 VAR_4 = VAR_3->offset;
 VAR_0->flb.unset (VAR_0->flb.f, VAR_3);
 VAR_0->flg_class_set (VAR_0->flb.f, VAR_2, VAR_4, 0);
}
