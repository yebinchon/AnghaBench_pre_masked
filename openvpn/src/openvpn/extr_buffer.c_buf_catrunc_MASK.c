
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {int data; int capacity; } ;


 int FUNC_0 (struct buffer*) ;
 int FUNC_1 (struct buffer*) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*,int) ;

void
FUNC_4(struct buffer *VAR_0, const char *VAR_1)
{
    if (FUNC_0(VAR_0) <= 1)
    {
        int VAR_2 = (int) FUNC_2(VAR_1) + 1;
        if (VAR_2 < FUNC_1(VAR_0))
        {
            FUNC_3((char *)(VAR_0->data + VAR_0->capacity - VAR_2), VAR_1, VAR_2);
        }
    }
}
