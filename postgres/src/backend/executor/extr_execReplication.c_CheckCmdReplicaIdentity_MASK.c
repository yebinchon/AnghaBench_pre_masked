
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ pubdelete; scalar_t__ pubupdate; } ;
struct TYPE_10__ {TYPE_1__* rd_rel; } ;
struct TYPE_9__ {scalar_t__ relreplident; } ;
typedef TYPE_2__* Relation ;
typedef TYPE_3__ PublicationActions ;
typedef scalar_t__ CmdType ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int ) ;

void
FUNC_8(Relation VAR_5, CmdType VAR_6)
{
 PublicationActions *VAR_7;


 if (VAR_6 != VAR_1 && VAR_6 != VAR_0)
  return;


 if (VAR_5->rd_rel->relreplident == VAR_4 ||
  FUNC_1(FUNC_3(VAR_5)))
  return;






 VAR_7 = FUNC_0(VAR_5);
 if (VAR_6 == VAR_1 && VAR_7->pubupdate)
  FUNC_4(VAR_3,
    (FUNC_5(VAR_2),
     FUNC_7("cannot update table \"%s\" because it does not have a replica identity and publishes updates",
      FUNC_2(VAR_5)),
     FUNC_6("To enable updating the table, set REPLICA IDENTITY using ALTER TABLE.")));
 else if (VAR_6 == VAR_0 && VAR_7->pubdelete)
  FUNC_4(VAR_3,
    (FUNC_5(VAR_2),
     FUNC_7("cannot delete from table \"%s\" because it does not have a replica identity and publishes deletes",
      FUNC_2(VAR_5)),
     FUNC_6("To enable deleting from the table, set REPLICA IDENTITY using ALTER TABLE.")));
}
