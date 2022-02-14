
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * p; } ;
typedef int Point ;
typedef TYPE_1__ LSEG ;
typedef int LINE ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int *,TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_4(Point *VAR_0, LSEG *VAR_1, LSEG *VAR_2)
{
 Point VAR_3;
 LINE VAR_4;

 FUNC_0(&VAR_4, &VAR_2->p[0], FUNC_3(VAR_2));
 if (!FUNC_2(&VAR_3, VAR_1, &VAR_4))
  return 0;





 if (!FUNC_1(VAR_2, &VAR_3))
  return 0;

 if (VAR_0 != ((void*)0))
  *VAR_0 = VAR_3;

 return 1;
}
