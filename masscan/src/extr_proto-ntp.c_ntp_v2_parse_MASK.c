
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct BannerOutput {int dummy; } ;


 int FUNC_0 (unsigned char const*,unsigned int,struct BannerOutput*,unsigned int*) ;

__attribute__((used)) static void
FUNC_1(const unsigned char *VAR_0,
           unsigned VAR_1,
           struct BannerOutput *VAR_2,
           unsigned *VAR_3)
{
    unsigned VAR_4;

    if (VAR_1 < 4)
        return;


    if ((VAR_0[0]>>7) != 1)
        return;


    if (((VAR_0[0]>>3)&7) != 2)
        return;


    VAR_4 = VAR_0[0] & 7;
    switch (VAR_4) {
        case 6:
            break;
        case 7:
            FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
            break;
    }



}
