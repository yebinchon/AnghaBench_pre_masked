
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct stat {scalar_t__ st_ino; int st_dev; } ;
struct TYPE_7__ {void* freeoffset; void* totalsize; scalar_t__ inode; int device; scalar_t__ dsm_control; int magic; int creatorPID; } ;
typedef void* Size ;
typedef TYPE_1__ PGShmemHeader ;
typedef int IpcMemoryState ;
typedef scalar_t__ IpcMemoryKey ;
typedef scalar_t__ IpcMemoryId ;
typedef int Datum ;


 int * VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (void**) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 void* FUNC_2 (scalar_t__,void*) ;
 int VAR_10 ;
 void* FUNC_3 (int) ;
 int FUNC_4 (scalar_t__,int *,TYPE_1__**) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;





 void* VAR_13 ;
 unsigned long VAR_14 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 () ;
 scalar_t__ VAR_15 ;
 int FUNC_13 (int *,TYPE_1__*,int) ;
 int FUNC_14 (int ,int ) ;
 scalar_t__ VAR_16 ;
 int FUNC_15 (scalar_t__,int ,int *) ;
 scalar_t__ FUNC_16 (TYPE_1__*) ;
 scalar_t__ FUNC_17 (scalar_t__,int,int ) ;
 scalar_t__ FUNC_18 (int ,struct stat*) ;

PGShmemHeader *
FUNC_19(Size VAR_17,
      PGShmemHeader **VAR_18)
{
 IpcMemoryKey VAR_19;
 void *VAR_20;
 PGShmemHeader *VAR_21;
 struct stat VAR_22;
 Size VAR_23;






 if (FUNC_18(VAR_3, &VAR_22) < 0)
  FUNC_7(VAR_7,
    (FUNC_9(),
     FUNC_11("could not stat data directory \"%s\": %m",
      VAR_3)));



 if (VAR_15 == VAR_8)
  FUNC_7(VAR_6,
    (FUNC_8(VAR_4),
     FUNC_11("huge pages not supported on this platform")));



 FUNC_0(VAR_17 > FUNC_3(sizeof(PGShmemHeader)));

 if (VAR_16 == VAR_12)
 {
  VAR_0 = FUNC_1(&VAR_17);
  VAR_2 = VAR_17;


  FUNC_14(VAR_1, (Datum) 0);


  VAR_23 = sizeof(PGShmemHeader);
 }
 else
  VAR_23 = VAR_17;







 VAR_19 = VAR_22.st_ino;

 for (;;)
 {
  IpcMemoryId VAR_24;
  PGShmemHeader *VAR_25;
  IpcMemoryState VAR_26;


  VAR_20 = FUNC_2(VAR_19, VAR_23);
  if (VAR_20)
   break;
  VAR_24 = FUNC_17(VAR_19, sizeof(PGShmemHeader), 0);
  if (VAR_24 < 0)
  {
   VAR_25 = ((void*)0);
   VAR_26 = 129;
  }
  else
   VAR_26 = FUNC_4(VAR_24, ((void*)0), &VAR_25);

  switch (VAR_26)
  {
   case 132:
   case 131:
    FUNC_7(VAR_7,
      (FUNC_8(VAR_5),
       FUNC_11("pre-existing shared memory block (key %lu, ID %lu) is still in use",
        (unsigned long) VAR_19,
        (unsigned long) VAR_24),
       FUNC_10("Terminate any old server processes associated with data directory \"%s\".",
         VAR_3)));
    break;
   case 130:






    FUNC_6(VAR_10,
      "shared memory block (key %lu, ID %lu) deleted during startup",
      (unsigned long) VAR_19,
      (unsigned long) VAR_24);
    break;
   case 129:
    VAR_19++;
    break;
   case 128:
    if (VAR_25->dsm_control != 0)
     FUNC_5(VAR_25->dsm_control);
    if (FUNC_15(VAR_24, VAR_9, ((void*)0)) < 0)
     VAR_19++;
    break;
  }

  if (VAR_25 && FUNC_16(VAR_25) < 0)
   FUNC_6(VAR_10, "shmdt(%p) failed: %m", VAR_25);
 }


 VAR_21 = (PGShmemHeader *) VAR_20;
 VAR_21->creatorPID = FUNC_12();
 VAR_21->magic = VAR_11;
 VAR_21->dsm_control = 0;


 VAR_21->device = VAR_22.st_dev;
 VAR_21->inode = VAR_22.st_ino;




 VAR_21->totalsize = VAR_17;
 VAR_21->freeoffset = FUNC_3(sizeof(PGShmemHeader));
 *VAR_18 = VAR_21;


 VAR_13 = VAR_20;
 VAR_14 = (unsigned long) VAR_19;







 if (VAR_0 == ((void*)0))
  return VAR_21;
 FUNC_13(VAR_0, VAR_21, sizeof(PGShmemHeader));
 return (PGShmemHeader *) VAR_0;
}
