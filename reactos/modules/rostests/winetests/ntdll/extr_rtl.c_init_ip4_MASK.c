
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int s_b1; int s_b2; int s_b3; int s_b4; } ;
struct TYPE_6__ {int S_addr; TYPE_1__ S_un_b; } ;
struct TYPE_7__ {TYPE_2__ S_un; } ;
typedef TYPE_3__ IN_ADDR ;



__attribute__((used)) static void FUNC_0(IN_ADDR* VAR_0, const int VAR_1[4])
{
    if (!VAR_1 || VAR_1[0] == -1)
    {
        VAR_0->S_un.S_addr = 0xabababab;
    }
    else
    {
        VAR_0->S_un.S_un_b.s_b1 = VAR_1[0];
        VAR_0->S_un.S_un_b.s_b2 = VAR_1[1];
        VAR_0->S_un.S_un_b.s_b3 = VAR_1[2];
        VAR_0->S_un.S_un_b.s_b4 = VAR_1[3];
    }
}
