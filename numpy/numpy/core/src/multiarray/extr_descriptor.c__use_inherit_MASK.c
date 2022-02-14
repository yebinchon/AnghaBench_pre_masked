
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ elsize; int flags; int * metadata; int * names; int * fields; } ;
typedef int PyObject ;
typedef TYPE_1__ PyArray_Descr ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__**) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,char*) ;
 int VAR_1 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static PyArray_Descr *
FUNC_11(PyArray_Descr *VAR_2, PyObject *VAR_3, int *VAR_4)
{
    PyArray_Descr *VAR_5;
    PyArray_Descr *VAR_6;

    *VAR_4 = 0;
    if (FUNC_2(VAR_3, VAR_0)
            || FUNC_9(VAR_3)
            || !FUNC_0(VAR_3, &VAR_6)) {
        return ((void*)0);
    }
    *VAR_4 = 1;
    VAR_5 = FUNC_1(VAR_2);
    if (VAR_5 == ((void*)0)) {
        goto fail;
    }
    if (FUNC_4(VAR_5)) {
        VAR_5->elsize = VAR_6->elsize;
    }
    else if (VAR_5->elsize != VAR_6->elsize) {
        FUNC_5(VAR_1,
                "mismatch in size of old and new data-descriptor");
        FUNC_6(VAR_5);
        goto fail;
    }
    else if (FUNC_10(VAR_5, VAR_6)) {
        FUNC_6(VAR_5);
        goto fail;
    }

    if (FUNC_3(VAR_6)) {
        FUNC_7(VAR_5->fields);
        VAR_5->fields = VAR_6->fields;
        FUNC_8(VAR_5->fields);

        FUNC_7(VAR_5->names);
        VAR_5->names = VAR_6->names;
        FUNC_8(VAR_5->names);
    }
    if (VAR_6->metadata != ((void*)0)) {
        FUNC_7(VAR_5->metadata);
        VAR_5->metadata = VAR_6->metadata;
        FUNC_8(VAR_5->metadata);
    }
    VAR_5->flags = VAR_6->flags;
    FUNC_6(VAR_6);
    *VAR_4 = 0;
    return VAR_5;

 fail:
    FUNC_6(VAR_6);
    return ((void*)0);
}
