
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int FUZZ_dataProducer_t ;


 int FUNC_0 (char* const) ;
 int * FUNC_1 (int const*,size_t) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (int *) ;
 size_t FUNC_4 (int *) ;
 size_t FUNC_5 (size_t const,int ,int) ;
 int FUNC_6 (char const*,char* const,size_t,size_t const,size_t const) ;
 int FUNC_7 (char const*,char* const,size_t,size_t const,char* const,size_t const) ;
 size_t FUNC_8 (size_t const,size_t const) ;
 int FUNC_9 (char* const) ;
 scalar_t__ FUNC_10 (size_t const) ;
 int FUNC_11 (char* const,int const*,size_t) ;
 int FUNC_12 (char* const,int ,size_t const) ;

int FUNC_13(const uint8_t *VAR_0, size_t VAR_1)
{
    FUZZ_dataProducer_t *VAR_2 = FUNC_1(VAR_0, VAR_1);
    size_t const VAR_3 = FUNC_4(VAR_2);
    VAR_1 = FUNC_3(VAR_2);

    size_t const VAR_4 = FUNC_5(VAR_3, 0, 4 * VAR_1);
    size_t const VAR_5 = VAR_1 + 1;
    size_t const VAR_6 = 64 * 1024 - 1;
    size_t const VAR_7 = FUNC_8(VAR_5, VAR_6);
    char* const VAR_8 = (char*)FUNC_10(VAR_4);
    char* const VAR_9 = (char*)FUNC_10(VAR_7 + VAR_1);
    char* const VAR_10 = VAR_9;
    char* const VAR_11 = VAR_9 + VAR_7;
    char* const VAR_12 = VAR_11 - VAR_5;

    FUNC_0(VAR_8);
    FUNC_0(VAR_9);


    FUNC_12(VAR_9, 0, VAR_7);
    FUNC_11(VAR_11, VAR_0, VAR_1);



    FUNC_7((char const*)VAR_0, VAR_8, VAR_1,
                                  VAR_4, ((void*)0), 0);

    FUNC_7((char const*)VAR_0, VAR_8, VAR_1,
                                  VAR_4, VAR_12, VAR_5);

    FUNC_7((char const*)VAR_0, VAR_8, VAR_1,
                                  VAR_4, VAR_10, VAR_6);

    FUNC_7((char const*)VAR_11, VAR_8, VAR_1,
                                  VAR_4, VAR_12, VAR_5);

    FUNC_7((char const*)VAR_0, VAR_8, VAR_1,
                                  VAR_4, VAR_10, VAR_6);

    FUNC_6((char const*)VAR_0, VAR_8, VAR_1,
                                VAR_4, VAR_4);
    FUNC_9(VAR_8);
    FUNC_9(VAR_9);
    FUNC_2(VAR_2);

    return 0;
}
