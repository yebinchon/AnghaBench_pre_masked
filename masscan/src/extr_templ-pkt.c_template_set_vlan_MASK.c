
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct TemplateSet {unsigned int count; struct TemplatePacket* pkts; } ;
struct TemplatePacket {int length; unsigned char* packet; int offset_ip; int offset_tcp; int offset_app; } ;


 unsigned char* FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,unsigned char*,int) ;

void
FUNC_2(struct TemplateSet *VAR_0, unsigned VAR_1)
{
    unsigned VAR_2;

    for (VAR_2=0; VAR_2<VAR_0->count; VAR_2++) {
        struct TemplatePacket *VAR_3 = &VAR_0->pkts[VAR_2];
        unsigned char *VAR_4;

        if (VAR_3->length < 14)
            continue;

        VAR_4 = FUNC_0(VAR_3->length + 4);
        FUNC_1(VAR_4, VAR_3->packet, 12);
        FUNC_1(VAR_4+16, VAR_3->packet+12, VAR_3->length - 12);

        VAR_4[12] = 0x81;
        VAR_4[13] = 0x00;
        VAR_4[14] = (unsigned char)(VAR_1>>8);
        VAR_4[15] = (unsigned char)(VAR_1>>0);

        VAR_3->packet = VAR_4;
        VAR_3->length += 4;

        VAR_3->offset_ip += 4;
        VAR_3->offset_tcp += 4;
        VAR_3->offset_app += 4;
    }
}
