
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LZ4F_dctx ;
typedef int FILE ;


 size_t FUNC_0 (int *,void*,size_t*,void const*,size_t*,int *) ;
 char* FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 size_t FUNC_6 (void*,int,int,int *) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (void*,int,size_t,int *) ;

__attribute__((used)) static int
FUNC_9(FILE* VAR_0, FILE* VAR_1,
                         LZ4F_dctx* VAR_2,
                         void* VAR_3, size_t VAR_4, size_t VAR_5, size_t VAR_6,
                         void* VAR_7, size_t VAR_8)
{
    int VAR_9 = 1;
    size_t VAR_10 = 1;

    FUNC_3(VAR_0 != ((void*)0)); FUNC_3(VAR_1 != ((void*)0));
    FUNC_3(VAR_2 != ((void*)0));
    FUNC_3(VAR_3 != ((void*)0)); FUNC_3(VAR_4 > 0); FUNC_3(VAR_5 <= VAR_4); FUNC_3(VAR_6 <= VAR_5);
    FUNC_3(VAR_7 != ((void*)0)); FUNC_3(VAR_8 > 0);


    while (VAR_10 != 0) {

        size_t VAR_11 = VAR_9 ? VAR_5 : FUNC_6(VAR_3, 1, VAR_4, VAR_0); VAR_9=0;
        const void* VAR_12 = (const char*)VAR_3 + VAR_6; VAR_6=0;
        const void* const VAR_13 = (const char*)VAR_12 + VAR_11;
        if (VAR_11 == 0 || FUNC_5(VAR_0)) {
            FUNC_7("Decompress: not enough input or error reading file\n");
            return 1;
        }





        while (VAR_12 < VAR_13 && VAR_10 != 0) {

            size_t VAR_14 = VAR_8;
            size_t VAR_15 = (const char*)VAR_13 - (const char*)VAR_12;
            VAR_10 = FUNC_0(VAR_2, VAR_7, &VAR_14, VAR_12, &VAR_15, ((void*)0));
            if (FUNC_2(VAR_10)) {
                FUNC_7("Decompression error: %s\n", FUNC_1(VAR_10));
                return 1;
            }

            if (VAR_14 != 0) FUNC_8(VAR_7, 1, VAR_14, VAR_1);

            VAR_12 = (const char*)VAR_12 + VAR_15;
        }

        FUNC_3(VAR_12 <= VAR_13);





        if (VAR_12 < VAR_13) {
            FUNC_7("Decompress: Trailing data left in file after frame\n");
            return 1;
        }
    }





    { size_t const VAR_16 = FUNC_6(VAR_3, 1, 1, VAR_0);
        if (VAR_16 != 0 || !FUNC_4(VAR_0)) {
            FUNC_7("Decompress: Trailing data left in file after frame\n");
            return 1;
    } }

    return 0;
}
