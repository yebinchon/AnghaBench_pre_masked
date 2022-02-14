
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct TYPE_5__ {int name; } ;
struct TYPE_6__ {int dirty; TYPE_1__ data; } ;
typedef TYPE_2__ ReplicationSlot ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,char*,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (char*,char*,...) ;
 int FUNC_9 (char*,int) ;
 scalar_t__ FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,int) ;
 int FUNC_12 (char*,char*,char*) ;
 scalar_t__ FUNC_13 (char*,struct stat*) ;

__attribute__((used)) static void
FUNC_14(ReplicationSlot *VAR_2)
{
 char VAR_3[VAR_1];
 char VAR_4[VAR_1];
 struct stat VAR_5;







 FUNC_12(VAR_4, "pg_replslot/%s", FUNC_2(VAR_2->data.name));
 FUNC_12(VAR_3, "pg_replslot/%s.tmp", FUNC_2(VAR_2->data.name));
 if (FUNC_13(VAR_3, &VAR_5) == 0 && FUNC_4(VAR_5.st_mode))
  FUNC_11(VAR_3, 1);


 if (FUNC_1(VAR_3) < 0)
  FUNC_6(VAR_0,
    (FUNC_7(),
     FUNC_8("could not create directory \"%s\": %m",
      VAR_3)));
 FUNC_9(VAR_3, 1);


 VAR_2->dirty = 1;
 FUNC_5(VAR_2, VAR_3, VAR_0);


 if (FUNC_10(VAR_3, VAR_4) != 0)
  FUNC_6(VAR_0,
    (FUNC_7(),
     FUNC_8("could not rename file \"%s\" to \"%s\": %m",
      VAR_3, VAR_4)));






 FUNC_3();

 FUNC_9(VAR_4, 1);
 FUNC_9("pg_replslot", 1);

 FUNC_0();
}
