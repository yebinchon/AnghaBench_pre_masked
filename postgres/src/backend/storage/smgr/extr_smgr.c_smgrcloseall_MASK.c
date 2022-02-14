
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * SMgrRelation ;
typedef int HASH_SEQ_STATUS ;


 int * VAR_0 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(void)
{
 HASH_SEQ_STATUS VAR_1;
 SMgrRelation VAR_2;


 if (VAR_0 == ((void*)0))
  return;

 FUNC_0(&VAR_1, VAR_0);

 while ((VAR_2 = (SMgrRelation) FUNC_1(&VAR_1)) != ((void*)0))
  FUNC_2(VAR_2);
}
