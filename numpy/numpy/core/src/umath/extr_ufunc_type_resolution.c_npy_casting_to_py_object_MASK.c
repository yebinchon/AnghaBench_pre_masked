
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int NPY_CASTING ;







 int * FUNC_0 (int) ;
 int * FUNC_1 (char*) ;

__attribute__((used)) static PyObject *
FUNC_2(NPY_CASTING VAR_0)
{
    switch (VAR_0) {
        case 131:
            return FUNC_1("no");
        case 132:
            return FUNC_1("equiv");
        case 130:
            return FUNC_1("safe");
        case 129:
            return FUNC_1("same_kind");
        case 128:
            return FUNC_1("unsafe");
        default:
            return FUNC_0(VAR_0);
    }
}
