
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ tg_oldtable; TYPE_2__* tg_relation; TYPE_1__* tg_trigger; scalar_t__ tg_newtable; } ;
typedef TYPE_4__ TriggerData ;
struct TYPE_11__ {void* enrtuples; void* enrtype; int * tupdesc; int reliddesc; int name; } ;
struct TYPE_13__ {scalar_t__ reldata; TYPE_3__ md; } ;
struct TYPE_10__ {int rd_id; } ;
struct TYPE_9__ {int tgoldtable; int tgnewtable; } ;
typedef int EphemeralNamedRelationData ;
typedef TYPE_5__* EphemeralNamedRelation ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_5__*) ;
 TYPE_5__* FUNC_1 (int) ;
 void* FUNC_2 (scalar_t__) ;

int
FUNC_3(TriggerData *VAR_4)
{
 if (VAR_4 == ((void*)0))
  return VAR_1;

 if (VAR_4->tg_newtable)
 {
  EphemeralNamedRelation VAR_5 =
  FUNC_1(sizeof(EphemeralNamedRelationData));
  int VAR_6;

  VAR_5->md.name = VAR_4->tg_trigger->tgnewtable;
  VAR_5->md.reliddesc = VAR_4->tg_relation->rd_id;
  VAR_5->md.tupdesc = ((void*)0);
  VAR_5->md.enrtype = VAR_0;
  VAR_5->md.enrtuples = FUNC_2(VAR_4->tg_newtable);
  VAR_5->reldata = VAR_4->tg_newtable;
  VAR_6 = FUNC_0(VAR_5);
  if (VAR_6 != VAR_2)
   return VAR_6;
 }

 if (VAR_4->tg_oldtable)
 {
  EphemeralNamedRelation VAR_7 =
  FUNC_1(sizeof(EphemeralNamedRelationData));
  int VAR_8;

  VAR_7->md.name = VAR_4->tg_trigger->tgoldtable;
  VAR_7->md.reliddesc = VAR_4->tg_relation->rd_id;
  VAR_7->md.tupdesc = ((void*)0);
  VAR_7->md.enrtype = VAR_0;
  VAR_7->md.enrtuples = FUNC_2(VAR_4->tg_oldtable);
  VAR_7->reldata = VAR_4->tg_oldtable;
  VAR_8 = FUNC_0(VAR_7);
  if (VAR_8 != VAR_2)
   return VAR_8;
 }

 return VAR_3;
}
