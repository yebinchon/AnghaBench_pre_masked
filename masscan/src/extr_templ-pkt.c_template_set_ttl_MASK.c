
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct TemplateSet {unsigned int count; struct TemplatePacket* pkts; } ;
struct TemplatePacket {unsigned char* packet; unsigned int offset_ip; int length; int checksum_ip; } ;


 int FUNC_0 (unsigned char*,unsigned int,int ) ;

void
FUNC_1(struct TemplateSet *VAR_0, unsigned VAR_1)
{
    unsigned VAR_2;

    for (VAR_2=0; VAR_2<VAR_0->count; VAR_2++) {
        struct TemplatePacket *VAR_3 = &VAR_0->pkts[VAR_2];
        unsigned char *VAR_4 = VAR_3->packet;
        unsigned VAR_5 = VAR_3->offset_ip;

        VAR_4[VAR_5+8] = (unsigned char)(VAR_1);
        VAR_3->checksum_ip = FUNC_0( VAR_3->packet,
                                                    VAR_3->offset_ip,
                                                    VAR_3->length);
    }
}
