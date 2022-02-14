
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* float8 ;
struct TYPE_9__ {void* y; void* x; } ;
struct TYPE_8__ {void* y; void* x; } ;
struct TYPE_10__ {TYPE_3__ high; TYPE_2__ low; } ;
struct TYPE_11__ {int npts; TYPE_4__ boundbox; TYPE_1__* p; } ;
struct TYPE_7__ {void* y; void* x; } ;
typedef TYPE_5__ POLYGON ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (void*,void*) ;
 scalar_t__ FUNC_2 (void*,void*) ;

__attribute__((used)) static void
FUNC_3(POLYGON *VAR_0)
{
 int VAR_1;
 float8 VAR_2,
    VAR_3,
    VAR_4,
    VAR_5;

 FUNC_0(VAR_0->npts > 0);

 VAR_2 = VAR_4 = VAR_0->p[0].x;
 VAR_5 = VAR_3 = VAR_0->p[0].y;
 for (VAR_1 = 1; VAR_1 < VAR_0->npts; VAR_1++)
 {
  if (FUNC_2(VAR_0->p[VAR_1].x, VAR_2))
   VAR_2 = VAR_0->p[VAR_1].x;
  if (FUNC_1(VAR_0->p[VAR_1].x, VAR_4))
   VAR_4 = VAR_0->p[VAR_1].x;
  if (FUNC_2(VAR_0->p[VAR_1].y, VAR_3))
   VAR_3 = VAR_0->p[VAR_1].y;
  if (FUNC_1(VAR_0->p[VAR_1].y, VAR_5))
   VAR_5 = VAR_0->p[VAR_1].y;
 }

 VAR_0->boundbox.low.x = VAR_2;
 VAR_0->boundbox.high.x = VAR_4;
 VAR_0->boundbox.low.y = VAR_3;
 VAR_0->boundbox.high.y = VAR_5;
}
