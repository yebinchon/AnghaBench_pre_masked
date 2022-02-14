
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef double float8 ;
struct TYPE_3__ {int npts; int * p; int closed; } ;
typedef int Point ;
typedef TYPE_1__ PATH ;
typedef int LSEG ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (double,double) ;
 double FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int *,int *) ;

__attribute__((used)) static float8
FUNC_4(Point *VAR_0, PATH *VAR_1)
{
 float8 VAR_2 = 0.0;
 bool VAR_3 = 0;
 float8 VAR_4;
 int VAR_5;
 LSEG VAR_6;

 FUNC_0(VAR_1->npts > 0);





 for (VAR_5 = 0; VAR_5 < VAR_1->npts; VAR_5++)
 {
  int VAR_7;

  if (VAR_5 > 0)
   VAR_7 = VAR_5 - 1;
  else
  {
   if (!VAR_1->closed)
    continue;
   VAR_7 = VAR_1->npts - 1;
  }

  FUNC_3(&VAR_6, &VAR_1->p[VAR_7], &VAR_1->p[VAR_5]);
  VAR_4 = FUNC_2(((void*)0), &VAR_6, VAR_0);
  if (!VAR_3 || FUNC_1(VAR_4, VAR_2))
  {
   VAR_2 = VAR_4;
   VAR_3 = 1;
  }
 }

 return VAR_2;
}
