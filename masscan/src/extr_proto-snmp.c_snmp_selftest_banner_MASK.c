
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct BannerOutput {int dummy; } ;
typedef int snmp_response ;


 int VAR_0 ;
 int FUNC_0 (struct BannerOutput*) ;
 int FUNC_1 (struct BannerOutput*) ;
 unsigned char* FUNC_2 (struct BannerOutput*,int ) ;
 size_t FUNC_3 (struct BannerOutput*,int ) ;
 scalar_t__ FUNC_4 (unsigned char const*,char*,size_t) ;
 int FUNC_5 (unsigned char const*,int,struct BannerOutput*,unsigned int*) ;

__attribute__((used)) static int
FUNC_6()
{
    static const unsigned char VAR_1[] = {
        0x30, 0x39,
         0x02, 0x01, 0x00,
         0x04, 0x06, 0x70, 0x75, 0x62, 0x6C, 0x69, 0x63,
         0xA2, 0x2C,
           0x02, 0x01, 0x26,
           0x02, 0x01, 0x00,
           0x02, 0x01, 0x00,
           0x30, 0x21,
            0x30, 0x1F,
              0x06, 0x09,
                0x2B, 0x06, 0x01, 0x80, 0x02, 0x01, 0x01, 0x02, 0x00,
              0x06, 0x12,
                0x2B, 0x06, 0x01, 0x04, 0x01, 0x8F, 0x51, 0x01, 0x01, 0x01, 0x82, 0x29, 0x5D, 0x01, 0x1B, 0x02, 0x02, 0x01,
    };
    unsigned VAR_2 = 0;
    struct BannerOutput VAR_3[1];
    FUNC_0(VAR_3);


    FUNC_5( VAR_1,
                sizeof(VAR_1),
                VAR_3,
                &VAR_2
                );


    if (VAR_2 != 0x26)
        return 1;

    {
        const unsigned char *VAR_4 = FUNC_2(VAR_3, VAR_0);
        size_t VAR_5 = FUNC_3(VAR_3, VAR_0);
        if (FUNC_4(VAR_4, "sysObjectID:okidata.1.1.1.297.93.1.27.2.2.1", VAR_5) != 0)
            return 1;
    }

    FUNC_1(VAR_3);

    return 0;
}
