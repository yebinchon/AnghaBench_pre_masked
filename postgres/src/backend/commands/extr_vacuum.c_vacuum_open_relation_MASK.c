
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int relname; } ;
typedef int * Relation ;
typedef TYPE_1__ RangeVar ;
typedef int Oid ;
typedef int LOCKMODE ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;
 int * FUNC_6 (int ,int ) ;

Relation
FUNC_7(Oid VAR_8, RangeVar *VAR_9, int VAR_10,
      bool VAR_11, LOCKMODE VAR_12)
{
 Relation VAR_13;
 bool VAR_14 = 1;
 int VAR_15;

 FUNC_0((VAR_10 & (VAR_6 | VAR_4)) != 0);
 if (!(VAR_10 & VAR_5))
  VAR_13 = FUNC_6(VAR_8, VAR_12);
 else if (FUNC_1(VAR_8, VAR_12))
  VAR_13 = FUNC_6(VAR_8, VAR_3);
 else
 {
  VAR_13 = ((void*)0);
  VAR_14 = 0;
 }


 if (VAR_13)
  return VAR_13;
 if (VAR_9 == ((void*)0))
  return ((void*)0);
 if (!FUNC_2())
  VAR_15 = VAR_7;
 else if (VAR_11)
  VAR_15 = VAR_2;
 else
  return ((void*)0);

 if ((VAR_10 & VAR_6) != 0)
 {
  if (!VAR_14)
   FUNC_3(VAR_15,
     (FUNC_4(VAR_0),
      FUNC_5("skipping vacuum of \"%s\" --- lock not available",
       VAR_9->relname)));
  else
   FUNC_3(VAR_15,
     (FUNC_4(VAR_1),
      FUNC_5("skipping vacuum of \"%s\" --- relation no longer exists",
       VAR_9->relname)));






  return ((void*)0);
 }

 if ((VAR_10 & VAR_4) != 0)
 {
  if (!VAR_14)
   FUNC_3(VAR_15,
     (FUNC_4(VAR_0),
      FUNC_5("skipping analyze of \"%s\" --- lock not available",
       VAR_9->relname)));
  else
   FUNC_3(VAR_15,
     (FUNC_4(VAR_1),
      FUNC_5("skipping analyze of \"%s\" --- relation no longer exists",
       VAR_9->relname)));
 }

 return ((void*)0);
}
