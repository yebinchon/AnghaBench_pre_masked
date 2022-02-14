
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct options {int dummy; } ;
struct env_set {int dummy; } ;


 int FUNC_0 (char**) ;
 int VAR_0 ;
 int FUNC_1 (struct options*,char**,int *,int ,int ,int const,unsigned int const,unsigned int*,struct env_set*) ;
 int FUNC_2 (int const,char*,char*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 int FUNC_4 () ;

void
FUNC_5(struct options *VAR_1,
           const int VAR_2,
           char *VAR_3[],
           const int VAR_4,
           const unsigned int VAR_5,
           unsigned int *VAR_6,
           struct env_set *VAR_7)
{
    int VAR_8, VAR_9;


    if (VAR_2 <= 1)
    {
        FUNC_4();
    }


    if (VAR_2 == 2 && FUNC_3(VAR_3[1], "--", 2))
    {
        char *VAR_10[VAR_0];
        FUNC_0(VAR_10);
        VAR_10[0] = "config";
        VAR_10[1] = VAR_3[1];
        FUNC_1(VAR_1, VAR_10, ((void*)0), 0, 0, VAR_4, VAR_5, VAR_6, VAR_7);
    }
    else
    {

        for (VAR_8 = 1; VAR_8 < VAR_2; ++VAR_8)
        {
            char *VAR_11[VAR_0];
            FUNC_0(VAR_11);
            VAR_11[0] = VAR_3[VAR_8];
            if (FUNC_3(VAR_11[0], "--", 2))
            {
                FUNC_2(VAR_4, "I'm trying to parse \"%s\" as an --option parameter but I don't see a leading '--'", VAR_11[0]);
            }
            else
            {
                VAR_11[0] += 2;
            }

            for (VAR_9 = 1; VAR_9 < VAR_0; ++VAR_9)
            {
                if (VAR_8 + VAR_9 < VAR_2)
                {
                    char *VAR_12 = VAR_3[VAR_8 + VAR_9];
                    if (FUNC_3(VAR_12, "--", 2))
                    {
                        VAR_11[VAR_9] = VAR_12;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            FUNC_1(VAR_1, VAR_11, ((void*)0), 0, 0, VAR_4, VAR_5, VAR_6, VAR_7);
            VAR_8 += VAR_9 - 1;
        }
    }
}
