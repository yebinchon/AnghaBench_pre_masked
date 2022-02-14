
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct user_desc {int dummy; } ;
struct TYPE_5__ {int entry_number; unsigned long base_addr; int limit; int seg_32bit; int read_exec_only; int limit_in_pages; int seg_not_present; scalar_t__ useable; scalar_t__ contents; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_0 (int,char*) ;
 int VAR_7 ;
 scalar_t__ FUNC_1 () ;
 TYPE_1__* VAR_8 ;
 TYPE_1__* VAR_9 ;
 TYPE_1__* FUNC_2 (int *,int,int,int,int,int ) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void FUNC_4(void)
{
 VAR_8 = FUNC_2(((void*)0), 2 * sizeof(struct user_desc),
        VAR_4 | VAR_5,
        VAR_1 | VAR_3 | VAR_0, -1, 0);
 if (VAR_8 == VAR_2)
  FUNC_0(1, "mmap");

 VAR_8->entry_number = -1;
 VAR_8->base_addr = (unsigned long)&VAR_6[1];
 VAR_8->limit = 0xfffff;
 VAR_8->seg_32bit = 1;
 VAR_8->contents = 0;
 VAR_8->read_exec_only = 0;
 VAR_8->limit_in_pages = 1;
 VAR_8->seg_not_present = 0;
 VAR_8->useable = 0;

 if (FUNC_1() == 0) {
  VAR_7 = VAR_8->entry_number;
  FUNC_3("[NOTE]\tset_thread_area is available; will use GDT index %d\n", VAR_7);
 } else {
  FUNC_3("[NOTE]\tset_thread_area is unavailable\n");
 }

 VAR_9 = VAR_8 + 1;
 VAR_9->entry_number = VAR_7;
 VAR_9->read_exec_only = 1;
 VAR_9->seg_not_present = 1;
}
