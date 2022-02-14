
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unset_foreach_t {int n; int f; } ;
typedef int RFlagItem ;


 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static bool FUNC_2(RFlagItem *VAR_0, void *VAR_1) {
 struct unset_foreach_t *VAR_2 = (struct unset_foreach_t *)VAR_1;
 if (FUNC_0 (VAR_2->f, VAR_0)) {
  return 1;
 }
 FUNC_1 (VAR_2->f, VAR_0);
 VAR_2->n++;
 return 1;
}
