
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct TemplateSet {unsigned int count; struct TemplatePacket* pkts; } const TemplateSet ;
struct TemplatePacket {int length; struct TemplateSet const* packet; } ;
typedef int result ;


 struct TemplateSet const* FUNC_0 (int) ;
 int FUNC_1 (struct TemplateSet const*,struct TemplateSet const*,int) ;

struct TemplateSet FUNC_2(const struct TemplateSet *VAR_0)
{
    struct TemplateSet VAR_1;
    unsigned VAR_2;

    FUNC_1(&VAR_1, VAR_0, sizeof(VAR_1));

    for (VAR_2=0; VAR_2<VAR_0->count; VAR_2++) {
        const struct TemplatePacket *VAR_3 = &VAR_0->pkts[VAR_2];
        struct TemplatePacket *VAR_4 = &VAR_1.pkts[VAR_2];
        VAR_4->packet = FUNC_0(VAR_4->length);
        FUNC_1(VAR_4->packet, VAR_3->packet, VAR_4->length);
    }

    return VAR_1;
}
