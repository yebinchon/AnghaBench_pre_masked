
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ht_array; scalar_t__ ht_used; TYPE_3__* hi; scalar_t__ todo; TYPE_1__* ht; } ;
typedef TYPE_2__ dictiterinfo_T ;
struct TYPE_7__ {scalar_t__ hi_key; } ;
struct TYPE_5__ {scalar_t__ ht_array; scalar_t__ ht_used; } ;
typedef int PyObject ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static PyObject *
FUNC_4(dictiterinfo_T **VAR_1)
{
    PyObject *VAR_2;

    if (!(*VAR_1)->todo)
 return ((void*)0);

    if ((*VAR_1)->ht->ht_array != (*VAR_1)->ht_array ||
     (*VAR_1)->ht->ht_used != (*VAR_1)->ht_used)
    {
 FUNC_3(VAR_0,
  FUNC_1("hashtab changed during iteration"));
 return ((void*)0);
    }

    while (((*VAR_1)->todo) && FUNC_0((*VAR_1)->hi))
 ++((*VAR_1)->hi);

    --((*VAR_1)->todo);

    if (!(VAR_2 = FUNC_2((char *)(*VAR_1)->hi->hi_key)))
 return ((void*)0);

    return VAR_2;
}
