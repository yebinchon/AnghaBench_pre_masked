
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int UINT ;
struct TYPE_3__ {int style; unsigned int buffer_limit; } ;
typedef TYPE_1__ EDITSTATE ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,int) ;

__attribute__((used)) static void FUNC_1(EDITSTATE *VAR_1, UINT VAR_2)
{
    if (!VAR_2) VAR_2 = ~0u;
    if (!(VAR_1->style & VAR_0)) VAR_2 = FUNC_0(VAR_2, 0x7ffffffe);
    VAR_1->buffer_limit = VAR_2;
}
