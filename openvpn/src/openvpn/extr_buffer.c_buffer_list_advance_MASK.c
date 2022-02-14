
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct buffer_list {TYPE_1__* head; } ;
struct buffer {int dummy; } ;
struct TYPE_2__ {struct buffer buf; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct buffer*) ;
 int FUNC_2 (struct buffer*,int) ;
 int FUNC_3 (struct buffer_list*) ;

void
FUNC_4(struct buffer_list *VAR_0, int VAR_1)
{
    if (VAR_0->head)
    {
        struct buffer *VAR_2 = &VAR_0->head->buf;
        FUNC_0(FUNC_2(VAR_2, VAR_1));
        if (!FUNC_1(VAR_2))
        {
            FUNC_3(VAR_0);
        }
    }
}
