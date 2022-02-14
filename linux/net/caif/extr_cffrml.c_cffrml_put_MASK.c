
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cflayer {int dummy; } ;
struct cffrml {int * pcpu_refcnt; } ;


 struct cffrml* FUNC_0 (struct cflayer*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct cflayer *VAR_0)
{
 struct cffrml *VAR_1 = FUNC_0(VAR_0);
 if (VAR_0 != ((void*)0) && VAR_1->pcpu_refcnt != ((void*)0))
  FUNC_1(*VAR_1->pcpu_refcnt);
}
