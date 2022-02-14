
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int LZ4_stream_t ;
typedef int FILE ;


 size_t FUNC_0 (size_t) ;
 int FUNC_1 (int * const,char* const,char* const,int,size_t const,int) ;
 int * FUNC_2 () ;
 int FUNC_3 (int * const) ;
 int FUNC_4 (char* const,int,int *) ;
 int FUNC_5 (char* const) ;
 scalar_t__ FUNC_6 (size_t const) ;
 size_t FUNC_7 () ;
 scalar_t__ FUNC_8 (int *,char* const,int const) ;
 scalar_t__ FUNC_9 (char* const) ;
 int FUNC_10 (int *,char* const,int const) ;
 int FUNC_11 (int *,int ) ;

__attribute__((used)) static void FUNC_12(
    FILE* VAR_0,
    FILE* VAR_1,
    size_t VAR_2,
    size_t VAR_3)
{
    LZ4_stream_t* const VAR_4 = FUNC_2();
    const size_t VAR_5 = FUNC_0(VAR_2);
    char* const VAR_6 = (char*) FUNC_6(VAR_5);
    char* const VAR_7 = (char*) FUNC_6(VAR_3);
    int VAR_8 = 0;

    for ( ; ; )
    {
        char* const VAR_9 = &VAR_7[VAR_8];
        int VAR_10 = 0;
        if (!FUNC_4(VAR_9, (int) VAR_2, VAR_1))
            break;
        VAR_10 = (int) FUNC_9(VAR_9);


        {
            const int VAR_11 = FUNC_1(
                VAR_4, VAR_9, VAR_6, VAR_10, VAR_5, 1);
            if (VAR_11 <= 0) break;
            FUNC_11(VAR_0, (uint16_t) VAR_11);
            FUNC_10(VAR_0, VAR_6, VAR_11);


            VAR_8 += VAR_10;
            if ((size_t)VAR_8 >= VAR_3 - VAR_2) VAR_8 = 0;
        }
    }
    FUNC_11(VAR_0, 0);

    FUNC_5(VAR_7);
    FUNC_5(VAR_6);
    FUNC_3(VAR_4);
}
