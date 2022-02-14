
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;
 int VAR_1 ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 () ;
 scalar_t__ FUNC_13 () ;
 int VAR_2 ;
 int FUNC_14 (char*) ;
 int FUNC_15 () ;
 int VAR_3 ;
 int FUNC_16 () ;
 int VAR_4 ;
 int FUNC_17 (int ) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_18(void)
{
    if (!VAR_4)
    {
 FUNC_16();
 FUNC_9();
 FUNC_1();




 if (FUNC_12())
     goto fail;

 if (FUNC_13())
     goto fail;

 VAR_3 = FUNC_6(FUNC_3("__main__"));





 FUNC_7("import sys; sys.path = filter(lambda x: x != '/must>not&exist', sys.path)");
 VAR_5 =

     FUNC_2();

 VAR_4 = 1;
    }

    return 0;

fail:





    FUNC_11();
    return -1;
}
