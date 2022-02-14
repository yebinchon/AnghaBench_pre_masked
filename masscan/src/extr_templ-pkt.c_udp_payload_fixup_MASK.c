
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct TemplatePacket {unsigned char* packet; int offset_app; int length; int payloads; } ;
typedef scalar_t__ (* SET_COOKIE ) (unsigned char*,unsigned int,unsigned int) ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned char*,unsigned char const*,unsigned int) ;
 int FUNC_2 (int ,unsigned int,unsigned char const**,unsigned int*,unsigned int*,int *,scalar_t__ (*) (unsigned char*,unsigned int,unsigned int)) ;

__attribute__((used)) static void
FUNC_3(struct TemplatePacket *VAR_0, unsigned VAR_1, unsigned VAR_2)
{
    const unsigned char *VAR_3 = 0;
    unsigned VAR_4 = 0;
    unsigned VAR_5 = 0x1000;
    uint64_t VAR_6 = 0;
    unsigned char *VAR_7 = VAR_0->packet;
    SET_COOKIE VAR_8 = 0;

    FUNC_0(VAR_2);

    FUNC_2(VAR_0->payloads,
                    VAR_1,
                    &VAR_3,
                    &VAR_4,
                    &VAR_5,
                    &VAR_6,
                    VAR_8);

    FUNC_1( VAR_7+VAR_0->offset_app,
            VAR_3,
            VAR_4);

    if (VAR_8)
        VAR_6 += VAR_8(VAR_7+VAR_0->offset_app,
                    VAR_4,
                    VAR_2);

    VAR_0->length = VAR_0->offset_app + VAR_4;
}
