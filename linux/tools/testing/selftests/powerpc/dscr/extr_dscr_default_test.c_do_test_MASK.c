
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned long VAR_1 ;
 int FUNC_1 (int ,char*,unsigned long,unsigned long,unsigned long) ;
 unsigned long FUNC_2 () ;
 unsigned long FUNC_3 () ;
 int FUNC_4 (int*) ;
 int* VAR_2 ;
 int FUNC_5 () ;
 unsigned long VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void *FUNC_6(void *VAR_5)
{
 unsigned long VAR_6 = (unsigned long)VAR_5;
 unsigned long VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  unsigned long VAR_8, VAR_9, VAR_10;
  unsigned long VAR_11, VAR_12;

  VAR_11 = FUNC_0(VAR_3);
  if (VAR_11 & 1)
   continue;
  FUNC_5();

  VAR_8 = VAR_1;
  VAR_9 = FUNC_2();
  VAR_10 = FUNC_3();

  FUNC_5();
  VAR_12 = VAR_3;

  if (VAR_11 != VAR_12)
   continue;

  if (VAR_9 != VAR_8) {
   FUNC_1(VAR_4, "thread %ld kernel DSCR should be %ld "
    "but is %ld\n", VAR_6, VAR_8, VAR_9);
   VAR_2[VAR_6] = 1;
   FUNC_4(&VAR_2[VAR_6]);
  }

  if (VAR_10 != VAR_8) {
   FUNC_1(VAR_4, "thread %ld user DSCR should be %ld "
    "but is %ld\n", VAR_6, VAR_8, VAR_10);
   VAR_2[VAR_6] = 1;
   FUNC_4(&VAR_2[VAR_6]);
  }
 }
 VAR_2[VAR_6] = 0;
 FUNC_4(&VAR_2[VAR_6]);
}
