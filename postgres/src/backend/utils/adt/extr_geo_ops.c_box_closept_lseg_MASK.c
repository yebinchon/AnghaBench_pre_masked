
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef double float8 ;
struct TYPE_12__ {int y; int x; } ;
struct TYPE_11__ {TYPE_3__ high; TYPE_3__ low; } ;
struct TYPE_10__ {int y; int x; } ;
typedef TYPE_1__ Point ;
typedef int LSEG ;
typedef TYPE_2__ BOX ;


 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_2__*,int *) ;
 scalar_t__ FUNC_1 (double,double) ;
 double FUNC_2 (TYPE_1__*,int *,int *) ;
 int FUNC_3 (int *,TYPE_3__*,TYPE_1__*) ;

__attribute__((used)) static float8
FUNC_4(Point *VAR_0, BOX *VAR_1, LSEG *VAR_2)
{
 float8 VAR_3,
    VAR_4;
 Point VAR_5,
    VAR_6;
 LSEG VAR_7;

 if (FUNC_0(VAR_0, VAR_1, VAR_2))
  return 0.0;


 VAR_5.x = VAR_1->low.x;
 VAR_5.y = VAR_1->high.y;
 FUNC_3(&VAR_7, &VAR_1->low, &VAR_5);
 VAR_3 = FUNC_2(VAR_0, &VAR_7, VAR_2);

 FUNC_3(&VAR_7, &VAR_1->high, &VAR_5);
 VAR_4 = FUNC_2(&VAR_6, &VAR_7, VAR_2);
 if (FUNC_1(VAR_4, VAR_3))
 {
  VAR_3 = VAR_4;
  if (VAR_0 != ((void*)0))
   *VAR_0 = VAR_6;
 }

 VAR_5.x = VAR_1->high.x;
 VAR_5.y = VAR_1->low.y;
 FUNC_3(&VAR_7, &VAR_1->low, &VAR_5);
 VAR_4 = FUNC_2(&VAR_6, &VAR_7, VAR_2);
 if (FUNC_1(VAR_4, VAR_3))
 {
  VAR_3 = VAR_4;
  if (VAR_0 != ((void*)0))
   *VAR_0 = VAR_6;
 }

 FUNC_3(&VAR_7, &VAR_1->high, &VAR_5);
 VAR_4 = FUNC_2(&VAR_6, &VAR_7, VAR_2);
 if (FUNC_1(VAR_4, VAR_3))
 {
  VAR_3 = VAR_4;
  if (VAR_0 != ((void*)0))
   *VAR_0 = VAR_6;
 }

 return VAR_3;
}
