
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_endpoint {int maxframesize; int phase; int freqm; int datainterval; int lock; scalar_t__ fill_max; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct snd_usb_endpoint *VAR_0)
{
 unsigned long VAR_1;
 int VAR_2;

 if (VAR_0->fill_max)
  return VAR_0->maxframesize;

 FUNC_1(&VAR_0->lock, VAR_1);
 VAR_0->phase = (VAR_0->phase & 0xffff)
  + (VAR_0->freqm << VAR_0->datainterval);
 VAR_2 = FUNC_0(VAR_0->phase >> 16, VAR_0->maxframesize);
 FUNC_2(&VAR_0->lock, VAR_1);

 return VAR_2;
}
