
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int npy_uint32 ;
typedef int npy_intp ;
typedef int npy_bool ;
struct TYPE_3__ {int core_enabled; int core_num_dim_ix; int* core_num_dims; int nargs; int* core_offsets; int* core_dim_ixs; int* core_dim_sizes; int* core_dim_flags; int nin; void* core_signature; } ;
typedef TYPE_1__ PyUFuncObject ;


 int FUNC_0 (void*) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int*,int) ;
 int FUNC_3 (int ,char*,char*,int,char const*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (char const*,int) ;
 scalar_t__ FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char const) ;
 int FUNC_9 (char const*,char const*) ;
 int FUNC_10 (char const*,int) ;
 int FUNC_11 (void*,char const*) ;
 size_t FUNC_12 (char const*) ;

__attribute__((used)) static int
FUNC_13(PyUFuncObject *VAR_4, const char *VAR_5)
{
    size_t VAR_6;
    char const **VAR_7;
    int VAR_8 = 0;
    int VAR_9 = 0;
    int VAR_10 = 0;
    int VAR_11 = 0;
    char *VAR_12 = ((void*)0);

    if (VAR_5 == ((void*)0)) {
        FUNC_5(VAR_0,
                        "_parse_signature with NULL signature");
        return -1;
    }
    VAR_6 = FUNC_12(VAR_5);
    VAR_4->core_signature = FUNC_1(sizeof(char) * (VAR_6+1));
    if (VAR_4->core_signature) {
        FUNC_11(VAR_4->core_signature, VAR_5);
    }

    VAR_7 = FUNC_1(sizeof(char const*) * VAR_6);
    if (VAR_7 == ((void*)0)) {
        FUNC_4();
        return -1;
    }

    VAR_4->core_enabled = 1;
    VAR_4->core_num_dim_ix = 0;
    VAR_4->core_num_dims = FUNC_1(sizeof(int) * VAR_4->nargs);
    VAR_4->core_offsets = FUNC_1(sizeof(int) * VAR_4->nargs);

    VAR_4->core_dim_ixs = FUNC_1(sizeof(int) * VAR_6);
    VAR_4->core_dim_sizes = FUNC_1(sizeof(npy_intp) * VAR_6);
    VAR_4->core_dim_flags = FUNC_1(sizeof(npy_uint32) * VAR_6);

    if (VAR_4->core_num_dims == ((void*)0) || VAR_4->core_dim_ixs == ((void*)0) ||
        VAR_4->core_offsets == ((void*)0) ||
        VAR_4->core_dim_sizes == ((void*)0) ||
        VAR_4->core_dim_flags == ((void*)0)) {
        FUNC_4();
        goto fail;
    }
    for (size_t VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
        VAR_4->core_dim_flags[VAR_13] = 0;
    }

    VAR_11 = FUNC_10(VAR_5, 0);
    while (VAR_5[VAR_11] != '\0') {

        if (VAR_9 == VAR_4->nin) {

            if (VAR_5[VAR_11] != '-' || VAR_5[VAR_11+1] != '>') {
                VAR_12 = "expect '->'";
                goto fail;
            }
            VAR_11 = FUNC_10(VAR_5, VAR_11 + 2);
        }





        if (VAR_5[VAR_11] != '(') {
            VAR_12 = "expect '('";
            goto fail;
        }
        VAR_11 = FUNC_10(VAR_5, VAR_11 + 1);
        while (VAR_5[VAR_11] != ')') {

            int VAR_14, VAR_15;
            npy_intp VAR_16;
            npy_bool VAR_17;

            if (VAR_5[VAR_11] == '\0') {
                VAR_12 = "unexpected end of signature string";
                goto fail;
            }



            if (FUNC_8(VAR_5[VAR_11])) {
                VAR_16 = -1;
            }
            else {
                VAR_16 = (npy_intp)FUNC_7(VAR_5 + VAR_11);
                if (VAR_16 <= 0) {
                    VAR_12 = "expect dimension name or non-zero frozen size";
                    goto fail;
                }
            }

            VAR_15 = FUNC_6(VAR_5, VAR_11);
            VAR_17 = (VAR_15 > 0 && VAR_5[VAR_15 - 1] == '?');




            for(VAR_14 = 0; VAR_14 < VAR_4->core_num_dim_ix; VAR_14++) {
                if (VAR_16 > 0 ?
                    VAR_16 == VAR_4->core_dim_sizes[VAR_14] :
                    FUNC_9(VAR_5 + VAR_11, VAR_7[VAR_14])) {
                    break;
                }
            }



            if (VAR_14 == VAR_4->core_num_dim_ix) {
                VAR_4->core_num_dim_ix++;
                VAR_7[VAR_14] = VAR_5 + VAR_11;
                VAR_4->core_dim_sizes[VAR_14] = VAR_16;
                if (VAR_16 < 0) {
                    VAR_4->core_dim_flags[VAR_14] |= VAR_3;
                }
                if (VAR_17) {
                    VAR_4->core_dim_flags[VAR_14] |= VAR_2;
                }
            } else {
                if (VAR_17 && !(VAR_4->core_dim_flags[VAR_14] &
                                    VAR_2)) {
                    VAR_12 = "? cannot be used, name already seen without ?";
                    goto fail;
                }
                if (!VAR_17 && (VAR_4->core_dim_flags[VAR_14] &
                                    VAR_2)) {
                    VAR_12 = "? must be used, name already seen with ?";
                    goto fail;
                }
            }
            VAR_4->core_dim_ixs[VAR_10] = VAR_14;
            VAR_10++;
            VAR_8++;
            VAR_11 = FUNC_10(VAR_5, VAR_15);
            if (VAR_5[VAR_11] != ',' && VAR_5[VAR_11] != ')') {
                VAR_12 = "expect ',' or ')'";
                goto fail;
            }
            if (VAR_5[VAR_11] == ',')
            {
                VAR_11 = FUNC_10(VAR_5, VAR_11 + 1);
                if (VAR_5[VAR_11] == ')') {
                    VAR_12 = "',' must not be followed by ')'";
                    goto fail;
                }
            }
        }
        VAR_4->core_num_dims[VAR_9] = VAR_8;
        VAR_4->core_offsets[VAR_9] = VAR_10-VAR_8;
        VAR_9++;
        VAR_8 = 0;

        VAR_11 = FUNC_10(VAR_5, VAR_11 + 1);
        if (VAR_9 != VAR_4->nin && VAR_9 != VAR_4->nargs) {




            if (VAR_5[VAR_11] != ',') {
                VAR_12 = "expect ','";
                goto fail;
            }
            VAR_11 = FUNC_10(VAR_5, VAR_11 + 1);
        }
    }
    if (VAR_9 != VAR_4->nargs) {
        VAR_12 = "incomplete signature: not all arguments found";
        goto fail;
    }
    VAR_4->core_dim_ixs = FUNC_2(VAR_4->core_dim_ixs,
            sizeof(int) * VAR_10);
    VAR_4->core_dim_sizes = FUNC_2(
            VAR_4->core_dim_sizes,
            sizeof(npy_intp) * VAR_4->core_num_dim_ix);
    VAR_4->core_dim_flags = FUNC_2(
            VAR_4->core_dim_flags,
            sizeof(npy_uint32) * VAR_4->core_num_dim_ix);


    if (VAR_10 == 0) {
        VAR_4->core_enabled = 0;
    }
    FUNC_0((void*)VAR_7);
    return 0;

fail:
    FUNC_0((void*)VAR_7);
    if (VAR_12) {
        FUNC_3(VAR_1,
                     "%s at position %d in \"%s\"",
                     VAR_12, VAR_11, VAR_5);
    }
    return -1;
}
