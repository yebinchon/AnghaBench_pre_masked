
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kbuffer {int lost_events; scalar_t__ curr; } ;



int FUNC_0(struct kbuffer *VAR_0)
{

 if (VAR_0->curr)
  return 0;

 return VAR_0->lost_events;
}
