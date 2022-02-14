
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hdac_bus {int * last_cmd; } ;
struct azx {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (struct azx*,int ) ;
 int FUNC_2 (struct azx*,unsigned int) ;
 int FUNC_3 (struct azx*,int ,int ) ;
 int FUNC_4 (struct azx*,int ,int) ;
 struct azx* FUNC_5 (struct hdac_bus*) ;
 int FUNC_6 (int ,char*,int,int ) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct hdac_bus *VAR_5, u32 VAR_6)
{
 struct azx *VAR_7 = FUNC_5(VAR_5);
 unsigned int VAR_8 = FUNC_0(VAR_6);
 int VAR_9 = 50;

 VAR_5->last_cmd[FUNC_0(VAR_6)] = VAR_6;
 while (VAR_9--) {

  if (!((FUNC_1(VAR_7, VAR_4) & VAR_0))) {

   FUNC_4(VAR_7, VAR_4, FUNC_1(VAR_7, VAR_4) |
       VAR_1);
   FUNC_3(VAR_7, VAR_3, VAR_6);
   FUNC_4(VAR_7, VAR_4, FUNC_1(VAR_7, VAR_4) |
       VAR_0);
   return FUNC_2(VAR_7, VAR_8);
  }
  FUNC_8(1);
 }
 if (FUNC_7())
  FUNC_6(VAR_7->card->dev,
   "send_cmd timeout: IRS=0x%x, val=0x%x\n",
   FUNC_1(VAR_7, VAR_4), VAR_6);
 return -VAR_2;
}
