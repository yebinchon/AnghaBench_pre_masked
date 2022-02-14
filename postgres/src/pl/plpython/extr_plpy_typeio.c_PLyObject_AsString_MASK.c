
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,size_t,int) ;
 char* FUNC_14 (int ) ;
 size_t FUNC_15 (char*) ;

char *
FUNC_16(PyObject *VAR_2)
{
 PyObject *VAR_3;
 char *VAR_4;
 size_t VAR_5;
 size_t VAR_6;

 if (FUNC_7(VAR_2))
  VAR_3 = FUNC_0(VAR_2);
 else if (FUNC_4(VAR_2))
 {







  VAR_3 = FUNC_5(VAR_2);

 }
 else
 {






  VAR_3 = FUNC_6(VAR_2);

 }
 if (!VAR_3)
  FUNC_1(VAR_1, "could not create string representation of Python object");

 VAR_4 = FUNC_14(FUNC_2(VAR_3));
 VAR_5 = FUNC_3(VAR_3);
 VAR_6 = FUNC_15(VAR_4);

 FUNC_8(VAR_3);

 if (VAR_6 < VAR_5)
  FUNC_10(VAR_1,
    (FUNC_11(VAR_0),
     FUNC_12("could not convert Python object into cstring: Python string representation appears to contain null bytes")));
 else if (VAR_6 > VAR_5)
  FUNC_9(VAR_1, "could not convert Python object into cstring: Python string longer than reported length");
 FUNC_13(VAR_4, VAR_6, 0);

 return VAR_4;
}
