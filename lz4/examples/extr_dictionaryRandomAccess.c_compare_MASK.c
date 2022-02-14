
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int b1 ;
typedef int b0 ;
typedef int FILE ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,char*,size_t const) ;
 size_t FUNC_2 (int *,char*,int ) ;

int FUNC_3(FILE* VAR_0, FILE* VAR_1, int VAR_2)
{
    int VAR_3 = 0;

    while(0 == VAR_3) {
        char VAR_4[4096];
        char VAR_5[4096];
        const size_t VAR_6 = FUNC_2(VAR_0, VAR_4, FUNC_0(VAR_2, (int)sizeof(VAR_4)));
        const size_t VAR_7 = FUNC_2(VAR_1, VAR_5, FUNC_0(VAR_2, (int)sizeof(VAR_5)));

        VAR_3 = (int) VAR_6 - (int) VAR_7;

        if(0 == VAR_6 || 0 == VAR_7) {
            break;
        }
        if(0 == VAR_3) {
            VAR_3 = FUNC_1(VAR_4, VAR_5, VAR_6);
        }
        VAR_2 -= VAR_6;
    }

    return VAR_3;
}
