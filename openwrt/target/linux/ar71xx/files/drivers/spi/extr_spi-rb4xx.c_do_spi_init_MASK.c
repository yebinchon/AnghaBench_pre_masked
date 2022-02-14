
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int mode; int chip_select; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;

__attribute__((used)) static inline void FUNC_0(struct spi_device *VAR_4)
{
 unsigned VAR_5 = VAR_0 | VAR_1;

 if (!(VAR_4->mode & VAR_2))
  VAR_5 ^= (VAR_4->chip_select == 2) ? VAR_1 :
      VAR_0;

 VAR_3 = VAR_5;
}
