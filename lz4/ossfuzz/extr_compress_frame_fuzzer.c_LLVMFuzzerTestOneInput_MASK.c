
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int LZ4F_preferences_t ;
typedef int FUZZ_dataProducer_t ;


 int FUNC_0 (char* const) ;
 int FUNC_1 (int,char*) ;
 int * FUNC_2 (int const*,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 size_t FUNC_5 (int *) ;
 size_t FUNC_6 (int *) ;
 size_t FUNC_7 (char* const,size_t,char* const,size_t const) ;
 size_t FUNC_8 (size_t const,int ,size_t const) ;
 size_t FUNC_9 (char* const,size_t const,int const*,size_t,int const*) ;
 size_t FUNC_10 (size_t,int const*) ;
 int FUNC_11 (size_t const) ;
 int FUNC_12 (char* const) ;
 scalar_t__ FUNC_13 (size_t const) ;
 int FUNC_14 (int const*,char* const,size_t) ;

int FUNC_15(const uint8_t *VAR_0, size_t VAR_1)
{
    FUZZ_dataProducer_t *VAR_2 = FUNC_2(VAR_0, VAR_1);
    LZ4F_preferences_t const VAR_3 = FUNC_4(VAR_2);
    size_t const VAR_4 = FUNC_6(VAR_2);
    VAR_1 = FUNC_5(VAR_2);

    size_t const VAR_5 = FUNC_10(VAR_1, &VAR_3);
    size_t const VAR_6 = FUNC_8(VAR_4, 0, VAR_5);

    char* const VAR_7 = (char*)FUNC_13(VAR_6);
    char* const VAR_8 = (char*)FUNC_13(VAR_1);

    FUNC_0(VAR_7);
    FUNC_0(VAR_8);


    size_t const VAR_9 =
            FUNC_9(VAR_7, VAR_6, VAR_0, VAR_1, &VAR_3);
    if (!FUNC_11(VAR_9)) {
        size_t const VAR_10 = FUNC_7(VAR_8, VAR_1, VAR_7, VAR_9);
        FUNC_1(VAR_10 == VAR_1, "Incorrect regenerated size");
        FUNC_1(!FUNC_14(VAR_0, VAR_8, VAR_1), "Corruption!");
    }

    FUNC_12(VAR_7);
    FUNC_12(VAR_8);
    FUNC_3(VAR_2);

    return 0;
}
