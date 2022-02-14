
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,double,double) ;
 int FUNC_6 (double) ;

int FUNC_7(int VAR_0, char **VAR_1)
{
 double VAR_2, VAR_3;
 int VAR_4, VAR_5, VAR_6 = 0;

 FUNC_0();

 FUNC_3("Checking response to frequency step:\n");
 FUNC_3("  Step           1st interval              2nd interval\n");
 FUNC_3("             Freq    Dev     Max       Freq    Dev     Max\n");

 for (VAR_4 = 2; VAR_4 >= 0; VAR_4--) {
  for (VAR_5 = 0; VAR_5 < 5; VAR_5++) {
   VAR_2 = (FUNC_4() % (1 << 24) - (1 << 23)) / 65536e6;
   VAR_3 = 10e-6 * (1 << (6 * VAR_4));
   VAR_6 += FUNC_5(0, VAR_2, VAR_3);
  }
 }

 FUNC_6(0.0);

 if (VAR_6)
  return FUNC_1();

 return FUNC_2();
}
