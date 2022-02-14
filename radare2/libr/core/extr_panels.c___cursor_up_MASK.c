
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_7__ {int offset; TYPE_1__* print; } ;
struct TYPE_6__ {int cur; } ;
typedef TYPE_1__ RPrint ;
typedef TYPE_2__ RCore ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int,int,int*) ;

void FUNC_2(RCore *VAR_0) {
 RPrint *VAR_1 = VAR_0->print;
 ut64 VAR_2, VAR_3 = VAR_0->offset + VAR_1->cur;
 if (FUNC_1 (VAR_0, VAR_3, 1, &VAR_2)) {
  const int VAR_4 = VAR_3 - VAR_2;
  VAR_1->cur -= VAR_4;
 } else {
  VAR_1->cur -= 4;
 }
 FUNC_0 (VAR_0);
}
