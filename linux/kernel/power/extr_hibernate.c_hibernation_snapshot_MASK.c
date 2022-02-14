
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pm_message_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int VAR_6 ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 () ;

int FUNC_18(int VAR_8)
{
 pm_message_t VAR_9;
 int VAR_10;

 FUNC_13();
 VAR_10 = FUNC_8(VAR_8);
 if (VAR_10)
  goto Close;


 VAR_10 = FUNC_6();
 if (VAR_10)
  goto Close;

 VAR_10 = FUNC_5();
 if (VAR_10)
  goto Cleanup;

 if (FUNC_7(VAR_5)) {





  VAR_6 = 1;
  goto Thaw;
 }

 VAR_10 = FUNC_2(VAR_0);
 if (VAR_10) {
  FUNC_1(VAR_1);
  goto Thaw;
 }

 FUNC_15();
 FUNC_12();

 VAR_10 = FUNC_4(VAR_0);

 if (VAR_10 || FUNC_7(VAR_4))
  FUNC_10(VAR_8);
 else
  VAR_10 = FUNC_0(VAR_8);
 if (VAR_10 || !VAR_7)
  FUNC_16();

 VAR_9 = VAR_7 ? (VAR_10 ? VAR_1 : VAR_3) : VAR_2;
 FUNC_3(VAR_9);

 if (VAR_10 || !VAR_7)
  FUNC_11();

 FUNC_14();
 FUNC_1(VAR_9);

 Close:
 FUNC_9(VAR_8);
 return VAR_10;

 Thaw:
 FUNC_17();
 Cleanup:
 FUNC_16();
 goto Close;
}
