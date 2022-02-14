
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Banner1 {scalar_t__ http_fields; scalar_t__ smack; } ;


 int FUNC_0 (struct Banner1*) ;
 int FUNC_1 (scalar_t__) ;

void
FUNC_2(struct Banner1 *VAR_0)
{
    if (VAR_0 == ((void*)0))
        return;
    if (VAR_0->smack)
        FUNC_1(VAR_0->smack);
    if (VAR_0->http_fields)
        FUNC_1(VAR_0->http_fields);
    FUNC_0(VAR_0);
}
