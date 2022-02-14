
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_device {int dummy; } ;
struct hdac_chmap {struct hdac_device* hdac; int ops; } ;


 int VAR_0 ;
 int FUNC_0 () ;

void FUNC_1(struct hdac_device *VAR_1,
    struct hdac_chmap *VAR_2)
{
 VAR_2->ops = VAR_0;
 VAR_2->hdac = VAR_1;
 FUNC_0();
}
