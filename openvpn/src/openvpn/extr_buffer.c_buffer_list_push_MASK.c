
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct buffer_list {int dummy; } ;
struct TYPE_2__ {size_t len; } ;
struct buffer_entry {TYPE_1__ buf; } ;


 struct buffer_entry* FUNC_0 (struct buffer_list*,char const*,size_t const) ;
 size_t FUNC_1 (char const*) ;

void
FUNC_2(struct buffer_list *VAR_0, const char *VAR_1)
{
    if (VAR_1)
    {
        const size_t VAR_2 = FUNC_1((const char *)VAR_1);
        struct buffer_entry *VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2+1);
        if (VAR_3)
        {
            VAR_3->buf.len = VAR_2;
        }
    }
}
