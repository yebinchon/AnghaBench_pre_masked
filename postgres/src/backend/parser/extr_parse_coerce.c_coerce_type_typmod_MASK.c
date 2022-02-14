
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef int Oid ;
typedef int Node ;
typedef scalar_t__ CoercionPathType ;
typedef int CoercionForm ;
typedef int CoercionContext ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *,scalar_t__,int ,int ,int ,int ,int ,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static Node *
FUNC_4(Node *VAR_1, Oid VAR_2, int32 VAR_3,
       CoercionContext VAR_4, CoercionForm VAR_5,
       int VAR_6,
       bool VAR_7)
{
 CoercionPathType VAR_8;
 Oid VAR_9;





 if (VAR_3 < 0 || VAR_3 == FUNC_1(VAR_1))
  return VAR_1;

 VAR_8 = FUNC_2(VAR_2, &VAR_9);

 if (VAR_8 != VAR_0)
 {

  if (VAR_7)
   FUNC_3(VAR_1);

  VAR_1 = FUNC_0(VAR_1, VAR_8, VAR_9,
           VAR_2, VAR_3,
           VAR_4, VAR_5, VAR_6);
 }

 return VAR_1;
}
