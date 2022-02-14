
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_4__ {int f; } ;
struct TYPE_5__ {TYPE_1__ flb; int (* flg_class_set ) (int ,char const*,int ,int ) ;} ;
typedef TYPE_2__ RAnal ;


 int FUNC_0 (int ,char const*,int ,int ) ;

__attribute__((used)) static void FUNC_1(RAnal *VAR_0, const char *VAR_1, ut64 VAR_2) {
 if (!VAR_1 || !VAR_0->flg_class_set) {
  return;
 }
 VAR_0->flg_class_set (VAR_0->flb.f, VAR_1, VAR_2, 0);
}
