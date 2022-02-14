
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vars {size_t nmatch; TYPE_1__* pmatch; } ;
struct subre {int subno; } ;
typedef int chr ;
struct TYPE_2__ {void* rm_eo; void* rm_so; } ;


 int FUNC_0 (char*) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(struct vars *VAR_0,
    struct subre *VAR_1,
    chr *VAR_2,
    chr *VAR_3)
{
 int VAR_4 = VAR_1->subno;

 FUNC_2(VAR_4 > 0);
 if ((size_t) VAR_4 >= VAR_0->nmatch)
  return;

 FUNC_0(("setting %d\n", VAR_4));
 VAR_0->pmatch[VAR_4].rm_so = FUNC_1(VAR_2);
 VAR_0->pmatch[VAR_4].rm_eo = FUNC_1(VAR_3);
}
