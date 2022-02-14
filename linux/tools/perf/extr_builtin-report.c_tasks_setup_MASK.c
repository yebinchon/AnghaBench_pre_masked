
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ordered_events; int no_warn; int fork; int exit; int comm; int mmap2; int mmap; } ;
struct report {TYPE_1__ tool; scalar_t__ mmaps_mode; } ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_1(struct report *VAR_5)
{
 FUNC_0(&VAR_5->tool, 0, sizeof(VAR_5->tool));
 VAR_5->tool.ordered_events = 1;
 if (VAR_5->mmaps_mode) {
  VAR_5->tool.mmap = VAR_3;
  VAR_5->tool.mmap2 = VAR_4;
 }
 VAR_5->tool.comm = VAR_0;
 VAR_5->tool.exit = VAR_1;
 VAR_5->tool.fork = VAR_2;
 VAR_5->tool.no_warn = 1;
}
