
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Node ;
typedef int List ;


 int * VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int) ;

bool
FUNC_3(List *VAR_1, List *VAR_2,
      bool VAR_3)
{
 Node *VAR_4,
      *VAR_5;

 if (VAR_1 == VAR_0)
  return 0;
 if (VAR_2 == VAR_0)
  return 0;







 if (FUNC_1(VAR_1) == 1)
  VAR_4 = (Node *) FUNC_0(VAR_1);
 else
  VAR_4 = (Node *) VAR_1;
 if (FUNC_1(VAR_2) == 1)
  VAR_5 = (Node *) FUNC_0(VAR_2);
 else
  VAR_5 = (Node *) VAR_2;


 return FUNC_2(VAR_5, VAR_4, VAR_3);
}
