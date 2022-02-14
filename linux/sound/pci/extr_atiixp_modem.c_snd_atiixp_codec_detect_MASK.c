
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct atiixp_modem {int codec_not_ready_bits; TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct atiixp_modem*,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct atiixp_modem *VAR_4)
{
 int VAR_5;

 VAR_4->codec_not_ready_bits = 0;
 FUNC_0(VAR_4, VAR_3, VAR_1);

 VAR_5 = 50;
 while (VAR_5-- > 0) {
  FUNC_2(1);
  if (VAR_4->codec_not_ready_bits)
   break;
 }
 FUNC_0(VAR_4, VAR_3, 0);

 if ((VAR_4->codec_not_ready_bits & VAR_0) == VAR_0) {
  FUNC_1(VAR_4->card->dev, "no codec detected!\n");
  return -VAR_2;
 }
 return 0;
}
