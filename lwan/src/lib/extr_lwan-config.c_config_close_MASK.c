
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int strbuf; } ;
struct TYPE_3__ {int sz; scalar_t__ addr; } ;
struct config {TYPE_2__ parser; struct config* error_message; TYPE_1__ mapped; } ;


 int FUNC_0 (struct config*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,int ) ;

void FUNC_3(struct config *VAR_0)
{
    if (!VAR_0)
        return;


    if (VAR_0->mapped.addr)
        FUNC_2(VAR_0->mapped.addr, VAR_0->mapped.sz);


    FUNC_0(VAR_0->error_message);
    FUNC_1(&VAR_0->parser.strbuf);
    FUNC_0(VAR_0);
}
