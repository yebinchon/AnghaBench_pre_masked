
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * p; } ;
typedef int Point ;
typedef TYPE_1__ LSEG ;
typedef int LINE ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int *,int *) ;

__attribute__((used)) static bool
FUNC_5(Point *VAR_0, LSEG *VAR_1, LINE *VAR_2)
{
 Point VAR_3;
 LINE VAR_4;






 FUNC_0(&VAR_4, &VAR_1->p[0], FUNC_3(VAR_1));
 if (!FUNC_1(&VAR_3, &VAR_4, VAR_2))
  return 0;





 if (!FUNC_2(VAR_1, &VAR_3))
  return 0;
 if (VAR_0 != ((void*)0))
 {





  if (FUNC_4(&VAR_1->p[0], &VAR_3))
   *VAR_0 = VAR_1->p[0];
  else if (FUNC_4(&VAR_1->p[1], &VAR_3))
   *VAR_0 = VAR_1->p[1];
  else
   *VAR_0 = VAR_3;
 }

 return 1;
}
