
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ offset; TYPE_1__* print; } ;
struct TYPE_6__ {scalar_t__ cur; int ocur; } ;
typedef TYPE_1__ RPrint ;
typedef TYPE_2__ RCore ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;

void FUNC_2(RCore *VAR_0) {
 RPrint *VAR_1 = VAR_0->print;
 if (VAR_1->cur >= 0) {
  return;
 }
 int VAR_2 = FUNC_1 (VAR_0, VAR_0->offset + VAR_1->cur);
 if (VAR_2 < 1) {
  VAR_2 = 1;
 }
 FUNC_0 (VAR_0, -VAR_2);
 VAR_1->cur += VAR_2;
 if (VAR_1->ocur != -1) {
  VAR_1->ocur += VAR_2;
 }
}
