
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_device {size_t addr; int list; struct hdac_bus* bus; } ;
struct hdac_bus {int unsol_work; int num_codecs; int codec_powered; int ** caddr_tbl; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (size_t,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

void FUNC_5(struct hdac_bus *VAR_0,
    struct hdac_device *VAR_1)
{
 FUNC_0(VAR_0 != VAR_1->bus);
 if (FUNC_4(&VAR_1->list))
  return;
 FUNC_3(&VAR_1->list);
 VAR_0->caddr_tbl[VAR_1->addr] = ((void*)0);
 FUNC_1(VAR_1->addr, &VAR_0->codec_powered);
 VAR_0->num_codecs--;
 FUNC_2(&VAR_0->unsol_work);
}
