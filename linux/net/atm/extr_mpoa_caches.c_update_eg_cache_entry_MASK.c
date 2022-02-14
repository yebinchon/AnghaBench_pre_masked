
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int holding_time; } ;
struct TYPE_5__ {TYPE_1__ ctrl_info; int entry_state; int time; } ;
typedef TYPE_2__ eg_cache_entry ;


 int VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(eg_cache_entry *VAR_1, uint16_t VAR_2)
{
 VAR_1->time = FUNC_0();
 VAR_1->entry_state = VAR_0;
 VAR_1->ctrl_info.holding_time = VAR_2;
}
