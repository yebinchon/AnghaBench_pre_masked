
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int cp ;
struct TYPE_7__ {int dirty; int just_dirtied; int io_in_progress_lock; int mutex; int data; } ;
struct TYPE_6__ {int checksum; int slotdata; int length; int version; int magic; } ;
typedef int ReplicationSlotPersistentData ;
typedef TYPE_1__ ReplicationSlotOnDisk ;
typedef TYPE_2__ ReplicationSlot ;


 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 () ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 () ;
 int FUNC_13 (char*,char*,...) ;
 int VAR_14 ;
 int FUNC_14 (char const*,int) ;
 int FUNC_15 (int *,int *,int) ;
 int FUNC_16 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 () ;
 int FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (char*,char*) ;
 int FUNC_21 (char*,char*,char const*) ;
 int FUNC_22 (int,TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_23(ReplicationSlot *VAR_15, const char *VAR_16, int VAR_17)
{
 char VAR_18[VAR_2];
 char VAR_19[VAR_2];
 int VAR_20;
 ReplicationSlotOnDisk VAR_21;
 bool VAR_22;


 FUNC_9(&VAR_15->mutex);
 VAR_22 = VAR_15->dirty;
 VAR_15->just_dirtied = 0;
 FUNC_10(&VAR_15->mutex);


 if (!VAR_22)
  return;

 FUNC_5(&VAR_15->io_in_progress_lock, VAR_1);


 FUNC_16(&VAR_21, 0, sizeof(ReplicationSlotOnDisk));

 FUNC_21(VAR_18, "%s/state.tmp", VAR_16);
 FUNC_21(VAR_19, "%s/state", VAR_16);

 VAR_20 = FUNC_7(VAR_18, VAR_3 | VAR_4 | VAR_5 | VAR_6);
 if (VAR_20 < 0)
 {
  FUNC_11(VAR_17,
    (FUNC_12(),
     FUNC_13("could not create file \"%s\": %m",
      VAR_18)));
  return;
 }

 VAR_21.magic = VAR_8;
 FUNC_4(VAR_21.checksum);
 VAR_21.version = VAR_9;
 VAR_21.length = VAR_7;

 FUNC_9(&VAR_15->mutex);

 FUNC_15(&VAR_21.slotdata, &VAR_15->data, sizeof(ReplicationSlotPersistentData));

 FUNC_10(&VAR_15->mutex);

 FUNC_0(VAR_21.checksum,
    (char *) (&VAR_21) + VAR_11,
    VAR_10);
 FUNC_3(VAR_21.checksum);

 VAR_14 = 0;
 FUNC_19(VAR_13);
 if ((FUNC_22(VAR_20, &VAR_21, sizeof(VAR_21))) != sizeof(VAR_21))
 {
  int VAR_23 = VAR_14;

  FUNC_18();
  FUNC_1(VAR_20);


  VAR_14 = VAR_23 ? VAR_23 : VAR_0;
  FUNC_11(VAR_17,
    (FUNC_12(),
     FUNC_13("could not write to file \"%s\": %m",
      VAR_18)));
  return;
 }
 FUNC_18();


 FUNC_19(VAR_12);
 if (FUNC_17(VAR_20) != 0)
 {
  int VAR_24 = VAR_14;

  FUNC_18();
  FUNC_1(VAR_20);
  VAR_14 = VAR_24;
  FUNC_11(VAR_17,
    (FUNC_12(),
     FUNC_13("could not fsync file \"%s\": %m",
      VAR_18)));
  return;
 }
 FUNC_18();

 if (FUNC_1(VAR_20) != 0)
 {
  FUNC_11(VAR_17,
    (FUNC_12(),
     FUNC_13("could not close file \"%s\": %m",
      VAR_18)));
  return;
 }


 if (FUNC_20(VAR_18, VAR_19) != 0)
 {
  FUNC_11(VAR_17,
    (FUNC_12(),
     FUNC_13("could not rename file \"%s\" to \"%s\": %m",
      VAR_18, VAR_19)));
  return;
 }




 FUNC_8();

 FUNC_14(VAR_19, 0);
 FUNC_14(VAR_16, 1);
 FUNC_14("pg_replslot", 1);

 FUNC_2();





 FUNC_9(&VAR_15->mutex);
 if (!VAR_15->just_dirtied)
  VAR_15->dirty = 0;
 FUNC_10(&VAR_15->mutex);

 FUNC_6(&VAR_15->io_in_progress_lock);
}
