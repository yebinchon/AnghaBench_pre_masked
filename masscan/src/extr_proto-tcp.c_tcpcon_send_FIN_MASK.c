
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
typedef int tcb ;
struct TCP_Control_Block {unsigned int ip_me; unsigned int ip_them; unsigned short port_me; unsigned short port_them; void* ackno_them; void* seqno_them; void* ackno_me; void* seqno_me; } ;
struct TCP_ConnectionTable {int dummy; } ;


 int FUNC_0 (struct TCP_Control_Block*,char*) ;
 int FUNC_1 (struct TCP_Control_Block*,int ,int) ;
 int FUNC_2 (struct TCP_ConnectionTable*,struct TCP_Control_Block*,int,int ,int ,int ) ;

void
FUNC_3(
                struct TCP_ConnectionTable *VAR_0,
                unsigned VAR_1, unsigned VAR_2,
                unsigned VAR_3, unsigned VAR_4,
                uint32_t VAR_5, uint32_t VAR_6)
{
    struct TCP_Control_Block VAR_7;

    FUNC_1(&VAR_7, 0, sizeof(VAR_7));

    VAR_7.ip_me = VAR_1;
    VAR_7.ip_them = VAR_2;
    VAR_7.port_me = (unsigned short)VAR_3;
    VAR_7.port_them = (unsigned short)VAR_4;
    VAR_7.seqno_me = VAR_6;
    VAR_7.ackno_me = VAR_5 + 1;
    VAR_7.seqno_them = VAR_5 + 1;
    VAR_7.ackno_them = VAR_6;

    FUNC_0(&VAR_7, "peer(FIN) fake");
    FUNC_2(VAR_0, &VAR_7, 0x11, 0, 0, 0);
}
