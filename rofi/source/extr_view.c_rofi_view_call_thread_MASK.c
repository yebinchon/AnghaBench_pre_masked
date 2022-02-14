
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* callback ) (TYPE_1__*,scalar_t__) ;} ;
typedef TYPE_1__ thread_state ;
typedef scalar_t__ gpointer ;


 int FUNC_0 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void FUNC_1 ( gpointer VAR_0, gpointer VAR_1 )
{
    thread_state *VAR_2 = (thread_state *) VAR_0;
    VAR_2->callback ( VAR_2, VAR_1 );
}
