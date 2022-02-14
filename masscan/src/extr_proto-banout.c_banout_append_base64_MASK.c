
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct BannerOutput {int dummy; } ;
struct BannerBase64 {unsigned int temp; unsigned int state; } ;


 int * VAR_0 ;
 int FUNC_0 (struct BannerOutput*,unsigned int,int ) ;

void
FUNC_1(struct BannerOutput *VAR_1, unsigned VAR_2,
                     const void *VAR_3, size_t VAR_4,
                     struct BannerBase64 *VAR_5)
{
    const unsigned char *VAR_6 = (const unsigned char *)VAR_3;
    size_t VAR_7;
    unsigned VAR_8 = VAR_5->temp;
    unsigned VAR_9 = VAR_5->state;

    for (VAR_7=0; VAR_7<VAR_4; VAR_7++) {
        switch (VAR_9) {
            case 0:
                VAR_8 = VAR_6[VAR_7]<<16;
                VAR_9++;
                break;
            case 1:
                VAR_8 |= VAR_6[VAR_7]<<8;
                VAR_9++;
                break;
            case 2:
                VAR_8 |= VAR_6[VAR_7];
                VAR_9 = 0;
                FUNC_0(VAR_1, VAR_2, VAR_0[(VAR_8>>18)&0x3F]);
                FUNC_0(VAR_1, VAR_2, VAR_0[(VAR_8>>12)&0x3F]);
                FUNC_0(VAR_1, VAR_2, VAR_0[(VAR_8>> 6)&0x3F]);
                FUNC_0(VAR_1, VAR_2, VAR_0[(VAR_8>> 0)&0x3F]);
        }
    }

    VAR_5->temp = VAR_8;
    VAR_5->state = VAR_9;
}
