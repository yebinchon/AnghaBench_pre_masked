
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ tgconstrrelid; int tgname; int tgconstraint; } ;
typedef TYPE_1__ Trigger ;
struct TYPE_7__ {scalar_t__ fk_relid; scalar_t__ pk_relid; scalar_t__ confmatchtype; } ;
typedef int Relation ;
typedef TYPE_2__ RI_ConstraintInfo ;
typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,scalar_t__,...) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,...) ;
 TYPE_2__* FUNC_8 (int ) ;

__attribute__((used)) static const RI_ConstraintInfo *
FUNC_9(Trigger *VAR_6, Relation VAR_7, bool VAR_8)
{
 Oid VAR_9 = VAR_6->tgconstraint;
 const RI_ConstraintInfo *VAR_10;






 if (!FUNC_0(VAR_9))
  FUNC_4(VAR_2,
    (FUNC_5(VAR_1),
     FUNC_7("no pg_constraint entry for trigger \"%s\" on table \"%s\"",
      VAR_6->tgname, FUNC_1(VAR_7)),
     FUNC_6("Remove this referential integrity trigger and its mates, then do ALTER TABLE ADD CONSTRAINT.")));


 VAR_10 = FUNC_8(VAR_9);


 if (VAR_8)
 {
  if (VAR_10->fk_relid != VAR_6->tgconstrrelid ||
   VAR_10->pk_relid != FUNC_2(VAR_7))
   FUNC_3(VAR_2, "wrong pg_constraint entry for trigger \"%s\" on table \"%s\"",
     VAR_6->tgname, FUNC_1(VAR_7));
 }
 else
 {
  if (VAR_10->fk_relid != FUNC_2(VAR_7) ||
   VAR_10->pk_relid != VAR_6->tgconstrrelid)
   FUNC_3(VAR_2, "wrong pg_constraint entry for trigger \"%s\" on table \"%s\"",
     VAR_6->tgname, FUNC_1(VAR_7));
 }

 if (VAR_10->confmatchtype != VAR_3 &&
  VAR_10->confmatchtype != VAR_4 &&
  VAR_10->confmatchtype != VAR_5)
  FUNC_3(VAR_2, "unrecognized confmatchtype: %d",
    VAR_10->confmatchtype);

 if (VAR_10->confmatchtype == VAR_4)
  FUNC_4(VAR_2,
    (FUNC_5(VAR_0),
     FUNC_7("MATCH PARTIAL not yet implemented")));

 return VAR_10;
}
