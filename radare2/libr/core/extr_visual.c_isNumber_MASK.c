
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* print; } ;
struct TYPE_4__ {scalar_t__ cur_enabled; } ;
typedef TYPE_2__ RCore ;



__attribute__((used)) static bool FUNC_0(RCore *VAR_0, int VAR_1) {
 if (VAR_1 > '0' && VAR_1 <= '9') {
  return 1;
 }
 if (VAR_0->print->cur_enabled) {
  return VAR_1 == '0';
 }
 return 0;
}
