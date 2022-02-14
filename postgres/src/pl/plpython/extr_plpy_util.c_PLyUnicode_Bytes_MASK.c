
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int ,char*) ;
 char* FUNC_6 (int *) ;
 int * FUNC_7 (char*,int ) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (char*,int ,scalar_t__) ;
 int FUNC_12 (char*) ;

PyObject *
FUNC_13(PyObject *VAR_2)
{
 PyObject *VAR_3,
      *VAR_4;
 char *VAR_5,
      *VAR_6;


 VAR_3 = FUNC_8(VAR_2);
 if (VAR_3 == ((void*)0))
  FUNC_5(VAR_0, "could not convert Python Unicode object to bytes");

 VAR_5 = FUNC_6(VAR_3);
 if (VAR_5 == ((void*)0))
 {
  FUNC_9(VAR_3);
  FUNC_5(VAR_0, "could not extract bytes from encoded string");
 }
 if (FUNC_0() != VAR_1)
 {
  FUNC_4();
  {
   VAR_6 = FUNC_11(VAR_5,
            FUNC_12(VAR_5),
            VAR_1);
  }
  FUNC_1();
  {
   FUNC_9(VAR_3);
   FUNC_3();
  }
  FUNC_2();
 }
 else
  VAR_6 = VAR_5;


 VAR_4 = FUNC_7(VAR_6, FUNC_12(VAR_6));


 if (VAR_5 != VAR_6)
  FUNC_10(VAR_6);

 FUNC_9(VAR_3);
 return VAR_4;
}
