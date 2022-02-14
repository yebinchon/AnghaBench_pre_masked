
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ persistency; int name; } ;
struct TYPE_5__ {int in_use; int active_cv; scalar_t__ active_pid; int mutex; TYPE_1__ data; } ;
typedef TYPE_2__ ReplicationSlot ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_4 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_6 ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 () ;
 int FUNC_12 (char*,char*,...) ;
 int FUNC_13 (char*,int) ;
 scalar_t__ FUNC_14 (char*,char*) ;
 int FUNC_15 (char*,int) ;
 int FUNC_16 (char*,char*,char*) ;

__attribute__((used)) static void
FUNC_17(ReplicationSlot *VAR_7)
{
 char VAR_8[VAR_2];
 char VAR_9[VAR_2];






 FUNC_2(VAR_4, VAR_1);


 FUNC_16(VAR_8, "pg_replslot/%s", FUNC_4(VAR_7->data.name));
 FUNC_16(VAR_9, "pg_replslot/%s.tmp", FUNC_4(VAR_7->data.name));
 if (FUNC_14(VAR_8, VAR_9) == 0)
 {
  FUNC_7();
  FUNC_13(VAR_9, 1);
  FUNC_13("pg_replslot", 1);
  FUNC_1();
 }
 else
 {
  bool VAR_10 = VAR_7->data.persistency != VAR_3;

  FUNC_8(&VAR_7->mutex);
  VAR_7->active_pid = 0;
  FUNC_9(&VAR_7->mutex);


  FUNC_0(&VAR_7->active_cv);

  FUNC_10(VAR_10 ? VAR_6 : VAR_0,
    (FUNC_11(),
     FUNC_12("could not rename file \"%s\" to \"%s\": %m",
      VAR_8, VAR_9)));
 }
 FUNC_2(VAR_5, VAR_1);
 VAR_7->active_pid = 0;
 VAR_7->in_use = 0;
 FUNC_3(VAR_5);
 FUNC_0(&VAR_7->active_cv);





 FUNC_6(0);
 FUNC_5();






 if (!FUNC_15(VAR_9, 1))
  FUNC_10(VAR_6,
    (FUNC_12("could not remove directory \"%s\"", VAR_9)));





 FUNC_3(VAR_4);
}
