
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* dict; } ;
struct TYPE_3__ {int dv_scope; int dv_lock; } ;
typedef int PyObject ;
typedef TYPE_2__ DictionaryObject ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int ) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int ,int *,char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;

__attribute__((used)) static PyObject *
FUNC_4(PyObject *VAR_2, char *VAR_3)
{
    DictionaryObject *VAR_4 = ((DictionaryObject *) (VAR_2));

    if (FUNC_3(VAR_3, "locked") == 0)
 return FUNC_1(VAR_4->dict->dv_lock);
    else if (FUNC_3(VAR_3, "scope") == 0)
 return FUNC_1(VAR_4->dict->dv_scope);
    else if (FUNC_3(VAR_3, "__members__") == 0)
 return FUNC_0(((void*)0), VAR_0);

    return FUNC_2(VAR_1, VAR_2, VAR_3);
}
