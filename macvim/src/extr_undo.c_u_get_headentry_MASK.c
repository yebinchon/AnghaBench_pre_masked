
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_entry_T ;
struct TYPE_4__ {TYPE_1__* b_u_newhead; } ;
struct TYPE_3__ {int * uh_entry; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static u_entry_T *
FUNC_2()
{
    if (VAR_0->b_u_newhead == ((void*)0) || VAR_0->b_u_newhead->uh_entry == ((void*)0))
    {
 FUNC_0(FUNC_1("E439: undo list corrupt"));
 return ((void*)0);
    }
    return VAR_0->b_u_newhead->uh_entry;
}
