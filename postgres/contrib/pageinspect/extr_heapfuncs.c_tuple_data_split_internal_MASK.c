
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint16 ;
typedef int bytea ;
typedef int bits8 ;
typedef TYPE_2__* TupleDesc ;
struct TYPE_14__ {int attlen; int attalign; } ;
struct TYPE_13__ {TYPE_1__* rd_rel; } ;
struct TYPE_12__ {int natts; } ;
struct TYPE_11__ {scalar_t__ relam; } ;
typedef TYPE_3__* Relation ;
typedef int Oid ;
typedef TYPE_4__* Form_pg_attribute ;
typedef int Datum ;
typedef int ArrayBuildState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *,scalar_t__) ;
 TYPE_4__* FUNC_4 (TYPE_2__*,int) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *) ;
 scalar_t__ VAR_9 ;
 int FUNC_9 (char*) ;
 int * FUNC_10 (int *,int ,int,int ,int ) ;
 int FUNC_11 (int,int,char*) ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 (int,int ,int,char*) ;
 scalar_t__ FUNC_14 (int,int *) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (char*,...) ;
 int * FUNC_18 (int ,int ,int) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (int ,char*,int) ;
 scalar_t__ FUNC_21 (scalar_t__) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_24 (int ,int ) ;

__attribute__((used)) static Datum
FUNC_25(Oid VAR_10, char *VAR_11,
        uint16 VAR_12, uint16 VAR_13,
        uint16 VAR_14, bits8 *VAR_15,
        bool VAR_16)
{
 ArrayBuildState *VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20 = 0;
 Relation VAR_21;
 TupleDesc VAR_22;


 VAR_21 = FUNC_24(VAR_10, VAR_0);
 VAR_22 = FUNC_2(VAR_21);

 VAR_17 = FUNC_18(VAR_1, VAR_2, 0);
 VAR_18 = VAR_22->natts;

 if (VAR_21->rd_rel->relam != VAR_8)
  FUNC_15(VAR_5, (FUNC_16(VAR_4),
      FUNC_17("only heap AM is supported")));

 if (VAR_18 < (VAR_14 & VAR_7))
  FUNC_15(VAR_5,
    (FUNC_16(VAR_3),
     FUNC_17("number of attributes in tuple header is greater than number of attributes in tuple descriptor")));

 for (VAR_19 = 0; VAR_19 < VAR_18; VAR_19++)
 {
  Form_pg_attribute VAR_23;
  bool VAR_24;
  bytea *VAR_25 = ((void*)0);

  VAR_23 = FUNC_4(VAR_22, VAR_19);







  if (VAR_19 >= (VAR_14 & VAR_7))
   VAR_24 = 1;
  else
   VAR_24 = (VAR_13 & VAR_6) && FUNC_14(VAR_19, VAR_15);

  if (!VAR_24)
  {
   int VAR_26;

   if (VAR_23->attlen == -1)
   {
    VAR_20 = FUNC_13(VAR_20, VAR_23->attalign, -1,
          VAR_11 + VAR_20);






    if (FUNC_5(VAR_11 + VAR_20) &&
     !FUNC_7(VAR_11 + VAR_20) &&
     !FUNC_6(VAR_11 + VAR_20))
     FUNC_15(VAR_5,
       (FUNC_16(VAR_3),
        FUNC_17("first byte of varlena attribute is incorrect for attribute %d", VAR_19)));

    VAR_26 = FUNC_9(VAR_11 + VAR_20);
   }
   else
   {
    VAR_20 = FUNC_12(VAR_20, VAR_23->attalign);
    VAR_26 = VAR_23->attlen;
   }

   if (VAR_12 < VAR_20 + VAR_26)
    FUNC_15(VAR_5,
      (FUNC_16(VAR_3),
       FUNC_17("unexpected end of tuple data")));

   if (VAR_23->attlen == -1 && VAR_16)
    VAR_25 = FUNC_0(VAR_11 + VAR_20);
   else
   {
    VAR_25 = (bytea *) FUNC_21(VAR_26 + VAR_9);
    FUNC_3(VAR_25, VAR_26 + VAR_9);
    FUNC_20(FUNC_8(VAR_25), VAR_11 + VAR_20, VAR_26);
   }

   VAR_20 = FUNC_11(VAR_20, VAR_23->attlen,
          VAR_11 + VAR_20);
  }

  VAR_17 = FUNC_10(VAR_17, FUNC_1(VAR_25),
          VAR_24, VAR_1, VAR_2);
  if (VAR_25)
   FUNC_22(VAR_25);
 }

 if (VAR_12 != VAR_20)
  FUNC_15(VAR_5,
    (FUNC_16(VAR_3),
     FUNC_17("end of tuple reached without looking at all its data")));

 FUNC_23(VAR_21, VAR_0);

 return FUNC_19(VAR_17, VAR_2);
}
