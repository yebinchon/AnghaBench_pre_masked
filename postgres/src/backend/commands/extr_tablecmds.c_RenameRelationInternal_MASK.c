
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_19__ {int relname; } ;
struct TYPE_18__ {int t_self; } ;
struct TYPE_17__ {TYPE_1__* rd_rel; } ;
struct TYPE_16__ {scalar_t__ relkind; int reltype; } ;
typedef TYPE_2__* Relation ;
typedef int Oid ;
typedef TYPE_3__* HeapTuple ;
typedef TYPE_4__* Form_pg_class ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *,TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ,int ,int ,scalar_t__,int) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_8 ;
 int FUNC_7 (int ,char const*) ;
 int FUNC_8 (int ,char const*,int ) ;
 int VAR_9 ;
 TYPE_3__* FUNC_9 (int ,int ) ;
 int VAR_10 ;
 int FUNC_10 (int ,char*,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,char const*) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (char const*,int ) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (int *,char const*) ;
 int FUNC_18 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_19 (int ,int ) ;
 int FUNC_20 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_21 (int ,int ) ;

void
FUNC_22(Oid VAR_11, const char *VAR_12, bool VAR_13, bool VAR_14)
{
 Relation VAR_15;
 Relation VAR_16;
 HeapTuple VAR_17;
 Form_pg_class VAR_18;
 Oid VAR_19;
 VAR_15 = FUNC_19(VAR_11, VAR_14 ? VAR_10 : VAR_0);
 VAR_19 = FUNC_6(VAR_15);




 VAR_16 = FUNC_21(VAR_8, VAR_9);

 VAR_17 = FUNC_9(VAR_7, FUNC_4(VAR_11));
 if (!FUNC_2(VAR_17))
  FUNC_10(VAR_2, "cache lookup failed for relation %u", VAR_11);
 VAR_18 = (Form_pg_class) FUNC_1(VAR_17);

 if (FUNC_15(VAR_12, VAR_19) != VAR_3)
  FUNC_11(VAR_2,
    (FUNC_12(VAR_1),
     FUNC_13("relation \"%s\" already exists",
      VAR_12)));





 FUNC_17(&(VAR_18->relname), VAR_12);

 FUNC_0(VAR_16, &VAR_17->t_self, VAR_17);

 FUNC_3(VAR_8, VAR_11, 0,
         VAR_3, VAR_13);

 FUNC_16(VAR_17);
 FUNC_20(VAR_16, VAR_9);




 if (FUNC_5(VAR_15->rd_rel->reltype))
  FUNC_8(VAR_15->rd_rel->reltype,
         VAR_12, VAR_19);




 if (VAR_15->rd_rel->relkind == VAR_5 ||
  VAR_15->rd_rel->relkind == VAR_6)
 {
  Oid VAR_20 = FUNC_14(VAR_11);

  if (FUNC_5(VAR_20))
   FUNC_7(VAR_20, VAR_12);
 }




 FUNC_18(VAR_15, VAR_4);
}
