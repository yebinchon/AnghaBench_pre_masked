
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int float8 ;
typedef int Point ;
typedef int LINE ;


 int FUNC_0 () ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static float8
FUNC_5(Point *VAR_0, LINE *VAR_1, Point *VAR_2)
{
 Point VAR_3;
 LINE VAR_4;






 FUNC_1(&VAR_4, VAR_2, FUNC_3(VAR_1));
 if (!FUNC_2(&VAR_3, &VAR_4, VAR_1))
 {
  if (VAR_0 != ((void*)0))
   *VAR_0 = *VAR_2;

  return FUNC_0();
 }

 if (VAR_0 != ((void*)0))
  *VAR_0 = VAR_3;

 return FUNC_4(&VAR_3, VAR_2);
}
