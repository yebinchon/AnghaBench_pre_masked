
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct echoaudio {TYPE_2__* comm_page; TYPE_1__* card; scalar_t__ digital_in_automute; } ;
typedef scalar_t__ __le32 ;
struct TYPE_4__ {scalar_t__ control_register; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct echoaudio*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct echoaudio*,int ) ;
 scalar_t__ FUNC_4 (struct echoaudio*) ;

__attribute__((used)) static int FUNC_5(struct echoaudio *VAR_3, u32 VAR_4, char VAR_5)
{
 __le32 VAR_6;


 if (VAR_3->digital_in_automute)
  VAR_4 |= VAR_2;
 else
  VAR_4 &= ~VAR_2;

 FUNC_2(VAR_3->card->dev, "write_control_reg: 0x%x\n", VAR_4);


 VAR_6 = FUNC_1(VAR_4);
 if (VAR_6 != VAR_3->comm_page->control_register || VAR_5) {
  if (FUNC_4(VAR_3))
   return -VAR_1;
  VAR_3->comm_page->control_register = VAR_6;
  FUNC_0(VAR_3);
  return FUNC_3(VAR_3, VAR_0);
 }
 return 0;
}
