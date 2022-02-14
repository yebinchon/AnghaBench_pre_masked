
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdsp {scalar_t__ io_type; int state; TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct hdsp*,int ) ;
 int FUNC_3 (unsigned int) ;

__attribute__((used)) static int FUNC_4(struct hdsp *VAR_6, unsigned int VAR_7,
          unsigned int VAR_8)
{
 unsigned int VAR_9;

 if (VAR_6->io_type == VAR_2 || VAR_6->io_type == VAR_1)
  return 0;

 for (VAR_9 = 0; VAR_9 != VAR_7; ++VAR_9) {
  if (FUNC_2(VAR_6, VAR_5) & VAR_3)
   FUNC_3(VAR_8);
  else {
   FUNC_0(VAR_6->card->dev, "iobox found after %ums!\n",
       VAR_9 * VAR_8);
   return 0;
  }
 }

 FUNC_1(VAR_6->card->dev, "no IO box connected!\n");
 VAR_6->state &= ~VAR_4;
 return -VAR_0;
}
