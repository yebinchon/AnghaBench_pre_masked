
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_intp ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static int
FUNC_2(int VAR_2, int VAR_3, int **VAR_4,
                        const npy_intp *VAR_5)
{
    char VAR_6[VAR_0];
    int VAR_7, VAR_8;

    if (VAR_3 < 0) {





        if (VAR_4 != ((void*)0) || VAR_5 != ((void*)0)) {
            FUNC_0(VAR_1,
                    "If 'op_axes' or 'itershape' is not NULL in the iterator "
                    "constructor, 'oa_ndim' must be zero or greater");
            return 0;
        }
        return 1;
    }
    if (VAR_3 > VAR_0) {
        FUNC_0(VAR_1,
                "Cannot construct an iterator with more than %d dimensions "
                "(%d were requested for op_axes)",
                VAR_0, VAR_3);
        return 0;
    }
    if (VAR_4 == ((void*)0)) {
        FUNC_0(VAR_1,
                "If 'oa_ndim' is zero or greater in the iterator "
                "constructor, then op_axes cannot be NULL");
        return 0;
    }


    for (VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7) {
        int *VAR_9 = VAR_4[VAR_7];
        if (VAR_9 != ((void*)0)) {
            FUNC_1(VAR_6, 0, VAR_0);
            for (VAR_8 = 0; VAR_8 < VAR_3; ++VAR_8) {
                int VAR_10 = VAR_9[VAR_8];
                if (VAR_10 >= 0) {
                    if (VAR_10 >= VAR_0) {
                        FUNC_0(VAR_1,
                                "The 'op_axes' provided to the iterator "
                                "constructor for operand %d "
                                "contained invalid "
                                "values %d", VAR_7, VAR_10);
                        return 0;
                    }
                    else if (VAR_6[VAR_10] == 1) {
                        FUNC_0(VAR_1,
                                "The 'op_axes' provided to the iterator "
                                "constructor for operand %d "
                                "contained duplicate "
                                "value %d", VAR_7, VAR_10);
                        return 0;
                    }
                    else {
                        VAR_6[VAR_10] = 1;
                    }
                }
            }
        }
    }

    return 1;
}
