
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int row; int col; } ;
struct TYPE_5__ {int time; scalar_t__ pressed; TYPE_1__ key; } ;
typedef TYPE_2__ keyevent_t ;


 int FUNC_0 (char*,int,char,int ) ;

void FUNC_1(keyevent_t VAR_0) { FUNC_0("%04X%c(%u)", (VAR_0.key.row << 8 | VAR_0.key.col), (VAR_0.pressed ? 'd' : 'u'), VAR_0.time); }
