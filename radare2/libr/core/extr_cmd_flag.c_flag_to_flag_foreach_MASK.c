
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct flag_to_flag_t {scalar_t__ next; scalar_t__ offset; } ;
struct TYPE_3__ {scalar_t__ offset; } ;
typedef TYPE_1__ RFlagItem ;



__attribute__((used)) static bool FUNC_0(RFlagItem *VAR_0, void *VAR_1) {
 struct flag_to_flag_t *VAR_2 = (struct flag_to_flag_t *)VAR_1;
 if (VAR_0->offset < VAR_2->next && VAR_0->offset > VAR_2->offset) {
  VAR_2->next = VAR_0->offset;
 }
 return 1;
}
