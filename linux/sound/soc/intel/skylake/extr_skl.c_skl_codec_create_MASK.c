
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_bus {int codec_mask; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (struct hdac_bus*,int) ;
 int FUNC_2 (struct hdac_bus*,int) ;
 int FUNC_3 (struct hdac_bus*) ;

__attribute__((used)) static void FUNC_4(struct hdac_bus *VAR_1)
{
 int VAR_2, VAR_3;

 VAR_3 = VAR_0;


 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  if ((VAR_1->codec_mask & (1 << VAR_2))) {
   if (FUNC_1(VAR_1, VAR_2) < 0) {




    FUNC_0(VAR_1->dev,
      "Codec #%d probe error; disabling it...\n", VAR_2);
    VAR_1->codec_mask &= ~(1 << VAR_2);
    FUNC_3(VAR_1);
    FUNC_2(VAR_1, 1);
   }
  }
 }
}
