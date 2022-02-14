
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dwDriver; } ;
typedef TYPE_1__* PACMDRVSTREAMINSTANCE ;
typedef int LRESULT ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,void*) ;
 int VAR_0 ;
 int FUNC_2 (char*,TYPE_1__*) ;

__attribute__((used)) static LRESULT FUNC_3(PACMDRVSTREAMINSTANCE VAR_1)
{
    FUNC_2("(%p)\n", VAR_1);

    FUNC_1(FUNC_0(), 0, (void*)VAR_1->dwDriver);
    return VAR_0;
}
