
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Py_ssize_t ;
typedef int PyObject ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int * FUNC_1 (char*,scalar_t__,char*,int ) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static PyObject *
FUNC_5(const char *VAR_2)
{
    PyObject *VAR_3;
    Py_ssize_t VAR_4 = FUNC_3(VAR_2);
    char *VAR_5,*VAR_6;

    VAR_5 = (char *)FUNC_2((unsigned)(VAR_4+1));
    VAR_6 = VAR_5;
    if (VAR_6 == ((void*)0))
    {
 FUNC_0();
 return ((void*)0);
    }

    while (*VAR_2)
    {
 if (*VAR_2 == '\n')
     *VAR_6 = '\0';
 else
     *VAR_6 = *VAR_2;

 ++VAR_6;
 ++VAR_2;
    }
    *VAR_6 = '\0';

    VAR_3 = FUNC_1(VAR_5, VAR_4, (char *)VAR_1, VAR_0);

    FUNC_4(VAR_5);
    return VAR_3;
}
