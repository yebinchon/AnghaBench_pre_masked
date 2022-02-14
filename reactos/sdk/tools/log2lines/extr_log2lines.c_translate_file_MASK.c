
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* path; size_t ImageBase; } ;
typedef TYPE_1__ LIST_MEMBER ;


 size_t VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char const*) ;
 TYPE_1__* FUNC_1 (int *,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,size_t*) ;
 int FUNC_4 (int,char*,char*) ;
 int FUNC_5 (char*,size_t,char*) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_2, size_t VAR_3, char *VAR_4)
{
    size_t VAR_5 = 0;
    LIST_MEMBER *VAR_6 = ((void*)0);
    int VAR_7 = 0;
    char *VAR_8, *VAR_9;

    VAR_9 = VAR_8 = FUNC_0(VAR_2);
    if (!VAR_8)
        return 1;


    if (FUNC_3(VAR_8, &VAR_5))
    {
        VAR_6 = FUNC_1(&VAR_1, VAR_8);
        if (VAR_6)
        {
            VAR_8 = VAR_6->path;
            VAR_5 = VAR_6->ImageBase;
            if (VAR_5 == VAR_0)
            {
                FUNC_4(1, "No, or invalid base address: %s\n", VAR_8);
                VAR_7 = 2;
            }
        }
        else
        {
            FUNC_4(1, "Not found in cache: %s\n", VAR_8);
            VAR_7 = 3;
        }
    }

    if (!VAR_7)
    {
        VAR_7 = FUNC_5(VAR_8, VAR_3, VAR_4);
    }

    FUNC_2(VAR_9);
    return VAR_7;
}
