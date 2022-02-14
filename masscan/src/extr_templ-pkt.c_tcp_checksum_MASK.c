
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct TemplatePacket {unsigned char* packet; unsigned int offset_app; unsigned int offset_tcp; int offset_ip; } ;



__attribute__((used)) static unsigned
FUNC_0(struct TemplatePacket *VAR_0)
{
    const unsigned char *VAR_1 = VAR_0->packet;
    unsigned VAR_2 = 0;
    unsigned VAR_3;


    VAR_2 = 6;
    VAR_2 += VAR_0->offset_app - VAR_0->offset_tcp;
    VAR_2 += VAR_1[VAR_0->offset_ip + 12] << 8 | VAR_1[VAR_0->offset_ip + 13];
    VAR_2 += VAR_1[VAR_0->offset_ip + 14] << 8 | VAR_1[VAR_0->offset_ip + 15];
    VAR_2 += VAR_1[VAR_0->offset_ip + 16] << 8 | VAR_1[VAR_0->offset_ip + 17];
    VAR_2 += VAR_1[VAR_0->offset_ip + 18] << 8 | VAR_1[VAR_0->offset_ip + 19];


    for (VAR_3=VAR_0->offset_tcp; VAR_3<VAR_0->offset_app; VAR_3 += 2) {
        VAR_2 += VAR_0->packet[VAR_3]<<8 | VAR_0->packet[VAR_3+1];
    }
    VAR_2 = (VAR_2 & 0xFFFF) + (VAR_2 >> 16);
    VAR_2 = (VAR_2 & 0xFFFF) + (VAR_2 >> 16);
    VAR_2 = (VAR_2 & 0xFFFF) + (VAR_2 >> 16);

    return VAR_2;
}
