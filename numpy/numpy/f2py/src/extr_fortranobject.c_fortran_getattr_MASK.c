
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int* d; } ;
struct TYPE_8__ {char* name; int rank; int * data; int type; TYPE_1__ dims; int (* func ) (int*,int*,int ,int*) ;} ;
struct TYPE_7__ {int len; int * dict; TYPE_3__* defs; } ;
typedef int PyObject ;
typedef TYPE_2__ PyFortranObject ;


 int * FUNC_0 (void*,int *) ;
 int VAR_0 ;
 int * FUNC_1 (int *,int,int*,int ,int *,int *,int ,int ,int *) ;
 int VAR_1 ;
 int * FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int *,char*,int *) ;
 int * FUNC_4 (int *,int *) ;
 int FUNC_5 (int **,int *) ;
 int * FUNC_6 (char*) ;
 int * FUNC_7 (int *,int *) ;
 int * FUNC_8 (char*) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int ,int *,char*) ;
 int FUNC_11 (int *) ;
 int VAR_2 ;
 int * FUNC_12 (TYPE_3__) ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 int VAR_5 ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (int*,int*,int ,int*) ;

__attribute__((used)) static PyObject *
FUNC_15(PyFortranObject *VAR_6, char *VAR_7) {
    int VAR_8,VAR_9,VAR_10,VAR_11;
    if (VAR_6->dict != ((void*)0)) {
        PyObject *VAR_12 = FUNC_2(VAR_6->dict, VAR_7);
        if (VAR_12 != ((void*)0)) {
            FUNC_11(VAR_12);
            return VAR_12;
        }
    }
    for (VAR_8=0,VAR_9=1;VAR_8<VAR_6->len && (VAR_9=FUNC_13(VAR_7,VAR_6->defs[VAR_8].name));VAR_8++);
    if (VAR_9==0)
        if (VAR_6->defs[VAR_8].rank!=-1) {
            if (VAR_6->defs[VAR_8].func==((void*)0)) return ((void*)0);
            for(VAR_10=0;VAR_10<VAR_6->defs[VAR_8].rank;++VAR_10)
                VAR_6->defs[VAR_8].dims.d[VAR_10]=-1;
            VAR_4 = &VAR_6->defs[VAR_8];
            (*(VAR_6->defs[VAR_8].func))(&VAR_6->defs[VAR_8].rank,VAR_6->defs[VAR_8].dims.d,VAR_5,&VAR_11);
            if (VAR_11==2)
                VAR_10 = VAR_6->defs[VAR_8].rank + 1;
            else
                VAR_10 = VAR_6->defs[VAR_8].rank;
            if (VAR_6->defs[VAR_8].data !=((void*)0)) {
                PyObject *VAR_13 = FUNC_1(&VAR_1, VAR_10, VAR_6->defs[VAR_8].dims.d,
                                          VAR_6->defs[VAR_8].type, ((void*)0), VAR_6->defs[VAR_8].data, 0, VAR_0,
                                          ((void*)0));
                if (VAR_13==((void*)0)) return ((void*)0);

                return VAR_13;
            } else {
                VAR_2;
            }
        }
    if (FUNC_13(VAR_7,"__dict__")==0) {
        FUNC_11(VAR_6->dict);
        return VAR_6->dict;
    }
    if (FUNC_13(VAR_7,"__doc__")==0) {
        PyObject *VAR_14 = FUNC_6("");
        for (VAR_8=0;VAR_8<VAR_6->len;VAR_8++)
            FUNC_5(&VAR_14,FUNC_12(VAR_6->defs[VAR_8]));

        if (FUNC_3(VAR_6->dict, VAR_7, VAR_14))
            return ((void*)0);
        return VAR_14;
    }
    if ((FUNC_13(VAR_7,"_cpointer")==0) && (VAR_6->len==1)) {
        PyObject *VAR_15 = FUNC_0((void *)(VAR_6->defs[0].data),((void*)0));
        if (FUNC_3(VAR_6->dict, VAR_7, VAR_15))
            return ((void*)0);
        return VAR_15;
    }
    return FUNC_10(VAR_3, (PyObject *)VAR_6, VAR_7);

}
