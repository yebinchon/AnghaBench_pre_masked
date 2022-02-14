
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ in_call; scalar_t__ object_state; } ;
typedef TYPE_1__ DefaultHandler ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static inline void FUNC_1(DefaultHandler *VAR_1)
{
    VAR_1->in_call--;
    if (VAR_1->in_call == 0 && VAR_1->object_state == VAR_0)
        FUNC_0( VAR_1 );
}
