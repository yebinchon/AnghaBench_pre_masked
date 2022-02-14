
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ expires; scalar_t__ date; scalar_t__ options; int contenttype; } ;
typedef TYPE_1__ BUFFER ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(BUFFER *VAR_1)
{
    FUNC_0(VAR_1);

    VAR_1->contenttype = VAR_0;
    VAR_1->options = 0;
    VAR_1->date = 0;
    VAR_1->expires = 0;

    FUNC_1(VAR_1);
}
