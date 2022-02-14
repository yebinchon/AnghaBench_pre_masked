
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct TemplatePacket {scalar_t__ offset_tcp; scalar_t__ length; int packet; } ;


 int FUNC_0 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static unsigned
FUNC_1(struct TemplatePacket *VAR_0)
{
    return FUNC_0(
                         VAR_0->packet,
                         VAR_0->offset_tcp,
                         VAR_0->length - VAR_0->offset_tcp);
}
