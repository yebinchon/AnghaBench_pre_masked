
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_2__ {char* member_0; int * member_1; } ;
typedef int PyObject ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int,int **) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int *) ;
 int * VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static PyObject *
FUNC_5(void)
{

    static wchar_t *(VAR_2[2]) = {L"/must>not&exist/foo", ((void*)0)};

    if (FUNC_3())
 return ((void*)0);


    FUNC_1(1, VAR_2);

    if ((VAR_0 = FUNC_0(&VAR_1)) == ((void*)0))
 return ((void*)0);

    if (FUNC_4(VAR_0))
 return ((void*)0);

    if (FUNC_2())
 return ((void*)0);

    return VAR_0;
}
