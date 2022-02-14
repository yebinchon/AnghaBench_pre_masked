
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ shape; int base; } ;
struct TYPE_8__ {int (* tp_free ) (int *) ;} ;
struct TYPE_7__ {scalar_t__ fields; int type_num; int type; scalar_t__ typeobj; scalar_t__ names; scalar_t__ metadata; int * c_metadata; TYPE_6__* subarray; } ;
typedef int PyObject ;
typedef TYPE_1__ PyArray_Descr ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char*,int,int) ;
 int VAR_1 ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(PyArray_Descr *VAR_2)
{
    if (VAR_2->fields == VAR_0) {
        FUNC_7(VAR_1, "*** Reference count error detected: \n" "an attempt was made to deallocate %d (%c) ***\n",

                VAR_2->type_num, VAR_2->type);
        FUNC_3(VAR_2);
        FUNC_3(VAR_2);
        return;
    }
    FUNC_6((PyObject*)VAR_2);
    FUNC_5(VAR_2->typeobj);
    FUNC_5(VAR_2->names);
    FUNC_5(VAR_2->fields);
    if (VAR_2->subarray) {
        FUNC_5(VAR_2->subarray->shape);
        FUNC_2(VAR_2->subarray->base);
        FUNC_1(VAR_2->subarray);
    }
    FUNC_5(VAR_2->metadata);
    FUNC_0(VAR_2->c_metadata);
    VAR_2->c_metadata = ((void*)0);
    FUNC_4(VAR_2)->tp_free((PyObject *)VAR_2);
}
