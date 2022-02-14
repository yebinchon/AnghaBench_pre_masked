
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct BannerOutput {unsigned int protocol; struct BannerOutput* next; } ;



__attribute__((used)) static struct BannerOutput *
FUNC_0(struct BannerOutput *VAR_0, unsigned VAR_1)
{
    while (VAR_0 && VAR_0->protocol != VAR_1)
        VAR_0 = VAR_0->next;
    return VAR_0;
}
