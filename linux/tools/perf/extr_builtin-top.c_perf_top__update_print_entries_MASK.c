
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ws_row; } ;
struct perf_top {TYPE_1__ winsize; scalar_t__ print_entries; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct perf_top *VAR_1)
{
 VAR_1->print_entries = VAR_1->winsize.ws_row - VAR_0;
}
