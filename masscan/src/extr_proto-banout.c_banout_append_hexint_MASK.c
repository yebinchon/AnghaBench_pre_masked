
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct BannerOutput {int dummy; } ;


 int FUNC_0 (struct BannerOutput*,unsigned int,char) ;

void
FUNC_1(struct BannerOutput *VAR_0, unsigned VAR_1, unsigned long long VAR_2, int VAR_3)
{
    if (VAR_3 == 0) {
        for (VAR_3=16; VAR_3>0; VAR_3--)
            if (VAR_2>>((VAR_3-1)*4) & 0xF)
                break;
    }

    for (;VAR_3>0; VAR_3--) {
        char VAR_4 = "0123456789abcdef"[(VAR_2>>(unsigned long long)((VAR_3-1)*4)) & 0xF];
        FUNC_0(VAR_0, VAR_1, VAR_4);
    }
}
