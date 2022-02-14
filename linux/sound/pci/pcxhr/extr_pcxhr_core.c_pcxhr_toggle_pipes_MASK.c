
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcxhr_rmh {int dummy; } ;
struct pcxhr_mgr {TYPE_1__* pci; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct pcxhr_rmh*,int ) ;
 int FUNC_2 (struct pcxhr_mgr*,struct pcxhr_rmh*) ;
 int FUNC_3 (struct pcxhr_rmh*,int,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct pcxhr_mgr *VAR_3, int VAR_4)
{
 struct pcxhr_rmh VAR_5;
 int VAR_6;
 int VAR_7 = 0;

 while (VAR_4) {
  if (VAR_4 & 1) {
   FUNC_1(&VAR_5, VAR_0);
   if (VAR_7 < VAR_2)
    FUNC_3(&VAR_5, 0, 0, 0,
         1 << VAR_7);
   else
    FUNC_3(&VAR_5, 1, 0, 0,
         1 << (VAR_7 - VAR_2));
   VAR_6 = FUNC_2(VAR_3, &VAR_5);
   if (VAR_6) {
    FUNC_0(&VAR_3->pci->dev,
        "error pipe start "
        "(CMD_CONF_PIPE) err=%x!\n", VAR_6);
    return VAR_6;
   }
  }
  VAR_4>>=1;
  VAR_7++;
 }

 FUNC_1(&VAR_5, VAR_1);
 VAR_6 = FUNC_2(VAR_3, &VAR_5);
 if (VAR_6) {
  FUNC_0(&VAR_3->pci->dev,
      "error pipe start (CMD_SEND_IRQA) err=%x!\n",
      VAR_6);
  return VAR_6;
 }
 return 0;
}
