
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skl_dev {int dsp; } ;
struct hdac_bus {int ppcap; } ;


 int FUNC_0 (int ) ;
 struct hdac_bus* FUNC_1 (struct skl_dev*) ;
 int FUNC_2 (struct hdac_bus*,int) ;
 int FUNC_3 (struct hdac_bus*,int) ;

int FUNC_4(struct skl_dev *VAR_0)
{
 struct hdac_bus *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;


 if (!VAR_1->ppcap)
  return 0;

 VAR_2 = FUNC_0(VAR_0->dsp);
 if (VAR_2 < 0)
  return VAR_2;


 FUNC_3(VAR_1, 0);
 FUNC_2(VAR_1, 0);

 return 0;
}
