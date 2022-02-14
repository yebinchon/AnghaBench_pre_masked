
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int mode; int chip_select; } ;
struct cns3xxx_spi {int dummy; } ;




 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cns3xxx_spi* FUNC_0 (struct spi_device*) ;

__attribute__((used)) static void FUNC_1(struct spi_device *VAR_4, int VAR_5)
{
 struct cns3xxx_spi *VAR_6 = FUNC_0(VAR_4);
 unsigned int VAR_7;

 switch (VAR_5) {
 case 128:
  break;

 case 129:
  VAR_7 = VAR_0;

  if (VAR_4->mode & VAR_1)
   VAR_7 |= (0x1 << 13);
  else
   VAR_7 &= ~(0x1 << 13);

  if (VAR_4->mode & VAR_2)
   VAR_7 |= (0x1 << 14);
  else
   VAR_7 &= ~(0x1 << 14);


  VAR_0 = VAR_7;

  VAR_3 &= ~(0x7);
  VAR_3 |= (VAR_4->chip_select & 0x3);

  break;
 }
}
