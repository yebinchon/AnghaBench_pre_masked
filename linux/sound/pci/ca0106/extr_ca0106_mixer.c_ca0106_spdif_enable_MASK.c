
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ca0106 {scalar_t__ port; scalar_t__ spdif_enable; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 int FUNC_2 (struct snd_ca0106*,int ,int ) ;
 int FUNC_3 (struct snd_ca0106*,int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct snd_ca0106 *VAR_4)
{
 unsigned int VAR_5;

 if (VAR_4->spdif_enable) {

  FUNC_3(VAR_4, VAR_2, 0, 0xf);
  FUNC_3(VAR_4, VAR_3, 0, 0x0b000000);
  VAR_5 = FUNC_2(VAR_4, VAR_0, 0) & ~0x1000;
  FUNC_3(VAR_4, VAR_0, 0, VAR_5);
  VAR_5 = FUNC_0(VAR_4->port + VAR_1) & ~0x101;
  FUNC_1(VAR_5, VAR_4->port + VAR_1);

 } else {

  FUNC_3(VAR_4, VAR_2, 0, 0xf);
  FUNC_3(VAR_4, VAR_3, 0, 0x000f0000);
  VAR_5 = FUNC_2(VAR_4, VAR_0, 0) | 0x1000;
  FUNC_3(VAR_4, VAR_0, 0, VAR_5);
  VAR_5 = FUNC_0(VAR_4->port + VAR_1) | 0x101;
  FUNC_1(VAR_5, VAR_4->port + VAR_1);
 }
}
