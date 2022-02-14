
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct cns3xxx_spi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cns3xxx_spi*) ;
 int FUNC_1 (struct cns3xxx_spi*) ;
 int FUNC_2 (struct cns3xxx_spi*) ;

u8 FUNC_3(struct cns3xxx_spi *VAR_4, u8 VAR_5, u8 VAR_6,
       u32 VAR_7, u32 * VAR_8)
{
 u8 VAR_9;
 u8 VAR_10;

 while (!FUNC_0(VAR_4)) ;

 while (!FUNC_2(VAR_4)) ;

 VAR_3 &= ~(0x7);
 VAR_3 |= (VAR_5 & 0x3) | ((VAR_6 & 0x1) << 2);

 VAR_2 = VAR_7;

 while (!FUNC_1(VAR_4)) ;

 VAR_9 = VAR_1 & 0x3;
 VAR_10 = (VAR_1 & (0x1 << 2)) ? 1 : 0;

 *VAR_8 = VAR_0;

 if ((VAR_5 != VAR_9) || (VAR_6 != VAR_10)) {
  return 0;
 } else {
  return 1;
 }
}
