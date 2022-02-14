
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Oid ;
typedef scalar_t__ CoercionPathType ;
typedef int CoercionContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (scalar_t__ const*,scalar_t__ const*,int) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__,int ,scalar_t__*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;

bool
FUNC_7(int VAR_5, const Oid *VAR_6, const Oid *VAR_7,
    CoercionContext VAR_8)
{
 bool VAR_9 = 0;
 int VAR_10;


 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++)
 {
  Oid VAR_11 = VAR_6[VAR_10];
  Oid VAR_12 = VAR_7[VAR_10];
  CoercionPathType VAR_13;
  Oid VAR_14;


  if (VAR_11 == VAR_12)
   continue;


  if (VAR_12 == VAR_0)
   continue;


  if (FUNC_1(VAR_12))
  {
   VAR_9 = 1;
   continue;
  }





  if (VAR_11 == VAR_4)
   continue;





  VAR_13 = FUNC_3(VAR_12, VAR_11, VAR_8,
           &VAR_14);
  if (VAR_13 != VAR_1)
   continue;





  if (VAR_11 == VAR_3 &&
   FUNC_0(VAR_12))
   continue;




  if (VAR_12 == VAR_3 &&
   FUNC_0(VAR_11))
   continue;
  if (VAR_12 == VAR_2 &&
   FUNC_4(VAR_11))
   continue;




  if (FUNC_5(VAR_11, VAR_12)
   || FUNC_6(VAR_11, VAR_12))
   continue;




  return 0;
 }


 if (VAR_9)
 {
  if (!FUNC_2(VAR_6, VAR_7,
           VAR_5))
   return 0;
 }

 return 1;
}
