
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inf_file {int dummy; } ;


 char* FUNC_0 (struct inf_file*,char const*,int) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(struct inf_file *VAR_0, const char *VAR_1, char *VAR_2)
{
    const char *VAR_3, *VAR_4 = ((void*)0);
    int VAR_5 = 0, VAR_6 = 0;
    const char *VAR_7;

    for (VAR_3 = VAR_1; *VAR_3; VAR_3++)
    {
        if (*VAR_3 != '%')
        {
            if (VAR_4)
                VAR_5++;
            else
            {
                if (VAR_2)
                    *VAR_2++ = *VAR_3;
                VAR_6++;
            }

            continue;
        }

        if (!VAR_4)
        {
            VAR_4 = VAR_3;
            VAR_5 = 0;

            continue;
        }

        if (!VAR_5)
        {

            if (VAR_2)
                *VAR_2++ = '%';
            VAR_6 += 1;

            VAR_4 = ((void*)0);
            continue;
        }

        VAR_7 = FUNC_0(VAR_0, VAR_4 + 1, VAR_5);
        if (!VAR_7)
        {
            if (VAR_2)
            {
                FUNC_1(VAR_2, VAR_4, VAR_5 + 2);
                VAR_2 += VAR_5 + 2;
            }
            VAR_6 += VAR_5 + 2;
        }
        else
        {
            int VAR_8 = FUNC_2(VAR_7);

            if (VAR_2)
            {
                FUNC_1(VAR_2, VAR_7, VAR_8);
                VAR_2 += VAR_8;
            }
            VAR_6 += VAR_8;
        }

         VAR_4 = ((void*)0);
    }

    if (VAR_2) *VAR_2 = 0;
    return VAR_6 + 1;
}
