
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_desc {int entry_number; int base_addr; int limit; int seg_32bit; int limit_in_pages; int useable; int seg_not_present; int read_exec_only; int contents; } ;
typedef int desc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct user_desc*,struct user_desc*,int) ;
 struct user_desc* FUNC_2 (int *,int,int,int,int,int ) ;
 int FUNC_3 (struct user_desc*,int) ;
 int FUNC_4 (char*,...) ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (int ,int,struct user_desc*,...) ;

__attribute__((used)) static unsigned short FUNC_6(void)
{






 if (FUNC_5(VAR_6, VAR_0, 0) != 0)
  FUNC_0(1, "ARCH_SET_GS");


 struct user_desc VAR_9 = {
  .entry_number = 0,
  .base_addr = 0xBAADF00D,
  .limit = 0xfffff,
  .seg_32bit = 1,
  .contents = 0,
  .read_exec_only = 0,
  .limit_in_pages = 1,
  .seg_not_present = 0,
  .useable = 0
 };
 if (FUNC_5(VAR_7, 1, &VAR_9, sizeof(VAR_9)) == 0) {
  FUNC_4("\tusing LDT slot 0\n");
  asm volatile ("mov %0, %%gs" : : "rm" ((unsigned short)0x7));
  return 0x7;
 } else {


  struct user_desc *VAR_10 = FUNC_2(
   ((void*)0), sizeof(VAR_9),
   VAR_4 | VAR_5,
   VAR_3 | VAR_2 | VAR_1, -1, 0);
  FUNC_1(VAR_10, &VAR_9, sizeof(VAR_9));

  VAR_10->entry_number = VAR_8;


  long VAR_11;
  asm volatile ("int $0x80"
         : "=a" (VAR_11) : "a" (243), "b" (VAR_10)
         : "r8", "r9", "r10", "r11");
  FUNC_1(&VAR_9, VAR_10, sizeof(VAR_9));
  FUNC_3(VAR_10, sizeof(VAR_9));

  if (VAR_11 != 0) {
   FUNC_4("[NOTE]\tcould not create a segment -- test won't do anything\n");
   return 0;
  }
  FUNC_4("\tusing GDT slot %d\n", VAR_9.entry_number);
  VAR_8 = VAR_9.entry_number;

  unsigned short VAR_12 = (unsigned short)((VAR_9.entry_number << 3) | 0x3);
  asm volatile ("mov %0, %%gs" : : "rm" (VAR_12));
  return VAR_12;
 }
}
