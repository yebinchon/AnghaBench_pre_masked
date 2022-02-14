
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;


 long VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 long FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 long FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int
FUNC_12(PyObject *VAR_8, long *VAR_9, int VAR_10)
{

    if (FUNC_5(VAR_8))
    {
 *VAR_9 = FUNC_4(VAR_8);
 if (FUNC_2())
     return -1;
    }
    else

    if (FUNC_7(VAR_8))
    {
 *VAR_9 = FUNC_6(VAR_8);
 if (FUNC_2())
     return -1;
    }
    else if (FUNC_8(VAR_8))
    {
 PyObject *VAR_11;

 if (!(VAR_11 = FUNC_9(VAR_8)))
     return -1;

 *VAR_9 = FUNC_6(VAR_11);

 FUNC_10(VAR_11);

 if (FUNC_2())
     return -1;
    }
    else
    {

 FUNC_1(VAR_6,
  FUNC_0("expected int(), long() or something supporting "
     "coercing to long(), but got %s"),
  FUNC_11(VAR_8));






 return -1;
    }

    if (VAR_10 & VAR_2)
    {
 if (*VAR_9 > VAR_0)
 {
     FUNC_3(VAR_5,
      FUNC_0("value is too large to fit into C int type"));
     return -1;
 }
 else if (*VAR_9 < VAR_1)
 {
     FUNC_3(VAR_5,
      FUNC_0("value is too small to fit into C int type"));
     return -1;
 }
    }

    if (VAR_10 & VAR_3)
    {
 if (*VAR_9 <= 0)
 {
     FUNC_3(VAR_7,
      FUNC_0("number must be greater than zero"));
     return -1;
 }
    }
    else if (VAR_10 & VAR_4)
    {
 if (*VAR_9 < 0)
 {
     FUNC_3(VAR_7,
      FUNC_0("number must be greater or equal to zero"));
     return -1;
 }
    }

    return 0;
}
