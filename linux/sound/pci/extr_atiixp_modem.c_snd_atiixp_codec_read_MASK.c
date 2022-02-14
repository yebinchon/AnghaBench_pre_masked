
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct atiixp_modem {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_0 (struct atiixp_modem*,int ) ;
 int FUNC_1 (struct atiixp_modem*,int ,unsigned int) ;
 int FUNC_2 (int ,char*,unsigned short) ;
 scalar_t__ FUNC_3 (struct atiixp_modem*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static unsigned short FUNC_5(struct atiixp_modem *VAR_7,
         unsigned short VAR_8,
         unsigned short VAR_9)
{
 unsigned int VAR_10;
 int VAR_11;

 if (FUNC_3(VAR_7) < 0)
  return 0xffff;
 VAR_10 = (VAR_9 << VAR_3) |
  VAR_2 |
  VAR_4 |
  VAR_8;
 FUNC_1(VAR_7, VAR_6, VAR_10);
 if (FUNC_3(VAR_7) < 0)
  return 0xffff;
 VAR_11 = 1000;
 do {
  VAR_10 = FUNC_0(VAR_7, VAR_5);
  if (VAR_10 & VAR_1)
   return VAR_10 >> VAR_0;
  FUNC_4(1);
 } while (--VAR_11);

 if (VAR_9 < 0x7c)
  FUNC_2(VAR_7->card->dev, "codec read timeout (reg %x)\n", VAR_9);
 return 0xffff;
}
