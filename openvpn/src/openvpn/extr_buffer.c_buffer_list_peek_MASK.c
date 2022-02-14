
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct buffer_list {TYPE_1__* head; } ;
struct buffer {int dummy; } ;
struct TYPE_2__ {struct buffer buf; } ;



struct buffer *
FUNC_0(struct buffer_list *VAR_0)
{
    if (VAR_0 && VAR_0->head)
    {
        return &VAR_0->head->buf;
    }
    else
    {
        return ((void*)0);
    }
}
