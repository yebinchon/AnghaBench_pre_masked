
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct BannerOutput {int dummy; } ;
typedef int foo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct BannerOutput*,int ,char*,int ) ;
 int FUNC_1 (char*,int,char*,unsigned int,unsigned int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(struct BannerOutput *VAR_3, unsigned VAR_4,
               unsigned VAR_5)
{
    char VAR_6[64];

    switch (VAR_4<<8 | VAR_5) {
        case 0x0300:
            FUNC_0(VAR_3, VAR_1, "SSLv3 ", VAR_0);
            FUNC_0( VAR_3, VAR_2, "SSL[v3] ", VAR_0);
            break;
        case 0x0301:
            FUNC_0(VAR_3, VAR_1, "TLS/1.0 ", VAR_0);
            break;
        case 0x0302:
            FUNC_0(VAR_3, VAR_1, "TLS/1.1 ", VAR_0);
            break;
        case 0x0303:
            FUNC_0(VAR_3, VAR_1, "TLS/1.2 ", VAR_0);
            break;
        case 0x0304:
            FUNC_0(VAR_3, VAR_1, "TLS/1.3 ", VAR_0);
            break;
        default:
            FUNC_1(VAR_6, sizeof(VAR_6), "SSLver[%u,%u] ",
                      VAR_4,
                      VAR_5);
            FUNC_0(VAR_3, VAR_1, VAR_6, FUNC_2(VAR_6));
    }
}
