
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int b1 ;
typedef int b0 ;
typedef int FILE ;


 int FUNC_0 (char*,char*,size_t const) ;
 size_t FUNC_1 (int *,char*,int) ;

int FUNC_2(FILE* VAR_0, FILE* VAR_1)
{
    int VAR_2 = 0;

    while(0 == VAR_2) {
        char VAR_3[65536];
        char VAR_4[65536];
        const size_t VAR_5 = FUNC_1(VAR_0, VAR_3, sizeof(VAR_3));
        const size_t VAR_6 = FUNC_1(VAR_1, VAR_4, sizeof(VAR_4));

        VAR_2 = (int) VAR_5 - (int) VAR_6;

        if(0 == VAR_5 || 0 == VAR_6) {
            break;
        }
        if(0 == VAR_2) {
            VAR_2 = FUNC_0(VAR_3, VAR_4, VAR_5);
        }
    }

    return VAR_2;
}
