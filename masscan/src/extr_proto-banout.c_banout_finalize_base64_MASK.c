
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct BannerOutput {int dummy; } ;
struct BannerBase64 {unsigned int temp; int state; } ;


 char* VAR_0 ;
 int FUNC_0 (struct BannerOutput*,unsigned int,char) ;

void
FUNC_1(struct BannerOutput *VAR_1, unsigned VAR_2,
                       struct BannerBase64 *VAR_3)
{
    unsigned VAR_4 = VAR_3->temp;
    switch (VAR_3->state) {
        case 0:
            break;
        case 1:
            FUNC_0(VAR_1, VAR_2, VAR_0[(VAR_4>>18)&0x3F]);
            FUNC_0(VAR_1, VAR_2, VAR_0[(VAR_4>>12)&0x3F]);
            FUNC_0(VAR_1, VAR_2, '=');
            FUNC_0(VAR_1, VAR_2, '=');
            break;
        case 2:
            FUNC_0(VAR_1, VAR_2, VAR_0[(VAR_4>>18)&0x3F]);
            FUNC_0(VAR_1, VAR_2, VAR_0[(VAR_4>>12)&0x3F]);
            FUNC_0(VAR_1, VAR_2, VAR_0[(VAR_4>>6)&0x3F]);
            FUNC_0(VAR_1, VAR_2, '=');
            break;
    }
}
