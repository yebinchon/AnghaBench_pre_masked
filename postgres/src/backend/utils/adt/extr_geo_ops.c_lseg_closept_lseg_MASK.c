
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef double float8 ;
struct TYPE_7__ {int * p; } ;
typedef int Point ;
typedef TYPE_1__ LSEG ;


 scalar_t__ FUNC_0 (double,double) ;
 double FUNC_1 (int *,TYPE_1__*,int *) ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static float8
FUNC_3(Point *VAR_0, LSEG *VAR_1, LSEG *VAR_2)
{
 Point VAR_3;
 float8 VAR_4,
    VAR_5;


 if (FUNC_2(VAR_0, VAR_1, VAR_2))
  return 0.0;





 VAR_4 = FUNC_1(VAR_0, VAR_1, &VAR_2->p[0]);
 VAR_5 = FUNC_1(&VAR_3, VAR_1, &VAR_2->p[1]);
 if (FUNC_0(VAR_5, VAR_4))
 {
  VAR_4 = VAR_5;
  if (VAR_0 != ((void*)0))
   *VAR_0 = VAR_3;
 }


 VAR_5 = FUNC_1(((void*)0), VAR_2, &VAR_1->p[0]);
 if (FUNC_0(VAR_5, VAR_4))
 {
  VAR_4 = VAR_5;
  if (VAR_0 != ((void*)0))
   *VAR_0 = VAR_1->p[0];
 }
 VAR_5 = FUNC_1(((void*)0), VAR_2, &VAR_1->p[1]);
 if (FUNC_0(VAR_5, VAR_4))
 {
  VAR_4 = VAR_5;
  if (VAR_0 != ((void*)0))
   *VAR_0 = VAR_1->p[1];
 }

 return VAR_4;
}
