
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct atiixp {int codec_not_ready_bits; TYPE_1__* card; int pci; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct atiixp*,int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct atiixp *VAR_5)
{
 int VAR_6;

 VAR_5->codec_not_ready_bits = 0;
 if (VAR_4 == -1)
  VAR_4 = FUNC_0(VAR_5->pci);
 if (VAR_4 >= 0) {
  VAR_5->codec_not_ready_bits |=
   VAR_1 ^ (1 << (VAR_4 + 10));
  return 0;
 }

 FUNC_1(VAR_5, VAR_3, VAR_1);

 VAR_6 = 50;
 while (VAR_6-- > 0) {
  FUNC_3(1);
  if (VAR_5->codec_not_ready_bits)
   break;
 }
 FUNC_1(VAR_5, VAR_3, 0);

 if ((VAR_5->codec_not_ready_bits & VAR_0) == VAR_0) {
  FUNC_2(VAR_5->card->dev, "no codec detected!\n");
  return -VAR_2;
 }
 return 0;
}
