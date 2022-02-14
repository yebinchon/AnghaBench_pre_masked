
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct BannerOutput {unsigned int protocol; int length; struct BannerOutput* next; } ;



unsigned
FUNC_0(const struct BannerOutput *VAR_0, unsigned VAR_1)
{
    while (VAR_0 && VAR_0->protocol != VAR_1)
        VAR_0 = VAR_0->next;

    if (VAR_0)
        return VAR_0->length;
    else
        return 0;
}
