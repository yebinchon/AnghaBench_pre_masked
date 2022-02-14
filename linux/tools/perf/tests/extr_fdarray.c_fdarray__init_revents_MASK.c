
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fdarray {int nr; int nr_alloc; TYPE_1__* entries; } ;
struct TYPE_2__ {int fd; short revents; } ;



__attribute__((used)) static void FUNC_0(struct fdarray *VAR_0, short VAR_1)
{
 int VAR_2;

 VAR_0->nr = VAR_0->nr_alloc;

 for (VAR_2 = 0; VAR_2 < VAR_0->nr; ++VAR_2) {
  VAR_0->entries[VAR_2].fd = VAR_0->nr - VAR_2;
  VAR_0->entries[VAR_2].revents = VAR_1;
 }
}
