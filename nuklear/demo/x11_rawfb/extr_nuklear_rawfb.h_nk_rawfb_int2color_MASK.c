
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nk_color {unsigned int r; unsigned int g; unsigned int b; unsigned int a; int member_3; int member_2; int member_1; int member_0; } ;
typedef int rawfb_pl ;




 int FUNC_0 (char*) ;

__attribute__((used)) static struct nk_color
FUNC_1(const unsigned int VAR_0, rawfb_pl VAR_1)
{
    struct nk_color VAR_2 = {0,0,0,0};

    switch (VAR_1) {
    case 129:
 VAR_2.r = (VAR_0 >> 24) & 0xff;
 VAR_2.g = (VAR_0 >> 16) & 0xff;
 VAR_2.b = (VAR_0 >> 8) & 0xff;
 VAR_2.a = VAR_0 & 0xff;
 break;
    case 128:
 VAR_2.a = (VAR_0 >> 24) & 0xff;
 VAR_2.r = (VAR_0 >> 16) & 0xff;
 VAR_2.g = (VAR_0 >> 8) & 0xff;
 VAR_2.b = VAR_0 & 0xff;
 break;

    default:
 FUNC_0("nk_rawfb_int2color(): Unsupported pixel layout.\n");
 break;
    }
    return VAR_2;
}
