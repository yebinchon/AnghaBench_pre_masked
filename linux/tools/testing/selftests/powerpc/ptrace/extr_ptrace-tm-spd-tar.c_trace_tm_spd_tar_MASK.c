
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int* VAR_10 ;
 int FUNC_1 (char*,char*,int,unsigned long,unsigned long) ;
 char* VAR_11 ;
 char* VAR_12 ;
 char* VAR_13 ;
 int FUNC_2 (int ,unsigned long*) ;
 int FUNC_3 (int ,unsigned long*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (unsigned long*,int ,int ,int ) ;
 int FUNC_7 (int ,int,unsigned long,unsigned long) ;

int FUNC_8(pid_t VAR_14)
{
 unsigned long VAR_15[3];

 FUNC_0(FUNC_4(VAR_14));
 FUNC_0(FUNC_2(VAR_14, VAR_15));
 FUNC_1("%-30s TAR: %lu PPR: %lx DSCR: %lu\n",
   VAR_12, VAR_15[0], VAR_15[1], VAR_15[2]);

 FUNC_0(FUNC_6(VAR_15, VAR_7, VAR_4, VAR_1));
 FUNC_0(FUNC_3(VAR_14, VAR_15));
 FUNC_1("%-30s TAR: %lu PPR: %lx DSCR: %lu\n",
   VAR_11, VAR_15[0], VAR_15[1], VAR_15[2]);

 FUNC_0(FUNC_6(VAR_15, VAR_6, VAR_3, VAR_0));
 FUNC_0(FUNC_7(VAR_14, VAR_8, VAR_5, VAR_2));
 FUNC_1("%-30s TAR: %u PPR: %lx DSCR: %u\n",
   VAR_13, VAR_8, VAR_5, VAR_2);

 VAR_10[0] = 1;
 VAR_10[1] = 1;
 FUNC_0(FUNC_5(VAR_14));
 return VAR_9;
}
