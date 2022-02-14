
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Size ;
typedef scalar_t__ IpcMemoryKey ;
typedef scalar_t__ IpcMemoryId ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ,char*,int,void*,...) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,unsigned long,int ,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int VAR_16 ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (int ,int ) ;
 void* FUNC_10 (scalar_t__,void*,int ) ;
 scalar_t__ FUNC_11 (scalar_t__,int ,int *) ;
 scalar_t__ FUNC_12 (scalar_t__,int ,int) ;
 int FUNC_13 (char*,char*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_14 (char*,int *,int ) ;

__attribute__((used)) static void *
FUNC_15(IpcMemoryKey VAR_17, Size VAR_18)
{
 IpcMemoryId VAR_19;
 void *VAR_20 = ((void*)0);
 void *VAR_21;
 VAR_19 = FUNC_12(VAR_17, VAR_18, VAR_8 | VAR_9 | VAR_7);

 if (VAR_19 < 0)
 {
  int VAR_22 = VAR_16;







  if (VAR_22 == VAR_1 || VAR_22 == VAR_0



   )
   return ((void*)0);
  if (VAR_22 == VAR_3)
  {
   VAR_19 = FUNC_12(VAR_17, 0, VAR_8 | VAR_9 | VAR_7);

   if (VAR_19 < 0)
   {

    if (VAR_16 == VAR_1 || VAR_16 == VAR_0



     )
     return ((void*)0);

   }
   else
   {






    if (FUNC_11(VAR_19, VAR_10, ((void*)0)) < 0)
     FUNC_3(VAR_14, "shmctl(%d, %d, 0) failed: %m",
       (int) VAR_19, VAR_10);
   }
  }
  VAR_16 = VAR_22;
  FUNC_4(VAR_6,
    (FUNC_7("could not create shared memory segment: %m"),
     FUNC_5("Failed system call was shmget(key=%lu, size=%zu, 0%o).",
         (unsigned long) VAR_17, VAR_18,
         VAR_8 | VAR_9 | VAR_7),
     (VAR_22 == VAR_3) ?
     FUNC_6("This error usually means that PostgreSQL's request for a shared memory "
       "segment exceeded your kernel's SHMMAX parameter, or possibly that "
       "it is less than "
       "your kernel's SHMMIN parameter.\n"
       "The PostgreSQL documentation contains more information about shared "
       "memory configuration.") : 0,
     (VAR_22 == VAR_4) ?
     FUNC_6("This error usually means that PostgreSQL's request for a shared "
       "memory segment exceeded your kernel's SHMALL parameter.  You might need "
       "to reconfigure the kernel with larger SHMALL.\n"
       "The PostgreSQL documentation contains more information about shared "
       "memory configuration.") : 0,
     (VAR_22 == VAR_5) ?
     FUNC_6("This error does *not* mean that you have run out of disk space.  "
       "It occurs either if all available shared memory IDs have been taken, "
       "in which case you need to raise the SHMMNI parameter in your kernel, "
       "or because the system's overall limit for shared memory has been "
       "reached.\n"
       "The PostgreSQL documentation contains more information about shared "
       "memory configuration.") : 0));
 }


 FUNC_9(VAR_11, FUNC_1(VAR_19));


 VAR_21 = FUNC_10(VAR_19, VAR_20, VAR_15);

 if (VAR_21 == (void *) -1)
  FUNC_3(VAR_6, "shmat(id=%d, addr=%p, flags=0x%x) failed: %m",
    VAR_19, VAR_20, VAR_15);


 FUNC_9(VAR_12, FUNC_2(VAR_21));






 {
  char VAR_23[64];

  FUNC_13(VAR_23, "%9lu %9lu",
    (unsigned long) VAR_17, (unsigned long) VAR_19);
  FUNC_0(VAR_13, VAR_23);
 }

 return VAR_21;
}
