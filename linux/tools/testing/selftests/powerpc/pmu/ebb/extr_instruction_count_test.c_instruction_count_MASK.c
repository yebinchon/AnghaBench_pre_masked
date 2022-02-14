
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int exclude_kernel; int exclude_hv; int exclude_idle; } ;
struct event {TYPE_1__ attr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (struct event*) ;
 int FUNC_3 (struct event*,int,int ,int) ;
 int FUNC_4 (struct event*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct event*) ;
 int FUNC_9 (struct event*,int,char*) ;
 int FUNC_10 (struct event*) ;
 int FUNC_11 (struct event*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int) ;
 int VAR_3 ;
 int FUNC_14 (char*,...) ;
 int VAR_4 ;
 int FUNC_15 (int ) ;

int FUNC_16(void)
{
 struct event VAR_5;
 uint64_t VAR_6;

 FUNC_1(!FUNC_7());

 FUNC_9(&VAR_5, 0x400FA, "PM_RUN_INST_CMPL");
 FUNC_10(&VAR_5);
 VAR_5.attr.exclude_kernel = 1;
 VAR_5.attr.exclude_hv = 1;
 VAR_5.attr.exclude_idle = 1;

 FUNC_0(FUNC_11(&VAR_5));
 FUNC_0(FUNC_4(&VAR_5));

 VAR_4 = VAR_0;

 FUNC_15(VAR_3);
 FUNC_13(VAR_2, FUNC_12(VAR_2) & ~VAR_1);
 FUNC_6();

 VAR_6 = FUNC_2(&VAR_5);
 FUNC_14("Overhead of null loop: %lu instructions\n", VAR_6);


 FUNC_0(FUNC_3(&VAR_5, 0x100000, VAR_6, 1));


 FUNC_0(FUNC_3(&VAR_5, 0xa00000, VAR_6, 1));


 FUNC_0(FUNC_3(&VAR_5, 0x6400000, VAR_6, 1));


 FUNC_0(FUNC_3(&VAR_5, 0x40000000, VAR_6, 1));


 FUNC_0(FUNC_3(&VAR_5, 0x400000000, VAR_6, 1));


 FUNC_0(FUNC_3(&VAR_5, 0x1000000000, VAR_6, 1));


 FUNC_0(FUNC_3(&VAR_5, 0x2000000000, VAR_6, 1));

 FUNC_5();
 FUNC_8(&VAR_5);

 FUNC_14("Finished OK\n");

 return 0;
}
