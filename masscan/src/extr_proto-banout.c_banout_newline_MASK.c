
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct BannerOutput {scalar_t__ length; } ;


 int FUNC_0 (struct BannerOutput*,unsigned int,char) ;
 struct BannerOutput* FUNC_1 (struct BannerOutput*,unsigned int) ;

void
FUNC_2(struct BannerOutput *VAR_0, unsigned VAR_1)
{
    struct BannerOutput *VAR_2;

    VAR_2 = FUNC_1(VAR_0, VAR_1);
    if (VAR_2 && VAR_2->length) {
        FUNC_0(VAR_0, VAR_1, '\n');
    }
}
