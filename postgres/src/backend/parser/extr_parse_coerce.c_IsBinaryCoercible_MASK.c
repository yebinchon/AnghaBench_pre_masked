
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ castmethod; scalar_t__ castcontext; } ;
typedef scalar_t__ Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_cast ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;

bool
FUNC_12(Oid VAR_11, Oid VAR_12)
{
 HeapTuple VAR_13;
 Form_pg_cast VAR_14;
 bool VAR_15;


 if (VAR_11 == VAR_12)
  return 1;


 if (VAR_12 == VAR_4 || VAR_12 == VAR_1)
  return 1;


 if (FUNC_4(VAR_11))
  VAR_11 = FUNC_7(VAR_11);


 if (VAR_11 == VAR_12)
  return 1;


 if (VAR_12 == VAR_0)
  if (FUNC_9(VAR_11))
   return 1;


 if (VAR_12 == VAR_3)
  if (!FUNC_9(VAR_11))
   return 1;


 if (VAR_12 == VAR_2)
  if (FUNC_10(VAR_11))
   return 1;


 if (VAR_12 == VAR_5)
  if (FUNC_11(VAR_11))
   return 1;


 if (VAR_12 == VAR_10)
  if (FUNC_2(VAR_11))
   return 1;


 if (VAR_12 == VAR_9)
  if (FUNC_8(VAR_11))
   return 1;


 VAR_13 = FUNC_6(VAR_6,
       FUNC_3(VAR_11),
       FUNC_3(VAR_12));
 if (!FUNC_1(VAR_13))
  return 0;
 VAR_14 = (Form_pg_cast) FUNC_0(VAR_13);

 VAR_15 = (VAR_14->castmethod == VAR_8 &&
     VAR_14->castcontext == VAR_7);

 FUNC_5(VAR_13);

 return VAR_15;
}
