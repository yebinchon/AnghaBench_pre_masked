
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int text ;
typedef TYPE_1__* pg_locale_t ;
struct TYPE_4__ {scalar_t__ provider; int deterministic; } ;
typedef scalar_t__ Oid ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*,int,char*,int,int ,int) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int,char*,int,TYPE_1__*,int) ;
 int FUNC_7 (char*,int,char*,int,int ,int) ;
 char* FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 int VAR_6 ;
 int FUNC_15 () ;
 TYPE_1__* FUNC_16 (scalar_t__) ;

__attribute__((used)) static inline int
FUNC_17(text *VAR_7, text *VAR_8, Oid VAR_9)
{
 char *VAR_10,
      *VAR_11;
 int VAR_12,
    VAR_13;
 pg_locale_t VAR_14 = 0;
 bool VAR_15 = 0;

 if (FUNC_14(VAR_9))
  VAR_15 = 1;
 else if (VAR_9 != VAR_1)
 {
  if (!FUNC_4(VAR_9))
  {




   FUNC_10(VAR_4,
     (FUNC_11(VAR_3),
      FUNC_13("could not determine which collation to use for ILIKE"),
      FUNC_12("Use the COLLATE clause to set the collation explicitly.")));
  }
  VAR_14 = FUNC_16(VAR_9);

  if (VAR_14 && !VAR_14->deterministic)
   FUNC_10(VAR_4,
     (FUNC_11(VAR_2),
      FUNC_13("nondeterministic collations are not supported for ILIKE")));
 }
 if (FUNC_15() > 1 || (VAR_14 && VAR_14->provider == VAR_0))
 {
  VAR_8 = FUNC_0(FUNC_1(VAR_6, VAR_9,
              FUNC_5(VAR_8)));
  VAR_11 = FUNC_8(VAR_8);
  VAR_13 = FUNC_9(VAR_8);
  VAR_7 = FUNC_0(FUNC_1(VAR_6, VAR_9,
              FUNC_5(VAR_7)));
  VAR_10 = FUNC_8(VAR_7);
  VAR_12 = FUNC_9(VAR_7);
  if (FUNC_2() == VAR_5)
   return FUNC_7(VAR_10, VAR_12, VAR_11, VAR_13, 0, 1);
  else
   return FUNC_3(VAR_10, VAR_12, VAR_11, VAR_13, 0, 1);
 }
 else
 {
  VAR_11 = FUNC_8(VAR_8);
  VAR_13 = FUNC_9(VAR_8);
  VAR_10 = FUNC_8(VAR_7);
  VAR_12 = FUNC_9(VAR_7);
  return FUNC_6(VAR_10, VAR_12, VAR_11, VAR_13, VAR_14, VAR_15);
 }
}
