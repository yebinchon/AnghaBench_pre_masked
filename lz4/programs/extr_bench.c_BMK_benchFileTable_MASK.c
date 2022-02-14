
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mfName ;
typedef int U64 ;
typedef int U32 ;


 int FUNC_0 (void*,size_t,char const*,int,int,size_t*,unsigned int,char const*,int) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (void*,size_t,size_t*,char const**,unsigned int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int,char*) ;
 size_t VAR_0 ;
 int FUNC_5 (char const**,unsigned int) ;
 int FUNC_6 (size_t*) ;
 void* FUNC_7 (size_t) ;
 int FUNC_8 (char*,int,char*,unsigned int) ;

__attribute__((used)) static void FUNC_9(const char** VAR_1, unsigned VAR_2,
                               int VAR_3, int VAR_4,
                               const char* VAR_5, int VAR_6)
{
    void* VAR_7;
    size_t VAR_8;
    size_t* VAR_9 = (size_t*)FUNC_7(VAR_2 * sizeof(size_t));
    U64 const VAR_10 = FUNC_5(VAR_1, VAR_2);
    char VAR_11[20] = {0};

    if (!VAR_9) FUNC_4(12, "not enough memory for fileSizes");


    VAR_8 = FUNC_1(VAR_10 * 3) / 3;
    if (VAR_8==0) FUNC_4(12, "not enough memory");
    if ((U64)VAR_8 > VAR_10) VAR_8 = (size_t)VAR_10;
    if (VAR_8 > VAR_0) {
        VAR_8 = VAR_0;
        FUNC_3("File(s) bigger than LZ4's max input size; testing %u MB only...\n", (U32)(VAR_8 >> 20));
    } else {
        if (VAR_8 < VAR_10)
            FUNC_3("Not enough memory; testing %u MB only...\n", (U32)(VAR_8 >> 20));
    }
    VAR_7 = FUNC_7(VAR_8 + !VAR_8);
    if (!VAR_7) FUNC_4(12, "not enough memory");


    FUNC_2(VAR_7, VAR_8, VAR_9, VAR_1, VAR_2);


    FUNC_8 (VAR_11, sizeof(VAR_11), " %u files", VAR_2);
    { const char* VAR_12 = (VAR_2 > 1) ? VAR_11 : VAR_1[0];
        FUNC_0(VAR_7, VAR_8,
                        VAR_12, VAR_3, VAR_4,
                        VAR_9, VAR_2,
                        VAR_5, VAR_6);
    }


    FUNC_6(VAR_7);
    FUNC_6(VAR_9);
}
