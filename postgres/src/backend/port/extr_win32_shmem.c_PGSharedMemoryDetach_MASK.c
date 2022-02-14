
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_2 (int *) ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int ,char*,int ,...) ;

void
FUNC_5(void)
{




 if (VAR_3 != ((void*)0))
 {
  if (FUNC_3(VAR_3, 0, VAR_2) == 0)
   FUNC_4(VAR_1, "failed to release reserved memory region (addr=%p): error code %lu",
     *VAR_3, FUNC_1());

  VAR_3 = ((void*)0);
 }


 if (VAR_4 != ((void*)0))
 {
  if (!FUNC_2(VAR_4))
   FUNC_4(VAR_1, "could not unmap view of shared memory: error code %lu",
     FUNC_1());

  VAR_4 = ((void*)0);
 }


 if (VAR_5 != VAR_0)
 {
  if (!FUNC_0(VAR_5))
   FUNC_4(VAR_1, "could not close handle to shared memory: error code %lu",
     FUNC_1());

  VAR_5 = VAR_0;
 }
}
