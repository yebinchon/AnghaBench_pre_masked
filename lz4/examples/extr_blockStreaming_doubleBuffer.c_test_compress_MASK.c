
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmpBuf ;
typedef int LZ4_stream_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char* const,char*,int const,int,int) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,char* const,int) ;
 int FUNC_4 (int *,char*,size_t) ;
 int FUNC_5 (int *,int const) ;

void FUNC_6(FILE* VAR_1, FILE* VAR_2)
{
    LZ4_stream_t VAR_3;
    LZ4_stream_t* VAR_4 = &VAR_3;

    char VAR_5[2][VAR_0];
    int VAR_6 = 0;

    FUNC_2(VAR_4, sizeof (*VAR_4));

    for(;;) {
        char* const VAR_7 = VAR_5[VAR_6];
        const int VAR_8 = (int) FUNC_3(VAR_2, VAR_7, VAR_0);
        if(0 == VAR_8) {
            break;
        }

        {
            char VAR_9[FUNC_0(VAR_0)];
            const int VAR_10 = FUNC_1(
                VAR_4, VAR_7, VAR_9, VAR_8, sizeof(VAR_9), 1);
            if(VAR_10 <= 0) {
                break;
            }
            FUNC_5(VAR_1, VAR_10);
            FUNC_4(VAR_1, VAR_9, (size_t) VAR_10);
        }

        VAR_6 = (VAR_6 + 1) % 2;
    }

    FUNC_5(VAR_1, 0);
}
