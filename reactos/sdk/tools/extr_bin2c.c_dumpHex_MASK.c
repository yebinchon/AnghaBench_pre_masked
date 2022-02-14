
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ FUNC_0 (int *) ;
 unsigned char FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,...) ;

__attribute__((used)) static size_t FUNC_3(FILE* VAR_0, FILE* VAR_1, char VAR_2)
{
    size_t VAR_3 = 0;
    unsigned char VAR_4;

    FUNC_2(VAR_1, "\n{");
    do
    {

        VAR_4 = FUNC_1(VAR_0);

        if (FUNC_0(VAR_0) && VAR_2)
            VAR_4 = 0x00;

        if (!FUNC_0(VAR_0) || VAR_2)
        {

            if ((VAR_3 % 16) == 0)
                FUNC_2(VAR_1, "\n   ");


            FUNC_2(VAR_1, " 0x%02x,", (unsigned int)VAR_4);

            ++VAR_3;
        }
    } while (!FUNC_0(VAR_0));
    FUNC_2(VAR_1, "\n}");

    return VAR_3;
}
