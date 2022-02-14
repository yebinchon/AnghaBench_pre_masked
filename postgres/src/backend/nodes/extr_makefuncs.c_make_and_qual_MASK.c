
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Node ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int ) ;

Node *
FUNC_2(Node *VAR_0, Node *VAR_1)
{
 if (VAR_0 == ((void*)0))
  return VAR_1;
 if (VAR_1 == ((void*)0))
  return VAR_0;
 return (Node *) FUNC_1(FUNC_0(VAR_0, VAR_1));
}
