
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * ResourceOwner ;
typedef int LOCALLOCK ;
typedef int HASH_SEQ_STATUS ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *) ;

void
FUNC_5(LOCALLOCK **VAR_2, int VAR_3)
{
 ResourceOwner VAR_4 = FUNC_2(VAR_0);

 FUNC_0(VAR_4 != ((void*)0));

 if (VAR_2 == ((void*)0))
 {
  HASH_SEQ_STATUS VAR_5;
  LOCALLOCK *VAR_6;

  FUNC_3(&VAR_5, VAR_1);

  while ((VAR_6 = (LOCALLOCK *) FUNC_4(&VAR_5)) != ((void*)0))
   FUNC_1(VAR_6, VAR_4);
 }
 else
 {
  int VAR_7;

  for (VAR_7 = VAR_3 - 1; VAR_7 >= 0; VAR_7--)
   FUNC_1(VAR_2[VAR_7], VAR_4);
 }
}
