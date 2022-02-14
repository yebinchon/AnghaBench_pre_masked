
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 unsigned char FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,...) ;

__attribute__((used)) static size_t FUNC_3(FILE* VAR_0, FILE* VAR_1)
{
    size_t VAR_2 = 0;
    unsigned char VAR_3;


    FUNC_2(VAR_1, "\n    \"");
    do
    {

        VAR_3 = FUNC_1(VAR_0);


        if (!FUNC_0(VAR_0))
        {

            if ((VAR_2 != 0) && (VAR_2 % 16) == 0)
            {

                FUNC_2(VAR_1, "\"");
                FUNC_2(VAR_1, "\n    \"");
            }


            FUNC_2(VAR_1, "\\x%02x", (unsigned int)VAR_3);
        }

        else
        {
            FUNC_2(VAR_1, "\"");

        }

        ++VAR_2;

    } while (!FUNC_0(VAR_0));

    return VAR_2;
}
