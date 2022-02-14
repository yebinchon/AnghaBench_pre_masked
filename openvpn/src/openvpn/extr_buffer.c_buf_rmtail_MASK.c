
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
struct buffer {int len; } ;


 char* FUNC_0 (struct buffer*) ;

void
FUNC_1(struct buffer *VAR_0, uint8_t VAR_1)
{
    uint8_t *VAR_2 = FUNC_0(VAR_0);
    if (VAR_2 && *VAR_2 == VAR_1)
    {
        *VAR_2 = '\0';
        --VAR_0->len;
    }
}
