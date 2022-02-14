
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int *,int *,int *,int *) ;
 int FUNC_6 (int *,int *,int *,int *,char) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(uint8 * VAR_8, uint8 * VAR_9, int VAR_10)
{
 uint8 VAR_11[48];
 uint8 VAR_12[48];
 uint8 VAR_13[48];


 FUNC_1(VAR_11, VAR_8, 24);
 FUNC_1(VAR_11 + 24, VAR_9, 24);


 FUNC_6(VAR_12, VAR_11, VAR_8, VAR_9, 'A');
 FUNC_6(VAR_13, VAR_12, VAR_8, VAR_9, 'X');


 FUNC_1(VAR_7, VAR_13, 16);


 FUNC_5(VAR_3, &VAR_13[16], VAR_8, VAR_9);
 FUNC_5(VAR_5, &VAR_13[32], VAR_8, VAR_9);

 if (VAR_10 == 1)
 {
  FUNC_0(("40-bit encryption enabled\n"));
  FUNC_7(VAR_7);
  FUNC_7(VAR_3);
  FUNC_7(VAR_5);
  VAR_2 = 8;
 }
 else
 {
  FUNC_0(("rc_4_key_size == %d, 128-bit encryption enabled\n", VAR_10));
  VAR_2 = 16;
 }


 FUNC_1(VAR_4, VAR_3, 16);
 FUNC_1(VAR_6, VAR_5, 16);



    FUNC_3(VAR_0);
 VAR_0 = FUNC_2();
 FUNC_4(VAR_0, (char *)VAR_3, VAR_2);

    FUNC_3(VAR_1);
 VAR_1 = FUNC_2();
 FUNC_4(VAR_1, (char *)VAR_5, VAR_2);
}
