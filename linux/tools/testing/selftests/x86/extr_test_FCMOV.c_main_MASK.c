
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
 double FUNC_0 (int ) ;
 double FUNC_1 (int ) ;
 double FUNC_2 (int ) ;
 double FUNC_3 (int ) ;
 double FUNC_4 (int ) ;
 double FUNC_5 (int ) ;
 double FUNC_6 (int ) ;
 double FUNC_7 (int ) ;
 int FUNC_8 (char*,...) ;
 int VAR_6 ;
 int FUNC_9 (int ,int ) ;

int FUNC_10(int VAR_7, char **VAR_8, char **VAR_9)
{
 int VAR_10 = 0;





 FUNC_9(VAR_3, VAR_6);
 FUNC_9(VAR_2, VAR_6);
 FUNC_9(VAR_4, VAR_6);

 FUNC_8("[RUN]\tTesting fcmovCC instructions\n");

 VAR_10 |= !(FUNC_0(0) == 1.0); VAR_10 |= !(FUNC_3(0) != 1.0);
 VAR_10 |= !(FUNC_2(0) == 1.0); VAR_10 |= !(FUNC_5(0) != 1.0);
 VAR_10 |= !(FUNC_1(0) == 1.0); VAR_10 |= !(FUNC_4(0) != 1.0);
 VAR_10 |= !(FUNC_7(0) == 1.0); VAR_10 |= !(FUNC_6(0) != 1.0);

 VAR_10 |= !(FUNC_0(VAR_0) != 1.0); VAR_10 |= !(FUNC_3(VAR_0) == 1.0);
 VAR_10 |= !(FUNC_2(VAR_0) == 1.0); VAR_10 |= !(FUNC_5(VAR_0) != 1.0);
 VAR_10 |= !(FUNC_1(VAR_0) != 1.0); VAR_10 |= !(FUNC_4(VAR_0) == 1.0);
 VAR_10 |= !(FUNC_7(VAR_0) == 1.0); VAR_10 |= !(FUNC_6(VAR_0) != 1.0);

 VAR_10 |= !(FUNC_0(VAR_5) == 1.0); VAR_10 |= !(FUNC_3(VAR_5) != 1.0);
 VAR_10 |= !(FUNC_2(VAR_5) != 1.0); VAR_10 |= !(FUNC_5(VAR_5) == 1.0);
 VAR_10 |= !(FUNC_1(VAR_5) != 1.0); VAR_10 |= !(FUNC_4(VAR_5) == 1.0);
 VAR_10 |= !(FUNC_7(VAR_5) == 1.0); VAR_10 |= !(FUNC_6(VAR_5) != 1.0);

 VAR_10 |= !(FUNC_0(VAR_1) == 1.0); VAR_10 |= !(FUNC_3(VAR_1) != 1.0);
 VAR_10 |= !(FUNC_2(VAR_1) == 1.0); VAR_10 |= !(FUNC_5(VAR_1) != 1.0);
 VAR_10 |= !(FUNC_1(VAR_1) == 1.0); VAR_10 |= !(FUNC_4(VAR_1) != 1.0);
 VAR_10 |= !(FUNC_7(VAR_1) != 1.0); VAR_10 |= !(FUNC_6(VAR_1) == 1.0);

        if (!VAR_10)
                FUNC_8("[OK]\tfcmovCC\n");
 else
  FUNC_8("[FAIL]\tfcmovCC errors: %d\n", VAR_10);

 return VAR_10;
}
