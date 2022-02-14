
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct TemplateSet {struct TemplatePacket* pkts; } ;
struct TemplatePacket {unsigned char* packet; unsigned int offset_ip; } ;


 size_t VAR_0 ;

unsigned
FUNC_0(struct TemplateSet *VAR_1)
{
    struct TemplatePacket *VAR_2 = &VAR_1->pkts[VAR_0];
    const unsigned char *VAR_3 = VAR_2->packet;
    unsigned VAR_4 = VAR_2->offset_ip;

    return VAR_3[VAR_4+12]<<24 | VAR_3[VAR_4+13]<<16
        | VAR_3[VAR_4+14]<<8 | VAR_3[VAR_4+15]<<0;
}
