
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xmlChar ;
struct TYPE_3__ {int * content; scalar_t__ error; } ;
typedef TYPE_1__ xmlBuf ;



xmlChar *
FUNC_0(const xmlBuf *VAR_0)
{
    if ((!VAR_0) || (VAR_0->error))
        return ((void*)0);

    return(VAR_0->content);
}
