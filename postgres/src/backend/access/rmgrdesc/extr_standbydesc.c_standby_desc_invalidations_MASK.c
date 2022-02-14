
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ relId; } ;
struct TYPE_9__ {scalar_t__ dbId; } ;
struct TYPE_8__ {scalar_t__ relId; } ;
struct TYPE_7__ {scalar_t__ catId; } ;
struct TYPE_11__ {scalar_t__ id; TYPE_4__ sn; TYPE_3__ rm; TYPE_2__ rc; TYPE_1__ cat; } ;
typedef int StringInfo ;
typedef TYPE_5__ SharedInvalidationMessage ;
typedef int Oid ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*,scalar_t__,...) ;
 int FUNC_1 (int ,char*) ;

void
FUNC_2(StringInfo VAR_5,
         int VAR_6, SharedInvalidationMessage *VAR_7,
         Oid VAR_8, Oid VAR_9,
         bool VAR_10)
{
 int VAR_11;


 if (VAR_6 <= 0)
  return;

 if (VAR_10)
  FUNC_0(VAR_5, "; relcache init file inval dbid %u tsid %u",
       VAR_8, VAR_9);

 FUNC_1(VAR_5, "; inval msgs:");
 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++)
 {
  SharedInvalidationMessage *VAR_12 = &VAR_7[VAR_11];

  if (VAR_12->id >= 0)
   FUNC_0(VAR_5, " catcache %d", VAR_12->id);
  else if (VAR_12->id == VAR_0)
   FUNC_0(VAR_5, " catalog %u", VAR_12->cat.catId);
  else if (VAR_12->id == VAR_1)
   FUNC_0(VAR_5, " relcache %u", VAR_12->rc.relId);

  else if (VAR_12->id == VAR_3)
   FUNC_1(VAR_5, " smgr");

  else if (VAR_12->id == VAR_2)
   FUNC_0(VAR_5, " relmap db %u", VAR_12->rm.dbId);
  else if (VAR_12->id == VAR_4)
   FUNC_0(VAR_5, " snapshot %u", VAR_12->sn.relId);
  else
   FUNC_0(VAR_5, " unrecognized id %d", VAR_12->id);
 }
}
