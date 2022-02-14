
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int Node ;
typedef int List ;






 int * VAR_0 ;
 int * FUNC_0 (int *,int *,int,int) ;

__attribute__((used)) static List *
FUNC_1(Node *VAR_1,
        Node *VAR_2,
        int VAR_3,
        Oid VAR_4,
        Oid VAR_5)
{
 switch (VAR_4)
 {
  case 131:

   if (VAR_3 != 0)
    return VAR_0;
   return FUNC_0(VAR_1, VAR_2, 0, VAR_5);

  case 130:

   if (VAR_3 != 0)
    return VAR_0;
   return FUNC_0(VAR_1, VAR_2, 1, VAR_5);

  case 129:

   if (VAR_3 != 1)
    return VAR_0;
   return FUNC_0(VAR_2, VAR_1, 0, VAR_5);

  case 128:

   if (VAR_3 != 1)
    return VAR_0;
   return FUNC_0(VAR_2, VAR_1, 1, VAR_5);

  default:






   return VAR_0;
 }
}
