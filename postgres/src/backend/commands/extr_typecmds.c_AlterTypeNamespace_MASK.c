
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TypeName ;
typedef int Oid ;
typedef scalar_t__ ObjectType ;
typedef int ObjectAddresses ;
typedef int ObjectAddress ;
typedef int List ;


 int FUNC_0 (int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char const*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ) ;
 int * FUNC_9 (int *) ;
 int * FUNC_10 () ;
 int FUNC_11 (int *,int *) ;

ObjectAddress
FUNC_12(List *VAR_5, const char *VAR_6, ObjectType VAR_7,
       Oid *VAR_8)
{
 TypeName *VAR_9;
 Oid VAR_10;
 Oid VAR_11;
 Oid VAR_12;
 ObjectAddresses *VAR_13;
 ObjectAddress VAR_14;


 VAR_9 = FUNC_9(VAR_5);
 VAR_10 = FUNC_11(((void*)0), VAR_9);


 if (VAR_7 == VAR_2 && FUNC_8(VAR_10) != VAR_3)
  FUNC_3(VAR_1,
    (FUNC_4(VAR_0),
     FUNC_5("%s is not a domain",
      FUNC_6(VAR_10))));


 VAR_11 = FUNC_1(VAR_6);

 VAR_13 = FUNC_10();
 VAR_12 = FUNC_0(VAR_10, VAR_11, VAR_13);
 FUNC_7(VAR_13);

 if (VAR_8)
  *VAR_8 = VAR_12;

 FUNC_2(VAR_14, VAR_4, VAR_10);

 return VAR_14;
}
