
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 () ;
 int FUNC_1 () ;
 unsigned int FUNC_2 () ;
 int FUNC_3 (unsigned long) ;
 int VAR_4 ;
 unsigned long* VAR_5 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;
 int FUNC_7 (unsigned int,int) ;
 int FUNC_8 (unsigned int,int) ;

int FUNC_9(void)
{
 int VAR_6;
 unsigned VAR_7 = FUNC_0();

 FUNC_1();

 FUNC_6();

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  unsigned long VAR_8 = VAR_5[VAR_6];
  int VAR_9 = FUNC_3(VAR_8) << VAR_1;
  FUNC_4("Testing %luMB mmap with shift %x\n", VAR_8 >> 20, VAR_9);
  FUNC_7(VAR_8, VAR_0 | VAR_9);
 }
 FUNC_4("Testing default huge mmap\n");
 FUNC_7(VAR_7, VAR_2);

 FUNC_5("Testing non-huge shmget");
 FUNC_8(FUNC_2(), 0);

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  unsigned long VAR_10 = VAR_5[VAR_6];
  int VAR_11 = FUNC_3(VAR_10) << VAR_3;
  FUNC_4("Testing %luMB shmget with shift %x\n", VAR_10 >> 20, VAR_11);
  FUNC_8(VAR_10, VAR_2 | VAR_11);
 }
 FUNC_5("default huge shmget");
 FUNC_8(VAR_7, VAR_2);

 return 0;
}
