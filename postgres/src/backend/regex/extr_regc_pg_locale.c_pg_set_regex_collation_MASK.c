
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ provider; int deterministic; } ;
typedef scalar_t__ Oid ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 TYPE_1__* FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_13 ;
 TYPE_1__* VAR_14 ;
 int VAR_15 ;

void
FUNC_8(Oid VAR_16)
{
 if (FUNC_6(VAR_16))
 {

  VAR_15 = VAR_8;
  VAR_14 = 0;
  VAR_13 = VAR_1;
 }
 else
 {
  if (VAR_16 == VAR_2)
   VAR_14 = 0;
  else if (FUNC_1(VAR_16))
  {





   VAR_14 = FUNC_7(VAR_16);
  }
  else
  {




   FUNC_2(VAR_5,
     (FUNC_3(VAR_4),
      FUNC_5("could not determine which collation to use for regular expression"),
      FUNC_4("Use the COLLATE clause to set the collation explicitly.")));
  }

  if (VAR_14 && !VAR_14->deterministic)
   FUNC_2(VAR_5,
     (FUNC_3(VAR_3),
      FUNC_5("nondeterministic collations are not supported for regular expressions")));






  if (FUNC_0() == VAR_12)
  {
   if (VAR_14)
    VAR_15 = VAR_11;
   else
    VAR_15 = VAR_10;
  }
  else
  {
   if (VAR_14)
    VAR_15 = VAR_7;
   else
    VAR_15 = VAR_6;
  }

  VAR_13 = VAR_16;
 }
}
