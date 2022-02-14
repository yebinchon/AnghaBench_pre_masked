
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int Node ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;

Oid
FUNC_5(Node *VAR_2)
{
 switch (FUNC_2(VAR_2))
 {
  case 128:
   return FUNC_1(VAR_2);
  case 129:






   return FUNC_3(FUNC_4(VAR_2), ((void*)0));
  default:
   FUNC_0(VAR_0, "unrecognized node type: %d", (int) FUNC_2(VAR_2));
 }
 return VAR_1;
}
