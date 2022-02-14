
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int b1 ;
typedef int b0 ;
typedef int FILE ;


 size_t FUNC_0 (char*,int,int,int *) ;
 int FUNC_1 (char*,char*,size_t const) ;

int FUNC_2(FILE* VAR_0, FILE* VAR_1)
{
    int VAR_2 = 0;

    while (VAR_2==0) {
        char VAR_3[1024];
        char VAR_4[1024];
        size_t const VAR_5 = FUNC_0(VAR_3, 1, sizeof(VAR_3), VAR_0);
        size_t const VAR_6 = FUNC_0(VAR_4, 1, sizeof(VAR_4), VAR_1);

        VAR_2 = (VAR_5 != VAR_6);
        if (!VAR_5 || !VAR_6) break;
        if (!VAR_2) VAR_2 = FUNC_1(VAR_3, VAR_4, VAR_5);
    }

    return VAR_2;
}
