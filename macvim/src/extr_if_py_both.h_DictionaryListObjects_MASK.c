
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ long_u ;
typedef int * (* hi_to_py ) (int *) ;
typedef int hashitem_T ;
struct TYPE_5__ {scalar_t__ ht_used; int * ht_array; } ;
struct TYPE_6__ {TYPE_1__ dv_hashtab; } ;
typedef TYPE_2__ dict_T ;
struct TYPE_7__ {TYPE_2__* dict; } ;
typedef scalar_t__ Py_ssize_t ;
typedef int PyObject ;
typedef TYPE_3__ DictionaryObject ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,scalar_t__,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static PyObject *
FUNC_4(DictionaryObject *VAR_0, hi_to_py VAR_1)
{
    dict_T *VAR_2 = VAR_0->dict;
    long_u VAR_3 = VAR_2->dv_hashtab.ht_used;
    Py_ssize_t VAR_4 = 0;
    PyObject *VAR_5;
    hashitem_T *VAR_6;
    PyObject *VAR_7;

    VAR_5 = FUNC_1(VAR_3);
    for (VAR_6 = VAR_2->dv_hashtab.ht_array; VAR_3 > 0; ++VAR_6)
    {
 if (!FUNC_0(VAR_6))
 {
     if (!(VAR_7 = VAR_1(VAR_6)))
     {
  FUNC_3(VAR_5);
  return ((void*)0);
     }
     FUNC_2(VAR_5, VAR_4, VAR_7);
     --VAR_3;
     ++VAR_4;
 }
    }
    return VAR_5;
}
