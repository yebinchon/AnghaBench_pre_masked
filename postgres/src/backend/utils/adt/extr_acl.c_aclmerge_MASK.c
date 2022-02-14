
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int AclItem ;
typedef int Acl ;


 int * FUNC_0 (int const*) ;
 int VAR_0 ;
 int FUNC_1 (int const*) ;
 int VAR_1 ;
 int * FUNC_2 (int const*) ;
 int * FUNC_3 (int *,int *,int ,int ,int ) ;
 int FUNC_4 (int *) ;

Acl *
FUNC_5(const Acl *VAR_2, const Acl *VAR_3, Oid VAR_4)
{
 Acl *VAR_5;
 AclItem *VAR_6;
 int VAR_7,
    VAR_8;


 if (VAR_2 == ((void*)0) || FUNC_1(VAR_2) == 0)
 {
  if (VAR_3 == ((void*)0) || FUNC_1(VAR_3) == 0)
   return ((void*)0);
  else
   return FUNC_2(VAR_3);
 }
 else
 {
  if (VAR_3 == ((void*)0) || FUNC_1(VAR_3) == 0)
   return FUNC_2(VAR_2);
 }


 VAR_5 = FUNC_2(VAR_2);

 VAR_6 = FUNC_0(VAR_3);
 VAR_8 = FUNC_1(VAR_3);

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++, VAR_6++)
 {
  Acl *VAR_9;

  VAR_9 = FUNC_3(VAR_5, VAR_6, VAR_0,
       VAR_4, VAR_1);
  FUNC_4(VAR_5);
  VAR_5 = VAR_9;
 }

 return VAR_5;
}
