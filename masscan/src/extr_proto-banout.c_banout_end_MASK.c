
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct BannerOutput {int protocol; scalar_t__ length; } ;


 struct BannerOutput* FUNC_0 (struct BannerOutput*,unsigned int) ;

void
FUNC_1(struct BannerOutput *VAR_0, unsigned VAR_1)
{
    struct BannerOutput *VAR_2;

    VAR_2 = FUNC_0(VAR_0, VAR_1);
    if (VAR_2 && VAR_2->length) {
        VAR_2->protocol |= 0x80000000;
    }
}
