
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mixart_mgr {int dsp_loaded; TYPE_1__* pci; } ;
struct firmware {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (struct mixart_mgr*,int,struct firmware const*) ;
 int FUNC_2 (struct firmware const*) ;
 scalar_t__ FUNC_3 (struct firmware const**,char*,int *) ;
 int FUNC_4 (char*,char*,char*) ;

int FUNC_5(struct mixart_mgr *VAR_1)
{
 static char *VAR_2[3] = {
  "miXart8.xlx", "miXart8.elf", "miXart8AES.xlx"
 };
 char VAR_3[32];

 const struct firmware *VAR_4;
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < 3; VAR_5++) {
  FUNC_4(VAR_3, "mixart/%s", VAR_2[VAR_5]);
  if (FUNC_3(&VAR_4, VAR_3, &VAR_1->pci->dev)) {
   FUNC_0(&VAR_1->pci->dev,
    "miXart: can't load firmware %s\n", VAR_3);
   return -VAR_0;
  }

  VAR_6 = FUNC_1(VAR_1, VAR_5, VAR_4);
  FUNC_2(VAR_4);
  if (VAR_6 < 0)
   return VAR_6;
  VAR_1->dsp_loaded |= 1 << VAR_5;
 }
 return 0;
}
