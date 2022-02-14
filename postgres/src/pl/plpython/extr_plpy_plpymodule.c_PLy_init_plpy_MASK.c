
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *,char*,int *) ;
 scalar_t__ FUNC_7 () ;
 int * FUNC_8 (char*) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 int * FUNC_11 (char*,int ) ;

void
FUNC_12(void)
{
 PyObject *VAR_3,
      *VAR_4,
      *VAR_5;


 PyObject *VAR_6;





 FUNC_3();
 FUNC_4();
 FUNC_5();
 FUNC_1();





 VAR_6 = FUNC_11("plpy", VAR_1);
 FUNC_0(VAR_6);







 VAR_3 = FUNC_8("__main__");
 VAR_4 = FUNC_10(VAR_3);
 VAR_5 = FUNC_8("plpy");
 if (VAR_5 == ((void*)0))
  FUNC_2(VAR_0, "could not import \"plpy\" module");
 FUNC_6(VAR_4, "plpy", VAR_5);
 if (FUNC_7())
  FUNC_2(VAR_0, "could not import \"plpy\" module");
}
