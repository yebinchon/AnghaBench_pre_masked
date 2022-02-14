
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct options {int gc; } ;
struct env_set {int dummy; } ;
typedef int line ;
typedef int FILE ;


 int FUNC_0 (char**) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char**) ;
 int FUNC_2 (struct options*,char**,char const*,int,int,int const,unsigned int const,unsigned int*,struct env_set*) ;
 int FUNC_3 (char**) ;
 int FUNC_4 (int *,char**,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (char*,int,int *) ;
 int FUNC_7 (int const,char*,char const*,int const,...) ;
 scalar_t__ FUNC_8 (char*,char**,scalar_t__,char const*,int,int const,int *) ;
 int * FUNC_9 (char const*,char*) ;
 int FUNC_10 (char*,int) ;
 int * VAR_2 ;
 scalar_t__ FUNC_11 (char const*,char*) ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_14(struct options *VAR_3,
                 const char *VAR_4,
                 int VAR_5,
                 const char *VAR_6,
                 const int VAR_7,
                 const int VAR_8,
                 const unsigned int VAR_9,
                 unsigned int *VAR_10,
                 struct env_set *VAR_11)
{
    const int VAR_12 = 10;
    FILE *VAR_13;
    int VAR_14;
    char VAR_15[VAR_1+1];
    char *VAR_16[VAR_0+1];

    ++VAR_5;
    if (VAR_5 <= VAR_12)
    {
        if (FUNC_11(VAR_4, "stdin"))
        {
            VAR_13 = VAR_2;
        }
        else
        {
            VAR_13 = FUNC_9(VAR_4, "r");
        }
        if (VAR_13)
        {
            VAR_14 = 0;
            while (FUNC_6(VAR_15, sizeof(VAR_15), VAR_13))
            {
                int VAR_17 = 0;
                FUNC_0(VAR_16);
                ++VAR_14;
                if (FUNC_12(VAR_15) == VAR_1)
                {
                    FUNC_7(VAR_8, "In %s:%d: Maximum option line length (%d) exceeded, line starts with %s",
                        VAR_4, VAR_14, VAR_1, VAR_15);
                }


                if (VAR_14 == 1 && FUNC_13(VAR_15, "\xEF\xBB\xBF", 3) == 0)
                {
                    VAR_17 = 3;
                }
                if (FUNC_8(VAR_15 + VAR_17, VAR_16, FUNC_1(VAR_16)-1, VAR_4, VAR_14, VAR_8, &VAR_3->gc))
                {
                    FUNC_3(&VAR_16[0]);
                    FUNC_4(VAR_13, VAR_16, &VAR_3->gc);
                    FUNC_2(VAR_3, VAR_16, VAR_4, VAR_14, VAR_5, VAR_8, VAR_9, VAR_10, VAR_11);
                }
            }
            if (VAR_13 != VAR_2)
            {
                FUNC_5(VAR_13);
            }
        }
        else
        {
            FUNC_7(VAR_8, "In %s:%d: Error opening configuration file: %s", VAR_6, VAR_7, VAR_4);
        }
    }
    else
    {
        FUNC_7(VAR_8, "In %s:%d: Maximum recursive include levels exceeded in include attempt of file %s -- probably you have a configuration file that tries to include itself.", VAR_6, VAR_7, VAR_4);
    }
    FUNC_10(VAR_15, sizeof(VAR_15));
    FUNC_0(VAR_16);
}
