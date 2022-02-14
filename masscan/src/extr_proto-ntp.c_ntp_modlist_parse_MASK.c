
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct BannerOutput {int dummy; } ;
typedef int msg ;
typedef int foo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int*) ;
 int FUNC_1 (struct BannerOutput*,int ,char const*,int ) ;
 int VAR_2 ;
 int FUNC_2 (char*,int,char*,unsigned int,...) ;
 char* FUNC_3 (int ,unsigned int) ;

__attribute__((used)) static void
FUNC_4(const unsigned char *VAR_3,
             unsigned VAR_4,
             struct BannerOutput *VAR_5,
             unsigned *VAR_6)
{
    unsigned VAR_7 = 4;
    unsigned VAR_8;
    unsigned VAR_9;
    unsigned VAR_10;

    FUNC_0(VAR_6);

    if (VAR_7 + 4 >= VAR_4)
        return;

    VAR_8 = (VAR_3[VAR_7]>>4)&0xF;
    VAR_9 = (VAR_3[VAR_7+0]&0xF) << 8 | VAR_3[VAR_7+1];
    VAR_10 = (VAR_3[VAR_7+2]&0xF) << 8 | VAR_3[VAR_7+3];

    if (VAR_8) {
        char VAR_11[12];
        const char *VAR_12 = FUNC_3(VAR_2, VAR_8);
        if (VAR_12 == 0)
            VAR_12 = "Bogus Error Code";
        FUNC_2(VAR_11, sizeof(VAR_11), "%u", VAR_8);
        FUNC_1(VAR_5, VAR_1, "Response was NTP Error Code ", VAR_0);
        FUNC_1(VAR_5, VAR_1, VAR_11, VAR_0);
        FUNC_1(VAR_5, VAR_1, " - \"", VAR_0);
        FUNC_1(VAR_5, VAR_1, VAR_12, VAR_0);
        FUNC_1(VAR_5, VAR_1, "\"", VAR_0);
        return;
    }

    if (4 + VAR_9 * VAR_10 > VAR_4) {
        FUNC_1(VAR_5, VAR_1, "response-too-big", VAR_0);
        return;
    }
    if (VAR_9 * VAR_10 > 500) {
        FUNC_1(VAR_5, VAR_1, "response-too-big", VAR_0);
        return;
    }



    {
        char VAR_13[128];

        FUNC_2(VAR_13, sizeof(VAR_13), " response-size=%u-bytes more=%s",
            VAR_9 * VAR_10, ((VAR_3[0]>>6)&1)?"true":"false");

        FUNC_1(VAR_5, VAR_1, VAR_13, VAR_0);
    }
}
