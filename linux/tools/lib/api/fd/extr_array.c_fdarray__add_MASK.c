
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fdarray {int nr; int nr_alloc; TYPE_1__* entries; int nr_autogrow; } ;
struct TYPE_2__ {int fd; short events; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct fdarray*,int ) ;

int FUNC_1(struct fdarray *VAR_1, int VAR_2, short VAR_3)
{
 int VAR_4 = VAR_1->nr;

 if (VAR_1->nr == VAR_1->nr_alloc &&
     FUNC_0(VAR_1, VAR_1->nr_autogrow) < 0)
  return -VAR_0;

 VAR_1->entries[VAR_1->nr].fd = VAR_2;
 VAR_1->entries[VAR_1->nr].events = VAR_3;
 VAR_1->nr++;
 return VAR_4;
}
