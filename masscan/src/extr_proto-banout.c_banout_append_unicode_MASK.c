
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct BannerOutput {int dummy; } ;


 int FUNC_0 (struct BannerOutput*,unsigned int,unsigned int) ;

void
FUNC_1(struct BannerOutput *VAR_0, unsigned VAR_1, unsigned VAR_2)
{
    if (VAR_2 & ~0xFFFF) {
        unsigned VAR_3;
        VAR_3 = 0xF0 | ((VAR_2>>18)&0x03);
        FUNC_0(VAR_0, VAR_1, VAR_3);
        VAR_3 = 0x80 | ((VAR_2>>12)&0x3F);
        FUNC_0(VAR_0, VAR_1, VAR_3);
        VAR_3 = 0x80 | ((VAR_2>> 6)&0x3F);
        FUNC_0(VAR_0, VAR_1, VAR_3);
        VAR_3 = 0x80 | ((VAR_2>> 0)&0x3F);
        FUNC_0(VAR_0, VAR_1, VAR_3);
    } else if (VAR_2 & ~0x7FF) {
        unsigned VAR_4;
        VAR_4 = 0xE0 | ((VAR_2>>12)&0x0F);
        FUNC_0(VAR_0, VAR_1, VAR_4);
        VAR_4 = 0x80 | ((VAR_2>> 6)&0x3F);
        FUNC_0(VAR_0, VAR_1, VAR_4);
        VAR_4 = 0x80 | ((VAR_2>> 0)&0x3F);
        FUNC_0(VAR_0, VAR_1, VAR_4);
    } else if (VAR_2 & ~0x7f) {
        unsigned VAR_5;
        VAR_5 = 0xc0 | ((VAR_2>> 6)&0x1F);
        FUNC_0(VAR_0, VAR_1, VAR_5);
        VAR_5 = 0x80 | ((VAR_2>> 0)&0x3F);
        FUNC_0(VAR_0, VAR_1, VAR_5);
    } else
        FUNC_0(VAR_0, VAR_1, VAR_2);
}
