
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stat {scalar_t__ st_dev; scalar_t__ st_ino; } ;
struct shmid_ds {scalar_t__ shm_nattch; } ;
struct TYPE_3__ {scalar_t__ magic; scalar_t__ device; scalar_t__ inode; } ;
typedef TYPE_1__ PGShmemHeader ;
typedef int IpcMemoryState ;
typedef int IpcMemoryId ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_0 (int ,void*,int ) ;
 scalar_t__ FUNC_1 (int ,int ,struct shmid_ds*) ;
 scalar_t__ FUNC_2 (int ,struct stat*) ;

__attribute__((used)) static IpcMemoryState
FUNC_3(IpcMemoryId VAR_13,
      void *VAR_14,
      PGShmemHeader **VAR_15)
{
 struct shmid_ds VAR_16;
 struct stat VAR_17;
 PGShmemHeader *VAR_18;

 *VAR_15 = ((void*)0);




 if (FUNC_1(VAR_13, VAR_4, &VAR_16) < 0)
 {





  if (VAR_12 == VAR_3)
   return VAR_9;






  if (VAR_12 == VAR_1)
   return VAR_10;
  return VAR_7;
 }
 if (FUNC_2(VAR_0, &VAR_17) < 0)
  return VAR_7;

 VAR_18 = (PGShmemHeader *) FUNC_0(VAR_13, VAR_14, VAR_6);
 if (VAR_18 == (PGShmemHeader *) -1)
 {
  if (VAR_12 == VAR_3)
   return VAR_9;
  if (VAR_12 == VAR_1)
   return VAR_10;





  return VAR_7;
 }
 *VAR_15 = VAR_18;

 if (VAR_18->magic != VAR_5 ||
  VAR_18->device != VAR_17.st_dev ||
  VAR_18->inode != VAR_17.st_ino)
 {




  return VAR_10;
 }






 return VAR_16.shm_nattch == 0 ? VAR_11 : VAR_8;
}
