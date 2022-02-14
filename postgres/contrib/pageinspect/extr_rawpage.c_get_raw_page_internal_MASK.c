
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int text ;
typedef int bytea ;
struct TYPE_10__ {TYPE_1__* rd_rel; } ;
struct TYPE_9__ {scalar_t__ relkind; } ;
typedef TYPE_2__* Relation ;
typedef int RangeVar ;
typedef int ForkNumber ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_3 (TYPE_2__*,int ,scalar_t__,int ,int *) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,scalar_t__) ;
 char* FUNC_8 (int *) ;
 scalar_t__ VAR_15 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,...) ;
 int * FUNC_12 (int ) ;
 int FUNC_13 (char*,int ,scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 int FUNC_15 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_16 (int *,int ) ;
 int FUNC_17 () ;
 int FUNC_18 (int *) ;

__attribute__((used)) static bytea *
FUNC_19(text *VAR_16, ForkNumber VAR_17, BlockNumber VAR_18)
{
 bytea *VAR_19;
 RangeVar *VAR_20;
 Relation VAR_21;
 char *VAR_22;
 Buffer VAR_23;

 if (!FUNC_17())
  FUNC_9(VAR_8,
    (FUNC_10(VAR_5),
     (FUNC_11("must be superuser to use raw page functions"))));

 VAR_20 = FUNC_12(FUNC_18(VAR_16));
 VAR_21 = FUNC_16(VAR_20, VAR_0);


 if (VAR_21->rd_rel->relkind == VAR_14)
  FUNC_9(VAR_8,
    (FUNC_10(VAR_7),
     FUNC_11("cannot get raw page from view \"%s\"",
      FUNC_5(VAR_21))));
 if (VAR_21->rd_rel->relkind == VAR_10)
  FUNC_9(VAR_8,
    (FUNC_10(VAR_7),
     FUNC_11("cannot get raw page from composite type \"%s\"",
      FUNC_5(VAR_21))));
 if (VAR_21->rd_rel->relkind == VAR_11)
  FUNC_9(VAR_8,
    (FUNC_10(VAR_7),
     FUNC_11("cannot get raw page from foreign table \"%s\"",
      FUNC_5(VAR_21))));
 if (VAR_21->rd_rel->relkind == VAR_13)
  FUNC_9(VAR_8,
    (FUNC_10(VAR_7),
     FUNC_11("cannot get raw page from partitioned table \"%s\"",
      FUNC_5(VAR_21))));
 if (VAR_21->rd_rel->relkind == VAR_12)
  FUNC_9(VAR_8,
    (FUNC_10(VAR_7),
     FUNC_11("cannot get raw page from partitioned index \"%s\"",
      FUNC_5(VAR_21))));






 if (FUNC_2(VAR_21))
  FUNC_9(VAR_8,
    (FUNC_10(VAR_4),
     FUNC_11("cannot access temporary tables of other sessions")));

 if (VAR_18 >= FUNC_4(VAR_21, VAR_17))
  FUNC_9(VAR_8,
    (FUNC_10(VAR_6),
     FUNC_11("block number %u is out of range for relation \"%s\"",
      VAR_18, FUNC_5(VAR_21))));


 VAR_19 = (bytea *) FUNC_14(VAR_1 + VAR_15);
 FUNC_7(VAR_19, VAR_1 + VAR_15);
 VAR_22 = FUNC_8(VAR_19);



 VAR_23 = FUNC_3(VAR_21, VAR_17, VAR_18, VAR_9, ((void*)0));
 FUNC_1(VAR_23, VAR_2);

 FUNC_13(VAR_22, FUNC_0(VAR_23), VAR_1);

 FUNC_1(VAR_23, VAR_3);
 FUNC_6(VAR_23);

 FUNC_15(VAR_21, VAR_0);

 return VAR_19;
}
