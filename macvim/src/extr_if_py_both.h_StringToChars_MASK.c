
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int char_u ;
typedef int PyObject ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char**,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_1 ;
 int * FUNC_4 (int *,int ,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static char_u *
FUNC_8(PyObject *VAR_2, PyObject **VAR_3)
{
    char_u *VAR_4;

    if (FUNC_2(VAR_2))
    {

 if (FUNC_1(VAR_2, (char **) &VAR_4, ((void*)0)) == -1
  || VAR_4 == ((void*)0))
     return ((void*)0);

 *VAR_3 = ((void*)0);
    }
    else if (FUNC_5(VAR_2))
    {
 PyObject *VAR_5;

 if (!(VAR_5 = FUNC_4(VAR_2, VAR_0, ((void*)0))))
     return ((void*)0);

 if(FUNC_1(VAR_5, (char **) &VAR_4, ((void*)0)) == -1
  || VAR_4 == ((void*)0))
 {
     FUNC_6(VAR_5);
     return ((void*)0);
 }

 *VAR_3 = VAR_5;
    }
    else
    {

 FUNC_3(VAR_1,
  FUNC_0("expected str() or unicode() instance, but got %s"),
  FUNC_7(VAR_2));





 return ((void*)0);
    }

    return (char_u *) VAR_4;
}
