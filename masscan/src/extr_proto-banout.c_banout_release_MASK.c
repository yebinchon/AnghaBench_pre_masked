
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct BannerOutput {struct BannerOutput* next; } ;


 int FUNC_0 (struct BannerOutput*) ;
 int FUNC_1 (struct BannerOutput*) ;

void
FUNC_2(struct BannerOutput *VAR_0)
{
    while (VAR_0->next) {
        struct BannerOutput *VAR_1 = VAR_0->next->next;
        FUNC_1(VAR_0->next);
        VAR_0->next = VAR_1;
    }
    FUNC_0(VAR_0);
}
