
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
struct buffer {int dummy; } ;


 int FUNC_0 (struct buffer*) ;
 char* FUNC_1 (struct buffer*) ;

void
FUNC_2(struct buffer *VAR_0)
{
    uint8_t *VAR_1 = FUNC_1(VAR_0);
    int VAR_2 = FUNC_0(VAR_0);
    while (VAR_2--)
    {
        if (*VAR_1 == '\n')
        {
            *VAR_1 = '|';
        }
        ++VAR_1;
    }
}
