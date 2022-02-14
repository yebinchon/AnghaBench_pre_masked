
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fprop_local_single {long events; } ;
struct fprop_global {int events; int sequence; } ;
typedef long s64 ;


 int FUNC_0 (struct fprop_global*,struct fprop_local_single*) ;
 long FUNC_1 (int *) ;
 unsigned int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,unsigned int) ;

void FUNC_4(struct fprop_global *VAR_0,
      struct fprop_local_single *VAR_1,
      unsigned long *VAR_2, unsigned long *VAR_3)
{
 unsigned int VAR_4;
 s64 VAR_5, VAR_6;

 do {
  VAR_4 = FUNC_2(&VAR_0->sequence);
  FUNC_0(VAR_0, VAR_1);
  VAR_5 = VAR_1->events;
  VAR_6 = FUNC_1(&VAR_0->events);
 } while (FUNC_3(&VAR_0->sequence, VAR_4));





 if (VAR_6 <= VAR_5) {
  if (VAR_5)
   VAR_6 = VAR_5;
  else
   VAR_6 = 1;
 }
 *VAR_3 = VAR_6;
 *VAR_2 = VAR_5;
}
