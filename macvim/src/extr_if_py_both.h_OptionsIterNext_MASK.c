
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int opt_type; int lastoption; } ;
typedef TYPE_1__ optiterinfo_T ;
typedef int char_u ;
typedef int PyObject ;


 int * FUNC_0 (char*) ;
 int * FUNC_1 (int *,int ) ;

__attribute__((used)) static PyObject *
FUNC_2(optiterinfo_T **VAR_0)
{
    char_u *VAR_1;

    if ((VAR_1 = FUNC_1(&((*VAR_0)->lastoption), (*VAR_0)->opt_type)))
 return FUNC_0((char *)VAR_1);

    return ((void*)0);
}
