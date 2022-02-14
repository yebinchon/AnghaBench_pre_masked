
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ARP_IncomingRequest {int is_valid; unsigned char hardware_type; unsigned char protocol_type; unsigned char hardware_length; unsigned char protocol_length; unsigned char opcode; unsigned char const* mac_src; unsigned char ip_src; unsigned char const* mac_dst; unsigned char ip_dst; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(struct ARP_IncomingRequest *VAR_0,
                const unsigned char VAR_1[], unsigned VAR_2, unsigned VAR_3)
{




    FUNC_0(8);
    VAR_0->is_valid = 0;

    VAR_0->hardware_type = VAR_1[VAR_2]<<8 | VAR_1[VAR_2+1];
    VAR_0->protocol_type = VAR_1[VAR_2+2]<<8 | VAR_1[VAR_2+3];
    VAR_0->hardware_length = VAR_1[VAR_2+4];
    VAR_0->protocol_length = VAR_1[VAR_2+5];
    VAR_0->opcode = VAR_1[VAR_2+6]<<8 | VAR_1[VAR_2+7];
    VAR_2 += 8;


    if (VAR_0->protocol_length != 4 && VAR_0->hardware_length != 6)
        return;
    if (VAR_0->protocol_type != 0x0800)
        return;
    if (VAR_0->hardware_type != 1 && VAR_0->hardware_type != 6)
        return;




    FUNC_0(2 * VAR_0->hardware_length + 2 * VAR_0->protocol_length);
    VAR_0->mac_src = VAR_1+VAR_2;
    VAR_2 += VAR_0->hardware_length;

    VAR_0->ip_src = VAR_1[VAR_2+0]<<24 | VAR_1[VAR_2+1]<<16 | VAR_1[VAR_2+2]<<8 | VAR_1[VAR_2+3];
    VAR_2 += VAR_0->protocol_length;

    VAR_0->mac_dst = VAR_1+VAR_2;
    VAR_2 += VAR_0->hardware_length;

    VAR_0->ip_dst = VAR_1[VAR_2+0]<<24 | VAR_1[VAR_2+1]<<16 | VAR_1[VAR_2+2]<<8 | VAR_1[VAR_2+3];


    VAR_0->is_valid = 1;
}
