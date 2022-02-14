
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nk_color {int r; int g; int b; unsigned int a; } ;
typedef int rawfb_pl ;




 int FUNC_0 (char*) ;

__attribute__((used)) static unsigned int
FUNC_1(const struct nk_color VAR_0, rawfb_pl VAR_1)
{
    unsigned int VAR_2 = 0;

    switch (VAR_1) {
    case 129:
 VAR_2 |= VAR_0.r << 24;
 VAR_2 |= VAR_0.g << 16;
 VAR_2 |= VAR_0.b << 8;
 VAR_2 |= VAR_0.a;
 break;
    case 128:
 VAR_2 |= VAR_0.a << 24;
 VAR_2 |= VAR_0.r << 16;
 VAR_2 |= VAR_0.g << 8;
 VAR_2 |= VAR_0.b;
 break;

    default:
 FUNC_0("nk_rawfb_color2int(): Unsupported pixel layout.\n");
 break;
    }
    return (VAR_2);
}
