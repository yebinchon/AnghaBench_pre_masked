
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int pubtruncate; int pubdelete; int pubupdate; int pubinsert; int puballtables; int pubname; } ;
struct TYPE_5__ {int pubtruncate; int pubdelete; int pubupdate; int pubinsert; } ;
struct TYPE_6__ {TYPE_1__ pubactions; int alltables; int name; int oid; } ;
typedef TYPE_2__ Publication ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_3__* Form_pg_publication ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char*,int ) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int ) ;

Publication *
FUNC_9(Oid VAR_2)
{
 HeapTuple VAR_3;
 Publication *VAR_4;
 Form_pg_publication VAR_5;

 VAR_3 = FUNC_5(VAR_1, FUNC_3(VAR_2));

 if (!FUNC_1(VAR_3))
  FUNC_6(VAR_0, "cache lookup failed for publication %u", VAR_2);

 VAR_5 = (Form_pg_publication) FUNC_0(VAR_3);

 VAR_4 = (Publication *) FUNC_7(sizeof(Publication));
 VAR_4->oid = VAR_2;
 VAR_4->name = FUNC_8(FUNC_2(VAR_5->pubname));
 VAR_4->alltables = VAR_5->puballtables;
 VAR_4->pubactions.pubinsert = VAR_5->pubinsert;
 VAR_4->pubactions.pubupdate = VAR_5->pubupdate;
 VAR_4->pubactions.pubdelete = VAR_5->pubdelete;
 VAR_4->pubactions.pubtruncate = VAR_5->pubtruncate;

 FUNC_4(VAR_3);

 return VAR_4;
}
