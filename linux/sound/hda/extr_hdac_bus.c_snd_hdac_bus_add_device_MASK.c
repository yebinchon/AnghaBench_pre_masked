
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_device {size_t addr; int list; } ;
struct hdac_bus {int num_codecs; int codec_powered; struct hdac_device** caddr_tbl; int codec_list; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,size_t) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (size_t,int *) ;

int FUNC_3(struct hdac_bus *VAR_1, struct hdac_device *VAR_2)
{
 if (VAR_1->caddr_tbl[VAR_2->addr]) {
  FUNC_0(VAR_1->dev, "address 0x%x is already occupied\n",
   VAR_2->addr);
  return -VAR_0;
 }

 FUNC_1(&VAR_2->list, &VAR_1->codec_list);
 VAR_1->caddr_tbl[VAR_2->addr] = VAR_2;
 FUNC_2(VAR_2->addr, &VAR_1->codec_powered);
 VAR_1->num_codecs++;
 return 0;
}
