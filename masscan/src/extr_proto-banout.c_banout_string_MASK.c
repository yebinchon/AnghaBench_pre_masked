
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct BannerOutput {int protocol; unsigned char const* banner; struct BannerOutput* next; } ;



const unsigned char *
FUNC_0(const struct BannerOutput *VAR_0, unsigned VAR_1)
{
    while (VAR_0 && (VAR_0->protocol&0xFFFF) != VAR_1)
        VAR_0 = VAR_0->next;

    if (VAR_0)
        return VAR_0->banner;
    else
        return ((void*)0);
}
