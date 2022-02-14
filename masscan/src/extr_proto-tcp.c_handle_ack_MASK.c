
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct TCP_Control_Block {int ip_them; scalar_t__ seqno_me; scalar_t__ ackno_them; scalar_t__ ackno_me; } ;


 int FUNC_0 (int,char*,int,int,int,int,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(
    struct TCP_Control_Block *VAR_0,
    uint32_t VAR_1)
{

    FUNC_0(4, "%u.%u.%u.%u - %u-sending, %u-reciving\n",
            (VAR_0->ip_them>>24)&0xFF, (VAR_0->ip_them>>16)&0xFF, (VAR_0->ip_them>>8)&0xFF, (VAR_0->ip_them>>0)&0xFF,
            VAR_0->seqno_me - VAR_1,
            VAR_1 - VAR_0->ackno_them
            );


    if (VAR_1 == VAR_0->ackno_them) {
        return 0;
    }



    if (VAR_1 - VAR_0->ackno_them > 10000) {
        FUNC_0(4, "%u.%u.%u.%u - "
                "tcb: ackno from past: "
                "old ackno = 0x%08x, this ackno = 0x%08x\n",
                (VAR_0->ip_them>>24)&0xFF, (VAR_0->ip_them>>16)&0xFF, (VAR_0->ip_them>>8)&0xFF, (VAR_0->ip_them>>0)&0xFF,
                VAR_0->ackno_me, VAR_1);
        return 0;
    }



    if (VAR_0->seqno_me - VAR_1 > 10000) {
        FUNC_0(4, "%u.%u.%u.%u - "
                "tcb: ackno from future: "
                "my seqno = 0x%08x, their ackno = 0x%08x\n",
                (VAR_0->ip_them>>24)&0xFF, (VAR_0->ip_them>>16)&0xFF, (VAR_0->ip_them>>8)&0xFF, (VAR_0->ip_them>>0)&0xFF,
                VAR_0->seqno_me, VAR_1);
        return 0;
    }


    VAR_0->ackno_them = VAR_1;


    return 1;
}
