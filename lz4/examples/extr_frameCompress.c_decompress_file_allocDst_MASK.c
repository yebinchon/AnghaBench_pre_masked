
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LZ4F_frameInfo_t ;
typedef int LZ4F_dctx ;
typedef int FILE ;


 size_t VAR_0 ;
 char* FUNC_0 (size_t const) ;
 size_t FUNC_1 (int *,int *,void*,size_t*) ;
 scalar_t__ FUNC_2 (size_t const) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int *,int *,void*,size_t,size_t const,size_t,void* const,size_t const) ;
 scalar_t__ FUNC_5 (int *) ;
 size_t FUNC_6 (void*,int,size_t,int *) ;
 int FUNC_7 (void* const) ;
 size_t FUNC_8 (int *) ;
 void* FUNC_9 (size_t const) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,...) ;

__attribute__((used)) static int
FUNC_12(FILE* VAR_1, FILE* VAR_2,
                        LZ4F_dctx* VAR_3,
                        void* VAR_4, size_t VAR_5)
{
    FUNC_3(VAR_1 != ((void*)0)); FUNC_3(VAR_2 != ((void*)0));
    FUNC_3(VAR_3 != ((void*)0));
    FUNC_3(VAR_4 != ((void*)0));
    FUNC_3(VAR_5 >= VAR_0);


    size_t const VAR_6 = FUNC_6(VAR_4, 1, VAR_5, VAR_1);
    if (VAR_6 == 0 || FUNC_5(VAR_1)) {
        FUNC_11("Decompress: not enough input or error reading file\n");
        return 1;
    }

    LZ4F_frameInfo_t VAR_7;
    size_t VAR_8 = VAR_6;
    { size_t const VAR_9 = FUNC_1(VAR_3, &VAR_7, VAR_4, &VAR_8);
        if (FUNC_2(VAR_9)) {
            FUNC_11("LZ4F_getFrameInfo error: %s\n", FUNC_0(VAR_9));
            return 1;
    } }




    size_t const VAR_10 = FUNC_8(&VAR_7);
    void* const VAR_11 = FUNC_9(VAR_10);
    if (!VAR_11) { FUNC_10("decompress_file(dst)"); return 1; }

    int const VAR_12 = FUNC_4(
                        VAR_1, VAR_2,
                        VAR_3,
                        VAR_4, VAR_5, VAR_6-VAR_8, VAR_8,
                        VAR_11, VAR_10);

    FUNC_7(VAR_11);
    return VAR_12;
}
