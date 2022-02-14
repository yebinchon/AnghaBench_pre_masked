
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {int dummy; } ;


 scalar_t__ FUNC_0 (struct buffer*) ;
 int FUNC_1 (struct buffer*,int) ;
 int FUNC_2 (struct buffer*,int) ;
 int FUNC_3 (struct buffer*,int ) ;

void
FUNC_4(struct buffer *VAR_0)
{
    char *VAR_1 = (char *) FUNC_0(VAR_0);
    if (VAR_1 && *VAR_1 == '\0')
    {
        return;
    }

    if (!FUNC_2(VAR_0, 1))
    {
        FUNC_1(VAR_0, -1);
    }

    FUNC_3(VAR_0, 0);
}
