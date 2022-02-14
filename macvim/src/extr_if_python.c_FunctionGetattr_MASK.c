
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ name; } ;
typedef int PyObject ;
typedef TYPE_1__ FunctionObject ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int ) ;
 int * FUNC_1 (char*) ;
 int * FUNC_2 (int ,int *,char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;

__attribute__((used)) static PyObject *
FUNC_4(PyObject *VAR_2, char *VAR_3)
{
    FunctionObject *VAR_4 = (FunctionObject *)(VAR_2);

    if (FUNC_3(VAR_3, "name") == 0)
 return FUNC_1((char *)(VAR_4->name));
    else if (FUNC_3(VAR_3, "__members__") == 0)
 return FUNC_0(((void*)0), VAR_0);
    else
 return FUNC_2(VAR_1, VAR_2, VAR_3);
}
