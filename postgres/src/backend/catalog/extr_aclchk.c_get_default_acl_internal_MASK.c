
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int HeapTuple ;
typedef int Datum ;
typedef int Acl ;


 int VAR_0 ;
 int FUNC_0 (char) ;
 int VAR_1 ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int*) ;

__attribute__((used)) static Acl *
FUNC_7(Oid VAR_2, Oid VAR_3, char VAR_4)
{
 Acl *VAR_5 = ((void*)0);
 HeapTuple VAR_6;

 VAR_6 = FUNC_5(VAR_1,
       FUNC_3(VAR_2),
       FUNC_3(VAR_3),
       FUNC_0(VAR_4));

 if (FUNC_2(VAR_6))
 {
  Datum VAR_7;
  bool VAR_8;

  VAR_7 = FUNC_6(VAR_1, VAR_6,
           VAR_0,
           &VAR_8);
  if (!VAR_8)
   VAR_5 = FUNC_1(VAR_7);
  FUNC_4(VAR_6);
 }

 return VAR_5;
}
