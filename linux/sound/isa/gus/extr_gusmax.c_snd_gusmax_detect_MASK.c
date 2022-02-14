
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int port; } ;
struct snd_gus_card {TYPE_1__ gf1; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char FUNC_0 (struct snd_gus_card*,int ) ;
 int FUNC_1 (struct snd_gus_card*,int ,int) ;
 int FUNC_2 (char*,int ,unsigned char) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct snd_gus_card *VAR_2)
{
 unsigned char VAR_3;

 FUNC_1(VAR_2, VAR_1, 0);
 if (((VAR_3 = FUNC_0(VAR_2, VAR_1)) & 0x07) != 0) {
  FUNC_2("[0x%lx] check 1 failed - 0x%x\n", VAR_2->gf1.port, VAR_3);
  return -VAR_0;
 }
 FUNC_3(160);
 FUNC_1(VAR_2, VAR_1, 1);
 FUNC_3(160);
 if (((VAR_3 = FUNC_0(VAR_2, VAR_1)) & 0x07) != 1) {
  FUNC_2("[0x%lx] check 2 failed - 0x%x\n", VAR_2->gf1.port, VAR_3);
  return -VAR_0;
 }

 return 0;
}
