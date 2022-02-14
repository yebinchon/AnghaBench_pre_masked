
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cur; int * (* next ) (int *) ;} ;
typedef int PyObject ;
typedef TYPE_1__ IterObject ;


 int * FUNC_0 (int *) ;

__attribute__((used)) static PyObject *
FUNC_1(IterObject *VAR_0)
{
    return VAR_0->next(&VAR_0->cur);
}
