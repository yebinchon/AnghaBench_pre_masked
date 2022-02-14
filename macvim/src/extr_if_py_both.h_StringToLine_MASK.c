
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Py_ssize_t ;
typedef int PyObject ;
typedef int PyInt ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char**,int*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int * FUNC_6 (int *,int ,int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (unsigned int) ;
 char* FUNC_12 (char*,char,int) ;

__attribute__((used)) static char *
FUNC_13(PyObject *VAR_2)
{
    char *VAR_3;
    char *VAR_4;
    PyObject *VAR_5 = ((void*)0);
    Py_ssize_t VAR_6 = 0;
    PyInt VAR_7;
    char *VAR_8;

    if (FUNC_2(VAR_2))
    {
 if (FUNC_1(VAR_2, &VAR_3, &VAR_6) == -1
  || VAR_3 == ((void*)0))
     return ((void*)0);
    }
    else if (FUNC_7(VAR_2))
    {
 if (!(VAR_5 = FUNC_6(VAR_2, VAR_0, ((void*)0))))
     return ((void*)0);

 if (FUNC_1(VAR_5, &VAR_3, &VAR_6) == -1
  || VAR_3 == ((void*)0))
 {
     FUNC_8(VAR_5);
     return ((void*)0);
 }
    }
    else
    {

 FUNC_3(VAR_1,
  FUNC_0("expected str() or unicode() instance, but got %s"),
  FUNC_9(VAR_2));





 return ((void*)0);
    }







    VAR_8 = FUNC_12(VAR_3, '\n', VAR_6);
    if (VAR_8 != ((void*)0))
    {
 if (VAR_8 == VAR_3 + VAR_6 - 1)
     --VAR_6;
 else
 {
     FUNC_5(FUNC_0("string cannot contain newlines"));
     FUNC_10(VAR_5);
     return ((void*)0);
 }
    }




    VAR_4 = (char *)FUNC_11((unsigned)(VAR_6+1));
    if (VAR_4 == ((void*)0))
    {
 FUNC_4();
 FUNC_10(VAR_5);
 return ((void*)0);
    }

    for (VAR_7 = 0; VAR_7 < VAR_6; ++VAR_7)
    {
 if (VAR_3[VAR_7] == '\0')
     VAR_4[VAR_7] = '\n';
 else
     VAR_4[VAR_7] = VAR_3[VAR_7];
    }

    VAR_4[VAR_7] = '\0';
    FUNC_10(VAR_5);

    return VAR_4;
}
