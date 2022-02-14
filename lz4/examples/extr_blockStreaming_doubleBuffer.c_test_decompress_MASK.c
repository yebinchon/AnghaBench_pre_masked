
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LZ4_streamDecode_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,char* const,int,int) ;
 int FUNC_2 (int *,int *,int ) ;
 size_t FUNC_3 (int *,char*,size_t) ;
 size_t FUNC_4 (int *,int*) ;
 int FUNC_5 (int *,char* const,size_t) ;

void FUNC_6(FILE* VAR_1, FILE* VAR_2)
{
    LZ4_streamDecode_t VAR_3;
    LZ4_streamDecode_t* VAR_4 = &VAR_3;

    char VAR_5[2][VAR_0];
    int VAR_6 = 0;

    FUNC_2(VAR_4, ((void*)0), 0);

    for(;;) {
        char VAR_7[FUNC_0(VAR_0)];
        int VAR_8 = 0;

        {
            const size_t VAR_9 = FUNC_4(VAR_2, &VAR_8);
            if(VAR_9 != 1 || VAR_8 <= 0) {
                break;
            }

            const size_t VAR_10 = FUNC_3(VAR_2, VAR_7, (size_t) VAR_8);
            if(VAR_10 != (size_t) VAR_8) {
                break;
            }
        }

        {
            char* const VAR_11 = VAR_5[VAR_6];
            const int VAR_12 = FUNC_1(
                VAR_4, VAR_7, VAR_11, VAR_8, VAR_0);
            if(VAR_12 <= 0) {
                break;
            }
            FUNC_5(VAR_1, VAR_11, (size_t) VAR_12);
        }

        VAR_6 = (VAR_6 + 1) % 2;
    }
}
