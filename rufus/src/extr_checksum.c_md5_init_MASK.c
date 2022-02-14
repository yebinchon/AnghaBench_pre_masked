
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* state; } ;
typedef TYPE_1__ SUM_CONTEXT ;


 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_1(SUM_CONTEXT *VAR_0)
{
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->state[0] = 0x67452301;
 VAR_0->state[1] = 0xefcdab89;
 VAR_0->state[2] = 0x98badcfe;
 VAR_0->state[3] = 0x10325476;
}
