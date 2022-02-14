
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_18__ ;


struct TYPE_25__ {void* y; void* x; } ;
struct TYPE_24__ {TYPE_5__ high; TYPE_5__ low; } ;
struct TYPE_23__ {TYPE_18__* p; } ;
struct TYPE_22__ {void* y; void* x; } ;
struct TYPE_21__ {int y; int x; } ;
typedef TYPE_1__ Point ;
typedef TYPE_2__ LSEG ;
typedef TYPE_3__ BOX ;


 int FUNC_0 (TYPE_1__*,TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_18__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*) ;
 void* FUNC_3 (int ,int ) ;
 void* FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_6 (int *,TYPE_2__*,TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,TYPE_5__*,TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_8(Point *VAR_0, BOX *VAR_1, LSEG *VAR_2)
{
 BOX VAR_3;
 LSEG VAR_4;
 Point VAR_5;

 VAR_3.low.x = FUNC_4(VAR_2->p[0].x, VAR_2->p[1].x);
 VAR_3.low.y = FUNC_4(VAR_2->p[0].y, VAR_2->p[1].y);
 VAR_3.high.x = FUNC_3(VAR_2->p[0].x, VAR_2->p[1].x);
 VAR_3.high.y = FUNC_3(VAR_2->p[0].y, VAR_2->p[1].y);


 if (!FUNC_2(&VAR_3, VAR_1))
  return 0;

 if (VAR_0 != ((void*)0))
 {
  FUNC_0(&VAR_5, VAR_1);
  FUNC_5(VAR_0, VAR_2, &VAR_5);
 }


 if (FUNC_1(VAR_1, &VAR_2->p[0]) ||
  FUNC_1(VAR_1, &VAR_2->p[1]))
  return 1;


 VAR_5.x = VAR_1->low.x;
 VAR_5.y = VAR_1->high.y;
 FUNC_7(&VAR_4, &VAR_1->low, &VAR_5);
 if (FUNC_6(((void*)0), &VAR_4, VAR_2))
  return 1;

 FUNC_7(&VAR_4, &VAR_1->high, &VAR_5);
 if (FUNC_6(((void*)0), &VAR_4, VAR_2))
  return 1;

 VAR_5.x = VAR_1->high.x;
 VAR_5.y = VAR_1->low.y;
 FUNC_7(&VAR_4, &VAR_1->low, &VAR_5);
 if (FUNC_6(((void*)0), &VAR_4, VAR_2))
  return 1;

 FUNC_7(&VAR_4, &VAR_1->high, &VAR_5);
 if (FUNC_6(((void*)0), &VAR_4, VAR_2))
  return 1;


 return 0;
}
