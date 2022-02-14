
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fdarray {int nr; int * priv; TYPE_1__* entries; } ;
struct TYPE_2__ {short revents; } ;



int FUNC_0(struct fdarray *VAR_0, short VAR_1,
      void (*VAR_2)(struct fdarray *VAR_3, int VAR_4, void *VAR_5),
      void *VAR_6)
{
 int VAR_7, VAR_8 = 0;

 if (VAR_0->nr == 0)
  return 0;

 for (VAR_7 = 0; VAR_7 < VAR_0->nr; ++VAR_7) {
  if (VAR_0->entries[VAR_7].revents & VAR_1) {
   if (VAR_2)
    VAR_2(VAR_0, VAR_7, VAR_6);

   continue;
  }

  if (VAR_7 != VAR_8) {
   VAR_0->entries[VAR_8] = VAR_0->entries[VAR_7];
   VAR_0->priv[VAR_8] = VAR_0->priv[VAR_7];
  }

  ++VAR_8;
 }

 return VAR_0->nr = VAR_8;
}
