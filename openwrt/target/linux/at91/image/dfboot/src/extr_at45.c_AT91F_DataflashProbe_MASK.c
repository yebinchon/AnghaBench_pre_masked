
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* command; } ;
typedef TYPE_1__* AT91PS_DataflashDesc ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;

int FUNC_2(int VAR_0, AT91PS_DataflashDesc VAR_1)
{
 FUNC_1(VAR_0);
    FUNC_0(VAR_1);
    return ((VAR_1->command[1] == 0xFF)? 0: (VAR_1->command[1] & 0x3C));
}
