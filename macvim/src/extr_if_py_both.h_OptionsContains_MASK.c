
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ char_u ;
struct TYPE_3__ {int opt_type; } ;
typedef int PyObject ;
typedef TYPE_1__ OptionsObject ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__* FUNC_1 (int *,int **) ;
 scalar_t__ FUNC_2 (scalar_t__*,int *,int *,int ,int *) ;

__attribute__((used)) static int
FUNC_3(OptionsObject *VAR_1, PyObject *VAR_2)
{
    char_u *VAR_3;
    PyObject *VAR_4;

    if (!(VAR_3 = FUNC_1(VAR_2, &VAR_4)))
 return -1;

    if (*VAR_3 == VAR_0)
    {
 FUNC_0(VAR_4);
 return 0;
    }

    if (FUNC_2(VAR_3, ((void*)0), ((void*)0), VAR_1->opt_type, ((void*)0)))
    {
 FUNC_0(VAR_4);
 return 1;
    }
    else
    {
 FUNC_0(VAR_4);
 return 0;
    }
}
