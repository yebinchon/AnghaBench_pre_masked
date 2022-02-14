
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int ,char*,unsigned long,unsigned long) ;
 unsigned long FUNC_1 () ;
 unsigned long FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (int ) ;
 int VAR_2 ;
 double FUNC_8 (int ) ;

int FUNC_9(void)
{
 unsigned long VAR_3, VAR_4 = 0;

 FUNC_7(FUNC_3());
 FUNC_5(VAR_4);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  unsigned long VAR_5, VAR_6;
  double VAR_7 = FUNC_8(FUNC_4());

  if (VAR_7 < 0.001) {
   VAR_4++;
   if (VAR_4 > VAR_1)
    VAR_4 = 0;

   FUNC_5(VAR_4);
  }

  VAR_5 = FUNC_1();
  if (VAR_5 != VAR_4) {
   FUNC_0(VAR_2, "Kernel DSCR should be %ld but "
     "is %ld\n", VAR_4, VAR_5);
   return 1;
  }

  VAR_7 = FUNC_8(FUNC_4());
  if (VAR_7 < 0.001) {
   VAR_4++;
   if (VAR_4 > VAR_1)
    VAR_4 = 0;

   FUNC_6(VAR_4);
  }

  VAR_6 = FUNC_2();
  if (VAR_6 != VAR_4) {
   FUNC_0(VAR_2, "User DSCR should be %ld but "
     "is %ld\n", VAR_4, VAR_6);
   return 1;
  }
 }
 return 0;
}
