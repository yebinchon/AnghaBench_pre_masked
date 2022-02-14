
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hdac_bus {scalar_t__ mlcap; } ;
struct azx {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct hdac_bus* FUNC_1 (struct azx*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct azx *VAR_2)
{
 struct hdac_bus *VAR_3 = FUNC_1(VAR_2);
 static int VAR_4[] = { 2, 3, 1, 4, 5 };
 u32 VAR_5, VAR_6;
 int VAR_7;

 VAR_5 = FUNC_3(VAR_3->mlcap + VAR_0 + VAR_1);

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_4); VAR_7++) {
  VAR_6 = VAR_4[VAR_7];
  if (VAR_5 & (1 << VAR_6))
   return VAR_6;
 }

 FUNC_2(VAR_2->card->dev, "set audio clock frequency to 6MHz");
 return 0;
}
