
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct lwan_strbuf* buffer; } ;
struct lwan_strbuf {int flags; TYPE_1__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct lwan_strbuf*) ;

void FUNC_2(struct lwan_strbuf *VAR_2)
{
    if (FUNC_0(!VAR_2))
        return;
    if (!(VAR_2->flags & VAR_1))
        FUNC_1(VAR_2->value.buffer);
    if (VAR_2->flags & VAR_0)
        FUNC_1(VAR_2);
}
