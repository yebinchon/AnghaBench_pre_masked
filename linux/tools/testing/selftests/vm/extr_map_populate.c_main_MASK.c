
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int,char*) ;
 unsigned long* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int,unsigned long*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 unsigned long* FUNC_6 (int ,int ,int,int ,int ,int ) ;
 int FUNC_7 (unsigned long*,int ,int ) ;
 int FUNC_8 (int,unsigned long*,int) ;
 int FUNC_9 (int ,int ,int ,int*) ;
 int * FUNC_10 () ;

int FUNC_11(int VAR_8, char **VAR_9)
{
 int VAR_10[2], VAR_11, VAR_12;
 FILE *VAR_13;
 unsigned long *VAR_14;

 VAR_13 = FUNC_10();
 FUNC_0(VAR_13 == 0, "tmpfile()");

 VAR_12 = FUNC_5(FUNC_3(VAR_13), VAR_2);
 FUNC_0(VAR_12, "ftruncate()");

 VAR_14 = FUNC_6(0, VAR_2, VAR_5 | VAR_6,
   VAR_1, FUNC_3(VAR_13), 0);
 FUNC_0(VAR_14 == VAR_0, "mmap()");

 *VAR_14 = 0xdeadbabe;

 VAR_12 = FUNC_7(VAR_14, VAR_2, VAR_3);
 FUNC_0(VAR_12, "msync()");

 VAR_12 = FUNC_9(VAR_4, VAR_7, 0, VAR_10);
 FUNC_0(VAR_12, "socketpair()");

 VAR_11 = FUNC_4();
 FUNC_0(VAR_11 == -1, "fork()");

 if (VAR_11) {
  VAR_12 = FUNC_2(VAR_10[0]);
  FUNC_0(VAR_12, "close()");

  return FUNC_8(VAR_10[1], VAR_14, VAR_11);
 }

 VAR_12 = FUNC_2(VAR_10[1]);
 FUNC_0(VAR_12, "close()");

 return FUNC_1(VAR_10[0], VAR_14, FUNC_3(VAR_13));
}
