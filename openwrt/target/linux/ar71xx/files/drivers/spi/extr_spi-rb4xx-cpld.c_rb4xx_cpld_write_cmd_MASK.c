
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tx_buf ;
typedef int t ;
struct spi_transfer {unsigned char* tx_buf; int len; } ;
struct spi_message {int dummy; } ;
struct rb4xx_cpld {int spi; } ;


 int FUNC_0 (struct spi_transfer**,int ,int) ;
 int FUNC_1 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_2 (struct spi_message*) ;
 int FUNC_3 (int ,struct spi_message*) ;

__attribute__((used)) static int FUNC_4(struct rb4xx_cpld *VAR_0, unsigned char VAR_1)
{
 struct spi_transfer VAR_2[1];
 struct spi_message VAR_3;
 unsigned char VAR_4[1];
 int VAR_5;

 FUNC_2(&VAR_3);
 FUNC_0(&VAR_2, 0, sizeof(VAR_2));

 VAR_2[0].tx_buf = VAR_4;
 VAR_2[0].len = sizeof(VAR_4);
 FUNC_1(&VAR_2[0], &VAR_3);

 VAR_4[0] = VAR_1;

 VAR_5 = FUNC_3(VAR_0->spi, &VAR_3);
 return VAR_5;
}
