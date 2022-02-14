
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int * VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_3 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*) ;
 int VAR_4 ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int VAR_5 ;
 int FUNC_10 () ;
 int* VAR_6 ;

__attribute__((used)) static void
FUNC_11(void)
{
 static bool VAR_7 = 0;
 if (*VAR_6 != (1 << VAR_3))
  FUNC_7(VAR_0,
    (FUNC_9("multiple Python libraries are present in session"),
     FUNC_8("Only one Python major version can be used in one session.")));


 if (VAR_7)
  return;




 FUNC_6();



 FUNC_1();
 FUNC_2();
 if (FUNC_3())
  FUNC_0(VAR_0, "untrapped error in initialization");

 FUNC_10();

 VAR_5 = VAR_1;

 VAR_2 = ((void*)0);

 VAR_7 = 1;
}
