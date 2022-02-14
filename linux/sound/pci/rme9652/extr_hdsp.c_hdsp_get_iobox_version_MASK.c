
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdsp {TYPE_1__* card; void* io_type; } ;
struct TYPE_2__ {int dev; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct hdsp*,int ,int ) ;
 int FUNC_2 (struct hdsp*,int ) ;
 int FUNC_3 (struct hdsp*,int ,int) ;

__attribute__((used)) static int FUNC_4 (struct hdsp *VAR_15)
{
 if ((FUNC_2 (VAR_15, VAR_10) & VAR_1) != 0) {

  FUNC_3(VAR_15, VAR_7, VAR_6);
  FUNC_3(VAR_15, VAR_8, 0);

  if (FUNC_1(VAR_15, 0, VAR_5) < 0) {
   FUNC_3(VAR_15, VAR_7, VAR_4);
   FUNC_3(VAR_15, VAR_7, VAR_6);
  }

  FUNC_3(VAR_15, VAR_7, VAR_3 | VAR_2);
  FUNC_3 (VAR_15, VAR_8, 0);
  if (FUNC_1(VAR_15, 0, VAR_5) < 0)
   goto set_multi;

  FUNC_3(VAR_15, VAR_7, VAR_6);
  FUNC_3(VAR_15, VAR_8, 0);
  if (FUNC_1(VAR_15, 0, VAR_5) == 0) {
   VAR_15->io_type = VAR_0;
   FUNC_0(VAR_15->card->dev, "Digiface found\n");
   return 0;
  }

  FUNC_3(VAR_15, VAR_7, VAR_4);
  FUNC_3(VAR_15, VAR_7, VAR_6);
  FUNC_3(VAR_15, VAR_8, 0);
  if (FUNC_1(VAR_15, 0, VAR_5) == 0)
   goto set_multi;

  FUNC_3(VAR_15, VAR_7, VAR_4);
  FUNC_3(VAR_15, VAR_7, VAR_6);
  FUNC_3(VAR_15, VAR_8, 0);
  if (FUNC_1(VAR_15, 0, VAR_5) < 0)
   goto set_multi;

  VAR_15->io_type = VAR_14;
  FUNC_0(VAR_15->card->dev, "RPM found\n");
  return 0;
 } else {

  if (FUNC_2(VAR_15, VAR_9) & VAR_12)
   VAR_15->io_type = VAR_14;
  else if (FUNC_2(VAR_15, VAR_9) & VAR_11)
   VAR_15->io_type = VAR_13;
  else
   VAR_15->io_type = VAR_0;
 }
 return 0;

set_multi:
 VAR_15->io_type = VAR_13;
 FUNC_0(VAR_15->card->dev, "Multiface found\n");
 return 0;
}
