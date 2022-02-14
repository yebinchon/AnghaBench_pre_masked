
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LOCALLOCK ;
typedef int HASH_SEQ_STATUS ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;

void
FUNC_3(LOCALLOCK **VAR_1, int VAR_2)
{
 if (VAR_1 == ((void*)0))
 {
  HASH_SEQ_STATUS VAR_3;
  LOCALLOCK *VAR_4;

  FUNC_1(&VAR_3, VAR_0);

  while ((VAR_4 = (LOCALLOCK *) FUNC_2(&VAR_3)) != ((void*)0))
   FUNC_0(VAR_4, 0);
 }
 else
 {
  int VAR_5;

  for (VAR_5 = VAR_2 - 1; VAR_5 >= 0; VAR_5--)
   FUNC_0(VAR_1[VAR_5], 0);
 }
}
