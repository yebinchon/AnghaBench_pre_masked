
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t ;
struct spi_transfer {unsigned char* tx_buf; int len; } ;
struct spi_message {int dummy; } ;
struct rb4xx_cpld {int spi; } ;
typedef int cmd ;


 unsigned char VAR_0 ;
 int FUNC_0 (struct spi_transfer**,int ,int) ;
 int FUNC_1 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_2 (struct spi_message*) ;
 int FUNC_3 (int ,struct spi_message*) ;

__attribute__((used)) static int FUNC_4(struct rb4xx_cpld *VAR_1, unsigned char VAR_2)
{
 struct spi_transfer VAR_3[1];
 struct spi_message VAR_4;
 unsigned char VAR_5[2];
 int VAR_6;

 FUNC_2(&VAR_4);
 FUNC_0(&VAR_3, 0, sizeof(VAR_3));

 VAR_3[0].tx_buf = VAR_5;
 VAR_3[0].len = sizeof(VAR_5);
 FUNC_1(&VAR_3[0], &VAR_4);

 VAR_5[0] = VAR_0;
 VAR_5[1] = VAR_2;

 VAR_6 = FUNC_3(VAR_1->spi, &VAR_4);
 return VAR_6;
}
