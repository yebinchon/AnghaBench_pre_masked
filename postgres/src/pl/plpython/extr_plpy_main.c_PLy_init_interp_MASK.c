
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int * VAR_1 ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,char*,int *) ;
 scalar_t__ FUNC_3 () ;
 int * FUNC_4 (char*) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(void)
{
 static PyObject *VAR_2 = ((void*)0);
 PyObject *VAR_3;

 VAR_3 = FUNC_4("__main__");
 if (VAR_3 == ((void*)0) || FUNC_3())
  FUNC_0(VAR_0, "could not import \"__main__\" module");
 FUNC_7(VAR_3);
 VAR_1 = FUNC_5(VAR_3);
 VAR_2 = FUNC_1();
 if (VAR_2 == ((void*)0))
  FUNC_0(VAR_0, ((void*)0));
 FUNC_2(VAR_1, "GD", VAR_2);
 FUNC_6(VAR_3);
 if (VAR_1 == ((void*)0) || FUNC_3())
  FUNC_0(VAR_0, "could not initialize globals");
}
