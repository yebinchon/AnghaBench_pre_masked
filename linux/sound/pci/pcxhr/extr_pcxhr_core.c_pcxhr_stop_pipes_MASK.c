
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
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct pcxhr_rmh*,int ) ;
 int FUNC_2 (struct pcxhr_mgr*,struct pcxhr_rmh*) ;
 int FUNC_3 (struct pcxhr_rmh*,int,int,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct pcxhr_mgr *VAR_2, int VAR_3)
{
 struct pcxhr_rmh VAR_4;
 int VAR_5;
 int VAR_6 = 0;

 while (VAR_3) {
  if (VAR_3 & 1) {
   FUNC_1(&VAR_4, VAR_0);
   if (VAR_6 < VAR_1) {

    FUNC_3(&VAR_4, 0, VAR_6, 0, 0);
   } else {

    FUNC_3(&VAR_4, 1, VAR_6 -
      VAR_1,
      0, 0);
   }
   VAR_5 = FUNC_2(VAR_2, &VAR_4);
   if (VAR_5) {
    FUNC_0(&VAR_2->pci->dev,
        "error pipe stop "
        "(CMD_STOP_PIPE) err=%x!\n", VAR_5);
    return VAR_5;
   }
  }
  VAR_3>>=1;
  VAR_6++;
 }
 return 0;
}
