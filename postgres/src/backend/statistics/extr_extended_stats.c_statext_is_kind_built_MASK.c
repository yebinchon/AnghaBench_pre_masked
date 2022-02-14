
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HeapTuple ;
typedef int AttrNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (int ,char*,char) ;
 int FUNC_1 (int ,int ,int *) ;

bool
FUNC_2(HeapTuple VAR_4, char VAR_5)
{
 AttrNumber VAR_6;

 switch (VAR_5)
 {
  case 128:
   VAR_6 = VAR_2;
   break;

  case 130:
   VAR_6 = VAR_0;
   break;

  case 129:
   VAR_6 = VAR_1;
   break;

  default:
   FUNC_0(VAR_3, "unexpected statistics type requested: %d", VAR_5);
 }

 return !FUNC_1(VAR_4, VAR_6, ((void*)0));
}
