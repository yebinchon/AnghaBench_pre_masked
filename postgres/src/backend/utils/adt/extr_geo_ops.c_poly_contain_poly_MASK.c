
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * p; } ;
struct TYPE_6__ {scalar_t__ npts; int * p; int boundbox; } ;
typedef TYPE_1__ POLYGON ;
typedef TYPE_2__ LSEG ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,TYPE_1__*,int ) ;

__attribute__((used)) static bool
FUNC_3(POLYGON *VAR_0, POLYGON *VAR_1)
{
 int VAR_2;
 LSEG VAR_3;

 FUNC_0(VAR_0->npts > 0 && VAR_1->npts > 0);





 if (!FUNC_1(&VAR_0->boundbox, &VAR_1->boundbox))
  return 0;

 VAR_3.p[0] = VAR_1->p[VAR_1->npts - 1];

 for (VAR_2 = 0; VAR_2 < VAR_1->npts; VAR_2++)
 {
  VAR_3.p[1] = VAR_1->p[VAR_2];
  if (!FUNC_2(VAR_3.p, VAR_3.p + 1, VAR_0, 0))
   return 0;
  VAR_3.p[0] = VAR_3.p[1];
 }

 return 1;
}
