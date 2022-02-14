
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef double float8 ;
struct TYPE_4__ {int * p; } ;
typedef int Point ;
typedef TYPE_1__ LSEG ;
typedef int LINE ;


 double FUNC_0 (int *,int *,int *) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*,int *) ;

__attribute__((used)) static float8
FUNC_2(Point *VAR_0, LSEG *VAR_1, LINE *VAR_2)
{
 float8 VAR_3,
    VAR_4;

 if (FUNC_1(VAR_0, VAR_1, VAR_2))
  return 0.0;

 VAR_3 = FUNC_0(((void*)0), VAR_2, &VAR_1->p[0]);
 VAR_4 = FUNC_0(((void*)0), VAR_2, &VAR_1->p[1]);

 if (VAR_3 < VAR_4)
 {
  if (VAR_0 != ((void*)0))
   *VAR_0 = VAR_1->p[0];

  return VAR_3;
 }
 else
 {
  if (VAR_0 != ((void*)0))
   *VAR_0 = VAR_1->p[1];

  return VAR_4;
 }
}
