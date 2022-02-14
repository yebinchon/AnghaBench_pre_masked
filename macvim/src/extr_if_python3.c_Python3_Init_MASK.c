
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 () ;
 int VAR_2 ;
 int FUNC_12 (char*) ;
 int FUNC_13 () ;
 int VAR_3 ;
 int FUNC_14 () ;
 int VAR_4 ;
 int FUNC_15 (int ) ;

__attribute__((used)) static int
FUNC_16(void)
{
    if (!VAR_4)
    {
 FUNC_14();






 FUNC_4("vim", VAR_1);


 FUNC_8();







 FUNC_1();




 if (FUNC_11())
     goto fail;

 VAR_3 = FUNC_6(FUNC_3("__main__"));
 FUNC_7("import vim; import sys; sys.path = list(filter(lambda x: not x.endswith('must>not&exist'), sys.path))");
 FUNC_2();

 VAR_4 = 1;
    }

    return 0;

fail:





    FUNC_10();
    return -1;
}
