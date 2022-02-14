
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef double float8 ;
struct TYPE_10__ {int y; int x; } ;
struct TYPE_9__ {TYPE_1__* p; } ;
struct TYPE_8__ {int npts; TYPE_4__* p; } ;
struct TYPE_7__ {int y; int x; } ;
typedef int Point ;
typedef TYPE_2__ POLYGON ;
typedef TYPE_3__ LSEG ;


 scalar_t__ FUNC_0 (double,double) ;
 double FUNC_1 (int *,TYPE_3__*,int *) ;
 scalar_t__ FUNC_2 (int *,int,TYPE_4__*) ;

__attribute__((used)) static float8
FUNC_3(Point *VAR_0, POLYGON *VAR_1)
{
 float8 VAR_2;
 float8 VAR_3;
 int VAR_4;
 LSEG VAR_5;

 if (FUNC_2(VAR_0, VAR_1->npts, VAR_1->p) != 0)
  return 0.0;


 VAR_5.p[0].x = VAR_1->p[0].x;
 VAR_5.p[0].y = VAR_1->p[0].y;
 VAR_5.p[1].x = VAR_1->p[VAR_1->npts - 1].x;
 VAR_5.p[1].y = VAR_1->p[VAR_1->npts - 1].y;
 VAR_2 = FUNC_1(((void*)0), &VAR_5, VAR_0);


 for (VAR_4 = 0; VAR_4 < VAR_1->npts - 1; VAR_4++)
 {
  VAR_5.p[0].x = VAR_1->p[VAR_4].x;
  VAR_5.p[0].y = VAR_1->p[VAR_4].y;
  VAR_5.p[1].x = VAR_1->p[VAR_4 + 1].x;
  VAR_5.p[1].y = VAR_1->p[VAR_4 + 1].y;
  VAR_3 = FUNC_1(((void*)0), &VAR_5, VAR_0);
  if (FUNC_0(VAR_3, VAR_2))
   VAR_2 = VAR_3;
 }

 return VAR_2;
}
