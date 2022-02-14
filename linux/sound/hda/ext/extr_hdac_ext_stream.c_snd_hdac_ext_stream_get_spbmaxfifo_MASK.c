
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_ext_stream {int fifo_addr; } ;
struct hdac_bus {int dev; int spbcap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct hdac_bus *VAR_1,
     struct hdac_ext_stream *VAR_2)
{

 if (!VAR_1->spbcap) {
  FUNC_0(VAR_1->dev, "Address of SPB capability is NULL\n");
  return -VAR_0;
 }

 return FUNC_1(VAR_2->fifo_addr);
}
