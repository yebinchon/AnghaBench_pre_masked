
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ typnamespace; scalar_t__ typarray; int typname; } ;
struct TYPE_8__ {int t_self; } ;
typedef int Relation ;
typedef scalar_t__ Oid ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_type ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ,int *,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,scalar_t__,int ) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int VAR_3 ;
 TYPE_1__* FUNC_9 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (int ,char*,scalar_t__) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,char const*) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 int FUNC_15 (TYPE_1__*) ;
 char* FUNC_16 (char const*,scalar_t__) ;
 scalar_t__ FUNC_17 (scalar_t__,char const*,scalar_t__) ;
 int FUNC_18 (int *,char const*) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (int ,int ) ;

void
FUNC_22(Oid VAR_7, const char *VAR_8, Oid VAR_9)
{
 Relation VAR_10;
 HeapTuple VAR_11;
 Form_pg_type VAR_12;
 Oid VAR_13;
 Oid VAR_14;

 VAR_10 = FUNC_21(VAR_6, VAR_3);

 VAR_11 = FUNC_9(VAR_5, FUNC_7(VAR_7));
 if (!FUNC_5(VAR_11))
  FUNC_10(VAR_2, "cache lookup failed for type %u", VAR_7);
 VAR_12 = (Form_pg_type) FUNC_3(VAR_11);


 FUNC_0(VAR_9 == VAR_12->typnamespace);

 VAR_13 = VAR_12->typarray;


 VAR_14 = FUNC_4(VAR_4, VAR_0,
         FUNC_1(VAR_8),
         FUNC_7(VAR_9));
 if (FUNC_8(VAR_14))
 {
  if (FUNC_14(VAR_14) &&
   FUNC_17(VAR_14, VAR_8, VAR_9))
                                          ;
  else
   FUNC_11(VAR_2,
     (FUNC_12(VAR_1),
      FUNC_13("type \"%s\" already exists", VAR_8)));
 }


 FUNC_18(&(VAR_12->typname), VAR_8);

 FUNC_2(VAR_10, &VAR_11->t_self, VAR_11);

 FUNC_6(VAR_6, VAR_7, 0);

 FUNC_15(VAR_11);
 FUNC_20(VAR_10, VAR_3);






 if (FUNC_8(VAR_13) && VAR_13 != VAR_14)
 {
  char *VAR_15 = FUNC_16(VAR_8, VAR_9);

  FUNC_22(VAR_13, VAR_15, VAR_9);
  FUNC_19(VAR_15);
 }
}
