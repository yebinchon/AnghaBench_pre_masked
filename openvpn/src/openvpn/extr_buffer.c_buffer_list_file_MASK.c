
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_list {int dummy; } ;
typedef int FILE ;


 struct buffer_list* FUNC_0 (int ) ;
 int FUNC_1 (struct buffer_list*,char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,int,int *) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int) ;
 int * FUNC_6 (char const*,char*) ;

struct buffer_list *
FUNC_7(const char *VAR_0, int VAR_1)
{
    FILE *VAR_2 = FUNC_6(VAR_0, "r");
    struct buffer_list *VAR_3 = ((void*)0);

    if (VAR_2)
    {
        char *VAR_4 = (char *) FUNC_5(VAR_1);
        if (VAR_4)
        {
            VAR_3 = FUNC_0(0);
            while (FUNC_3(VAR_4, VAR_1, VAR_2) != ((void*)0))
            {
                FUNC_1(VAR_3, VAR_4);
            }
            FUNC_4(VAR_4);
        }
        FUNC_2(VAR_2);
    }
    return VAR_3;
}
