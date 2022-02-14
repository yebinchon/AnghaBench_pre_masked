
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int float8 ;
struct TYPE_4__ {int * p; } ;
typedef int Point ;
typedef TYPE_1__ LSEG ;
typedef int LINE ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,TYPE_1__*,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static float8
FUNC_4(Point *VAR_0, LSEG *VAR_1, Point *VAR_2)
{
 Point VAR_3;
 LINE VAR_4;





 FUNC_0(&VAR_4, VAR_2, FUNC_3(&VAR_1->p[0], &VAR_1->p[1]));
 FUNC_1(&VAR_3, VAR_1, &VAR_4);

 if (VAR_0 != ((void*)0))
  *VAR_0 = VAR_3;

 return FUNC_2(&VAR_3, VAR_2);
}
