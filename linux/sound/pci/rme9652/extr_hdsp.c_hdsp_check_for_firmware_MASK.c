
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
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct hdsp*,int ) ;
 int FUNC_2 (struct hdsp*) ;
 scalar_t__ FUNC_3 (struct hdsp*) ;

__attribute__((used)) static int FUNC_4 (struct hdsp *VAR_7, int VAR_8)
{
 if (VAR_7->io_type == VAR_2 || VAR_7->io_type == VAR_1)
  return 0;
 if ((FUNC_1 (VAR_7, VAR_6) & VAR_3) != 0) {
  VAR_7->state &= ~VAR_5;
  if (! VAR_8)
   return -VAR_0;
  FUNC_0(VAR_7->card->dev, "firmware not present.\n");

  if (! (VAR_7->state & VAR_4)) {
   if (! FUNC_2(VAR_7))
    return 0;
   FUNC_0(VAR_7->card->dev,
       "No firmware loaded nor cached, please upload firmware.\n");
   return -VAR_0;
  }
  if (FUNC_3(VAR_7) != 0) {
   FUNC_0(VAR_7->card->dev,
       "Firmware loading from cache failed, please upload manually.\n");
   return -VAR_0;
  }
 }
 return 0;
}
