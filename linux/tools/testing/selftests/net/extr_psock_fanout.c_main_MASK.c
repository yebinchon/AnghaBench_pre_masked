
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int,int,int const*,int const*) ;
 int FUNC_6 () ;

int FUNC_7(int VAR_9, char **VAR_10)
{
 const int VAR_11[2][2] = { { 15, 5 }, { 20, 5 } };
 const int VAR_12[2][2] = { { 15, 5 }, { 20, 15 } };
 const int VAR_13[2][2] = { { 10, 10 }, { 18, 17 } };
 const int VAR_14[2][2] = { { 15, 5 }, { 20, 15 } };
 const int VAR_15[2][2] = { { 20, 0 }, { 20, 0 } };
 const int VAR_16[2][2] = { { 0, 20 }, { 0, 20 } };
 const int VAR_17[2][2] = { { 15, 5 }, { 15, 20 } };
 const int VAR_18[2][2] = { { 20, 20}, { 20, 20 } };
 int VAR_19 = 2, VAR_20 = 20, VAR_21;

 FUNC_4();
 FUNC_3();
 FUNC_6();


 VAR_21 = FUNC_5(VAR_5, VAR_19,
       VAR_11[0], VAR_11[1]);
 while (VAR_21) {
  FUNC_0(VAR_8, "info: trying alternate ports (%d)\n", VAR_20);
  VAR_21 = FUNC_5(VAR_5, ++VAR_19,
        VAR_11[0], VAR_11[1]);
  if (!--VAR_20) {
   FUNC_0(VAR_8, "too many collisions\n");
   return 1;
  }
 }

 VAR_21 |= FUNC_5(VAR_5 | VAR_3,
        VAR_19, VAR_12[0], VAR_12[1]);
 VAR_21 |= FUNC_5(VAR_6,
        VAR_19, VAR_13[0], VAR_13[1]);
 VAR_21 |= FUNC_5(VAR_7,
        VAR_19, VAR_14[0], VAR_14[1]);

 VAR_21 |= FUNC_5(VAR_0,
        VAR_19, VAR_17[0], VAR_17[1]);
 VAR_21 |= FUNC_5(VAR_2,
        VAR_19, VAR_17[0], VAR_17[1]);

 FUNC_2(0);
 VAR_21 |= FUNC_5(VAR_1, VAR_19,
        VAR_15[0], VAR_15[1]);
 if (!FUNC_2(1))

  VAR_21 |= FUNC_5(VAR_1, VAR_19,
         VAR_16[0], VAR_16[1]);

 VAR_21 |= FUNC_5(VAR_4, VAR_19,
        VAR_18[0], VAR_18[1]);

 if (VAR_21)
  return 1;

 FUNC_1("OK. All tests passed\n");
 return 0;
}
