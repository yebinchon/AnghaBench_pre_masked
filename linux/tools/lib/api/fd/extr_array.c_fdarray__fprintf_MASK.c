
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fdarray {int nr; TYPE_1__* entries; } ;
struct TYPE_2__ {int fd; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;

int FUNC_1(struct fdarray *VAR_0, FILE *VAR_1)
{
 int VAR_2, VAR_3 = FUNC_0(VAR_1, "%d [ ", VAR_0->nr);

 for (VAR_2 = 0; VAR_2 < VAR_0->nr; ++VAR_2)
  VAR_3 += FUNC_0(VAR_1, "%s%d", VAR_2 ? ", " : "", VAR_0->entries[VAR_2].fd);

 return VAR_3 + FUNC_0(VAR_1, " ]");
}
