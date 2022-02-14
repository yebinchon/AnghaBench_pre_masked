
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int LZ4_streamDecode_t ;
typedef int FILE ;


 size_t FUNC_0 (size_t) ;
 int * FUNC_1 () ;
 int FUNC_2 (int * const,char* const,char* const,scalar_t__,int) ;
 int FUNC_3 (int * const) ;
 int FUNC_4 (char* const) ;
 scalar_t__ FUNC_5 (size_t) ;
 scalar_t__ FUNC_6 (int *,char* const,scalar_t__) ;
 int FUNC_7 (int *,scalar_t__*) ;
 int FUNC_8 (int *,char* const,int const) ;

__attribute__((used)) static void FUNC_9(
    FILE* VAR_0,
    FILE* VAR_1,
    size_t VAR_2,
    size_t VAR_3)
{
    LZ4_streamDecode_t* const VAR_4 = FUNC_1();
    char* const VAR_5 = (char*) FUNC_5(FUNC_0(VAR_2));
    char* const VAR_6 = (char*) FUNC_5(VAR_3);
    int VAR_7 = 0;

    for ( ; ; )
    {
        uint16_t VAR_8 = 0;

        if (FUNC_7(VAR_1, &VAR_8) != 1) break;
        if (VAR_8 == 0) break;
        if (FUNC_6(VAR_1, VAR_5, VAR_8) != VAR_8) break;

        {
            char* const VAR_9 = &VAR_6[VAR_7];
            const int VAR_10 = FUNC_2(
                VAR_4, VAR_5, VAR_9, VAR_8, (int) VAR_2);
            if (VAR_10 <= 0) break;
            FUNC_8(VAR_0, VAR_9, VAR_10);


            VAR_7 += VAR_10;
            if ((size_t)VAR_7 >= VAR_3 - VAR_2) VAR_7 = 0;
        }
    }

    FUNC_4(VAR_6);
    FUNC_4(VAR_5);
    FUNC_3(VAR_4);
}
