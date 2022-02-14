
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Oid ;
typedef int List ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static Oid
FUNC_3(List *VAR_2, Oid VAR_3, Oid VAR_4)
{
 Oid VAR_5;
 bool VAR_6 = 0;


 if ((VAR_3 == VAR_1) && (VAR_4 != VAR_0))
 {
  VAR_3 = VAR_4;
  VAR_6 = 1;
 }
 else if ((VAR_4 == VAR_1) && (VAR_3 != VAR_0))
 {
  VAR_4 = VAR_3;
  VAR_6 = 1;
 }

 VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);
 if (FUNC_0(VAR_5))
  return VAR_5;

 if (VAR_6)
 {

  Oid VAR_7 = FUNC_2(VAR_3);

  if (VAR_7 != VAR_3)
  {
   VAR_5 = FUNC_1(VAR_2, VAR_7, VAR_7);
   if (FUNC_0(VAR_5))
    return VAR_5;
  }
 }

 return VAR_0;
}
