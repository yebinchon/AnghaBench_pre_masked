
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* xmlListPtr ;
struct TYPE_7__ {TYPE_1__* sentinel; } ;
struct TYPE_6__ {int next; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;

void
FUNC_2(xmlListPtr VAR_0)
{
    if(!FUNC_1(VAR_0))
        FUNC_0(VAR_0, VAR_0->sentinel->next);
}
