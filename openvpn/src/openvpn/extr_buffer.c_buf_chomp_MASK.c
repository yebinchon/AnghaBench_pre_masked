
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {int dummy; } ;


 scalar_t__ FUNC_0 (struct buffer*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct buffer*,int) ;
 int FUNC_2 (struct buffer*) ;
 scalar_t__ FUNC_3 (char,int) ;

void
FUNC_4(struct buffer *VAR_2)
{
    while (1)
    {
        char *VAR_3 = (char *) FUNC_0(VAR_2);
        if (!VAR_3)
        {
            break;
        }
        if (FUNC_3(*VAR_3, VAR_0|VAR_1))
        {
            if (!FUNC_1(VAR_2, -1))
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
    FUNC_2(VAR_2);
}
