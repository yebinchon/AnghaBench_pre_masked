
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int flags; int high_offset; scalar_t__ always0; int sel; int low_offset; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int ) ;

void FUNC_2(int VAR_2, u32 VAR_3) {
    VAR_1[VAR_2].low_offset = FUNC_1(VAR_3);
    VAR_1[VAR_2].sel = VAR_0;
    VAR_1[VAR_2].always0 = 0;
    VAR_1[VAR_2].flags = 0x8E;
    VAR_1[VAR_2].high_offset = FUNC_0(VAR_3);
}
