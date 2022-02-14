
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {void* y; void* x; } ;
struct TYPE_9__ {void* radius; TYPE_5__ center; } ;
struct TYPE_8__ {int npts; int * p; } ;
typedef TYPE_1__ POLYGON ;
typedef TYPE_2__ CIRCLE ;


 int FUNC_0 (int) ;
 void* FUNC_1 (void*,int) ;
 void* FUNC_2 (void*,int ) ;
 int FUNC_3 (TYPE_5__*,TYPE_5__*,int *) ;
 int FUNC_4 (int *,TYPE_5__*) ;

__attribute__((used)) static void
FUNC_5(CIRCLE *VAR_0, POLYGON *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1->npts > 0);

 VAR_0->center.x = 0;
 VAR_0->center.y = 0;
 VAR_0->radius = 0;

 for (VAR_2 = 0; VAR_2 < VAR_1->npts; VAR_2++)
  FUNC_3(&VAR_0->center, &VAR_0->center, &VAR_1->p[VAR_2]);
 VAR_0->center.x = FUNC_1(VAR_0->center.x, VAR_1->npts);
 VAR_0->center.y = FUNC_1(VAR_0->center.y, VAR_1->npts);

 for (VAR_2 = 0; VAR_2 < VAR_1->npts; VAR_2++)
  VAR_0->radius = FUNC_2(VAR_0->radius,
           FUNC_4(&VAR_1->p[VAR_2], &VAR_0->center));
 VAR_0->radius = FUNC_1(VAR_0->radius, VAR_1->npts);
}
