
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hash_proc; int gt_opr; int eq_opr; int lt_opr; } ;
typedef TYPE_1__ TypeCacheEntry ;
typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (int ,int) ;

void
FUNC_7(Oid VAR_6,
       bool VAR_7, bool VAR_8, bool VAR_9,
       Oid *VAR_10, Oid *VAR_11, Oid *VAR_12,
       bool *VAR_13)
{
 TypeCacheEntry *VAR_14;
 int VAR_15;
 Oid VAR_16;
 Oid VAR_17;
 Oid VAR_18;
 bool VAR_19;







 if (VAR_13 != ((void*)0))
  VAR_15 = VAR_5 | VAR_2 | VAR_3 |
   VAR_4;
 else
  VAR_15 = VAR_5 | VAR_2 | VAR_3;

 VAR_14 = FUNC_6(VAR_6, VAR_15);
 VAR_16 = VAR_14->lt_opr;
 VAR_17 = VAR_14->eq_opr;
 VAR_18 = VAR_14->gt_opr;
 VAR_19 = FUNC_0(VAR_14->hash_proc);


 if ((VAR_7 && !FUNC_0(VAR_16)) ||
  (VAR_9 && !FUNC_0(VAR_18)))
  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),
     FUNC_4("could not identify an ordering operator for type %s",
      FUNC_5(VAR_6)),
     FUNC_3("Use an explicit ordering operator or modify the query.")));
 if (VAR_8 && !FUNC_0(VAR_17))
  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),
     FUNC_4("could not identify an equality operator for type %s",
      FUNC_5(VAR_6))));


 if (VAR_10)
  *VAR_10 = VAR_16;
 if (VAR_11)
  *VAR_11 = VAR_17;
 if (VAR_12)
  *VAR_12 = VAR_18;
 if (VAR_13)
  *VAR_13 = VAR_19;
}
