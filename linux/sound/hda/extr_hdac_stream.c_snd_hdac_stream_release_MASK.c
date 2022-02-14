
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_stream {int * substream; scalar_t__ running; scalar_t__ opened; struct hdac_bus* bus; } ;
struct hdac_bus {int reg_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct hdac_stream *VAR_0)
{
 struct hdac_bus *VAR_1 = VAR_0->bus;

 FUNC_0(&VAR_1->reg_lock);
 VAR_0->opened = 0;
 VAR_0->running = 0;
 VAR_0->substream = ((void*)0);
 FUNC_1(&VAR_1->reg_lock);
}
