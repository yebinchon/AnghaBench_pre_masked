
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ end; scalar_t__ start; } ;
typedef TYPE_1__ RangeObject ;
typedef int PyObject ;


 int * FUNC_0 (int *,int ) ;
 int * FUNC_1 (int ,scalar_t__) ;
 int * FUNC_2 (int ,int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (char*,char*) ;

__attribute__((used)) static PyObject *
FUNC_4(PyObject *VAR_3, char *VAR_4)
{
    if (FUNC_3(VAR_4, "start") == 0)
 return FUNC_1(VAR_0, ((RangeObject *)(VAR_3))->start - 1);
    else if (FUNC_3(VAR_4, "end") == 0)
 return FUNC_1(VAR_0, ((RangeObject *)(VAR_3))->end - 1);
    else if (FUNC_3(VAR_4, "__members__") == 0)
 return FUNC_0(((void*)0), VAR_1);
    else
 return FUNC_2(VAR_2, VAR_3, VAR_4);
}
