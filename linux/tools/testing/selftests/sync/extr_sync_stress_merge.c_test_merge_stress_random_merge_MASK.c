
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fence_map ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int*,int,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,char*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (char*,int,int) ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 (int *) ;

int FUNC_14(void)
{
 int VAR_0, VAR_1, VAR_2;
 int VAR_3 = 32;
 int VAR_4 = 1024 * 32;
 int VAR_5[VAR_3];
 int VAR_6[VAR_3];
 int VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11, VAR_12, VAR_13;

 FUNC_3(FUNC_13(((void*)0)));

 for (VAR_0 = 0; VAR_0 < VAR_3; VAR_0++)
  VAR_5[VAR_0] = FUNC_7();

 VAR_7 = FUNC_4(VAR_5[0], "fence", 0);
 VAR_10 = FUNC_6(VAR_7);
 FUNC_0(VAR_10, "Failure creating fence\n");

 FUNC_1(VAR_6, -1, sizeof(VAR_6));
 VAR_6[0] = 0;





 for (VAR_0 = 0; VAR_0 < VAR_4; VAR_0++) {

  VAR_12 = FUNC_2() % VAR_3;
  VAR_11 = VAR_5[VAR_12];
  VAR_13 = FUNC_2();


  if (VAR_6[VAR_12] == -1)
   VAR_6[VAR_12] = VAR_13;
  else if (VAR_6[VAR_12] < VAR_13)
   VAR_6[VAR_12] = VAR_13;


  VAR_8 = FUNC_4(VAR_11, "fence", VAR_13);
  VAR_9 = FUNC_11("merge", VAR_8, VAR_7);
  FUNC_5(VAR_8);
  FUNC_5(VAR_7);
  VAR_7 = VAR_9;

  VAR_10 = FUNC_6(VAR_9);
  FUNC_0(VAR_10, "Failure creating fence i\n");
 }

 VAR_1 = 0;
 for (VAR_0 = 0; VAR_0 < VAR_3; VAR_0++)
  if (VAR_6[VAR_0] != -1)
   VAR_1++;


 FUNC_0(FUNC_10(VAR_7) == VAR_1,
        "Quantity of elements not matching\n");


 for (VAR_0 = 0; VAR_0 < VAR_3; VAR_0++) {
  if (VAR_6[VAR_0] != -1) {
   VAR_2 = FUNC_12(VAR_7, 0);
   FUNC_0(VAR_2 == 0,
          "Failure waiting on fence until timeout\n");

   FUNC_9(VAR_5[VAR_0], VAR_6[VAR_0]);
  }
 }


 VAR_2 = FUNC_12(VAR_7, 0);
 FUNC_0(VAR_2 > 0, "Failure triggering fence\n");

 FUNC_5(VAR_7);

 for (VAR_0 = 0; VAR_0 < VAR_3; VAR_0++)
  FUNC_8(VAR_5[VAR_0]);

 return 0;
}
