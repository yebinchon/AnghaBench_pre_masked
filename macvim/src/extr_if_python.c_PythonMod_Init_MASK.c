
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;


 int VAR_0 ;
 int FUNC_0 (int,char**) ;
 int FUNC_1 (char*,int ,char*,int *,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_5(void)
{

    static char *(VAR_3[2]) = {"/must>not&exist/foo", ((void*)0)};

    if (FUNC_3())
 return -1;


    FUNC_0(1, VAR_3);

    VAR_2 = FUNC_1("vim", VAR_1, (char *)((void*)0),
    (PyObject *)((void*)0), VAR_0);

    if (FUNC_4(VAR_2))
 return -1;

    if (FUNC_2())
 return -1;

    return 0;
}
