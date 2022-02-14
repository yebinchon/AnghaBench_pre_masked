
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct BannerOutput {int dummy; } ;
typedef int foo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct BannerOutput*,int ,char*,int ) ;
 int FUNC_1 (char*,int,char*,unsigned int) ;

__attribute__((used)) static void
FUNC_2(struct BannerOutput *VAR_2, unsigned VAR_3)
{
    char VAR_4[16];
    switch (VAR_3) {
        case 0:
            FUNC_0(VAR_2, VAR_1, "invalid", VAR_0);
            break;
        case 1:
            FUNC_0(VAR_2, VAR_1, "none", VAR_0);
            break;
        case 2:
            FUNC_0(VAR_2, VAR_1, "VNC-chap", VAR_0);
            break;
        case 5:
            FUNC_0(VAR_2, VAR_1, "RA2", VAR_0);
            break;
        case 6:
            FUNC_0(VAR_2, VAR_1, "RA2ne", VAR_0);
            break;
        case 7:
            FUNC_0(VAR_2, VAR_1, "SSPI", VAR_0);
            break;
        case 8:
            FUNC_0(VAR_2, VAR_1, "SSPIne", VAR_0);
            break;
        case 16:
            FUNC_0(VAR_2, VAR_1, "Tight", VAR_0);
            break;
        case 17:
            FUNC_0(VAR_2, VAR_1, "Ultra", VAR_0);
            break;
        case 18:
            FUNC_0(VAR_2, VAR_1, "TLS", VAR_0);
            break;
        case 19:
            FUNC_0(VAR_2, VAR_1, "VeNCrypt", VAR_0);
            break;
        case 20:
            FUNC_0(VAR_2, VAR_1, "GTK-VNC-SASL", VAR_0);
            break;
        case 21:
            FUNC_0(VAR_2, VAR_1, "MD5", VAR_0);
            break;
        case 22:
            FUNC_0(VAR_2, VAR_1, "Colin-Dean-xvp", VAR_0);
            break;
        case 30:
            FUNC_0(VAR_2, VAR_1, "Apple30", VAR_0);
            break;
        case 35:
            FUNC_0(VAR_2, VAR_1, "Apple35", VAR_0);
            break;
        default:
            FUNC_1(VAR_4, sizeof(VAR_4), "%u", VAR_3);
            FUNC_0(VAR_2, VAR_1, VAR_4, VAR_0);
            break;
    }
}
