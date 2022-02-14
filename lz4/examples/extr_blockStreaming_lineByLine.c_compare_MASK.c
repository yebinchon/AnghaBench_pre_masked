
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 size_t FUNC_0 (char* const,int,size_t const,int *) ;
 int FUNC_1 (char* const) ;
 scalar_t__ FUNC_2 (size_t const) ;
 int FUNC_3 (char* const,char* const,size_t const) ;

__attribute__((used)) static int FUNC_4(FILE* VAR_0, FILE* VAR_1)
{
    int VAR_2 = 0;
    const size_t VAR_3 = 65536;
    char* const VAR_4 = (char*) FUNC_2(VAR_3);
    char* const VAR_5 = (char*) FUNC_2(VAR_3);

    while(0 == VAR_2)
    {
        const size_t VAR_6 = FUNC_0(VAR_4, 1, VAR_3, VAR_0);
        const size_t VAR_7 = FUNC_0(VAR_5, 1, VAR_3, VAR_1);

        VAR_2 = (int) VAR_6 - (int) VAR_7;

        if (0 == VAR_6 || 0 == VAR_7) break;
        if (0 == VAR_2) VAR_2 = FUNC_3(VAR_4, VAR_5, VAR_6);
    }

    FUNC_1(VAR_5);
    FUNC_1(VAR_4);
    return VAR_2;
}
