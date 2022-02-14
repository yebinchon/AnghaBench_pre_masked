
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct flag_relocate_t {scalar_t__ neg_mask; scalar_t__ off; scalar_t__ off_mask; scalar_t__ to; int n; int f; } ;
struct TYPE_4__ {scalar_t__ offset; } ;
typedef TYPE_1__ RFlagItem ;


 int FUNC_0 (int ,TYPE_1__*,scalar_t__,int,int) ;

__attribute__((used)) static bool FUNC_1(RFlagItem *VAR_0, void *VAR_1) {
 struct flag_relocate_t *VAR_2 = (struct flag_relocate_t *)VAR_1;
 ut64 VAR_3 = VAR_0->offset & VAR_2->neg_mask;
 ut64 VAR_4 = VAR_2->off & VAR_2->neg_mask;
 if (VAR_3 == VAR_4) {
  ut64 VAR_5 = VAR_0->offset & VAR_2->off_mask;
  ut64 VAR_6 = VAR_2->to & VAR_2->off_mask;
  FUNC_0 (VAR_2->f, VAR_0, (VAR_2->to & VAR_2->neg_mask) + VAR_5 + VAR_6, 0, 0);
  VAR_2->n++;
 }
 return 1;
}
