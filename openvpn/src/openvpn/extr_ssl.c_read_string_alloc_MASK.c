
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {int dummy; } ;


 int FUNC_0 (struct buffer*,char*,int const) ;
 int FUNC_1 (struct buffer*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int const) ;

__attribute__((used)) static char *
FUNC_5(struct buffer *VAR_0)
{
    const int VAR_1 = FUNC_1(VAR_0);
    char *VAR_2;

    if (VAR_1 < 1)
    {
        return ((void*)0);
    }
    VAR_2 = (char *) FUNC_4(VAR_1);
    FUNC_2(VAR_2);
    if (!FUNC_0(VAR_0, VAR_2, VAR_1))
    {
        FUNC_3(VAR_2);
        return ((void*)0);
    }
    VAR_2[VAR_1-1] = '\0';
    return VAR_2;
}
