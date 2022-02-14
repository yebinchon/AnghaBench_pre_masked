
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * index; } ;
struct TYPE_4__ {scalar_t__ size; void* location; } ;
typedef scalar_t__ Size ;
typedef TYPE_1__ ShmemIndexEnt ;
typedef TYPE_2__ PGShmemHeader ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (scalar_t__) ;
 void* FUNC_6 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* VAR_8 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,char const*,...) ;
 scalar_t__ FUNC_10 (int ,char const*,int ,int*) ;
 scalar_t__ FUNC_11 (char const*,char*) ;

void *
FUNC_12(const char *VAR_9, Size VAR_10, bool *VAR_11)
{
 ShmemIndexEnt *VAR_12;
 void *VAR_13;

 FUNC_2(VAR_7, VAR_5);

 if (!VAR_6)
 {
  PGShmemHeader *VAR_14 = VAR_8;


  FUNC_0(FUNC_11(VAR_9, "ShmemIndex") == 0);

  if (VAR_4)
  {

   FUNC_0(VAR_14->index != ((void*)0));
   VAR_13 = VAR_14->index;
   *VAR_11 = 1;
  }
  else
  {
   FUNC_0(VAR_14->index == ((void*)0));
   VAR_13 = FUNC_5(VAR_10);
   VAR_14->index = VAR_13;
   *VAR_11 = 0;
  }
  FUNC_3(VAR_7);
  return VAR_13;
 }


 VAR_12 = (ShmemIndexEnt *)
  FUNC_10(VAR_6, VAR_9, VAR_2, VAR_11);

 if (!VAR_12)
 {
  FUNC_3(VAR_7);
  FUNC_7(VAR_1,
    (FUNC_8(VAR_0),
     FUNC_9("could not create ShmemIndex entry for data structure \"%s\"",
      VAR_9)));
 }

 if (*VAR_11)
 {





  if (VAR_12->size != VAR_10)
  {
   FUNC_3(VAR_7);
   FUNC_7(VAR_1,
     (FUNC_9("ShmemIndex entry size is wrong for data structure"
       " \"%s\": expected %zu, actual %zu",
       VAR_9, VAR_10, VAR_12->size)));
  }
  VAR_13 = VAR_12->location;
 }
 else
 {

  VAR_13 = FUNC_6(VAR_10);
  if (VAR_13 == ((void*)0))
  {

   FUNC_10(VAR_6, VAR_9, VAR_3, ((void*)0));
   FUNC_3(VAR_7);
   FUNC_7(VAR_1,
     (FUNC_8(VAR_0),
      FUNC_9("not enough shared memory for data structure"
       " \"%s\" (%zu bytes requested)",
       VAR_9, VAR_10)));
  }
  VAR_12->size = VAR_10;
  VAR_12->location = VAR_13;
 }

 FUNC_3(VAR_7);

 FUNC_0(FUNC_4(VAR_13));

 FUNC_0(VAR_13 == (void *) FUNC_1(VAR_13));

 return VAR_13;
}
