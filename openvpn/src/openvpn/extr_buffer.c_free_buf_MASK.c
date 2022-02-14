
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {scalar_t__ data; } ;


 int FUNC_0 (struct buffer) ;
 int FUNC_1 (scalar_t__) ;

void
FUNC_2(struct buffer *VAR_0)
{
    if (VAR_0->data)
    {
        FUNC_1(VAR_0->data);
    }
    FUNC_0(*VAR_0);
}
