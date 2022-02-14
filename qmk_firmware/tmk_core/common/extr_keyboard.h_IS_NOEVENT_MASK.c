
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int row; int col; } ;
struct TYPE_5__ {scalar_t__ time; TYPE_1__ key; } ;
typedef TYPE_2__ keyevent_t ;



__attribute__((used)) static inline bool FUNC_0(keyevent_t VAR_0) { return VAR_0.time == 0 || (VAR_0.key.row == 255 && VAR_0.key.col == 255); }
