
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int ObjectType ;
typedef int Acl ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 () ;





 int * FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *,int ) ;
 int * FUNC_5 (int ,int ,char) ;

Acl *
FUNC_6(ObjectType VAR_6, Oid VAR_7, Oid VAR_8)
{
 Acl *VAR_9;
 Acl *VAR_10;
 Acl *VAR_11;
 Acl *VAR_12;
 char VAR_13;





 if (FUNC_0())
  return ((void*)0);


 switch (VAR_6)
 {
  case 129:
   VAR_13 = VAR_2;
   break;

  case 130:
   VAR_13 = VAR_3;
   break;

  case 132:
   VAR_13 = VAR_0;
   break;

  case 128:
   VAR_13 = VAR_4;
   break;

  case 131:
   VAR_13 = VAR_1;
   break;

  default:
   return ((void*)0);
 }


 VAR_10 = FUNC_5(VAR_7, VAR_5, VAR_13);
 VAR_11 = FUNC_5(VAR_7, VAR_8, VAR_13);


 if (VAR_10 == ((void*)0) && VAR_11 == ((void*)0))
  return ((void*)0);


 VAR_12 = FUNC_1(VAR_6, VAR_7);


 if (VAR_10 == ((void*)0))
  VAR_10 = VAR_12;


 VAR_9 = FUNC_4(VAR_10, VAR_11, VAR_7);





 FUNC_3(VAR_9);
 FUNC_3(VAR_12);
 if (FUNC_2(VAR_9, VAR_12))
  VAR_9 = ((void*)0);

 return VAR_9;
}
