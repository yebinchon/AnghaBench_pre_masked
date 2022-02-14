
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct TemplateSet {struct TemplatePacket* pkts; } ;
struct TemplatePacket {unsigned char* packet; unsigned int offset_tcp; int checksum_tcp; } ;


 int FUNC_0 (struct TemplatePacket*) ;

void
FUNC_1(struct TemplateSet *VAR_0, unsigned VAR_1)
{
    int VAR_2;

    for (VAR_2=0; VAR_2<2; VAR_2++) {
        struct TemplatePacket *VAR_3 = &VAR_0->pkts[VAR_2];
        unsigned char *VAR_4 = VAR_3->packet;
        unsigned VAR_5 = VAR_3->offset_tcp;

        VAR_4[VAR_5+0] = (unsigned char)(VAR_1>>8);
        VAR_4[VAR_5+1] = (unsigned char)(VAR_1>>0);
        VAR_3->checksum_tcp = FUNC_0(VAR_3);
    }

}
