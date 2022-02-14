
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int ,char*,int *,...) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;

void
FUNC_3(void)
{
 if (VAR_3 != ((void*)0))
 {
  if ((FUNC_2(VAR_3) < 0)




   )
   FUNC_0(VAR_2, "shmdt(%p) failed: %m", VAR_3);
  VAR_3 = ((void*)0);
 }

 if (VAR_0 != ((void*)0))
 {
  if (FUNC_1(VAR_0, VAR_1) < 0)
   FUNC_0(VAR_2, "munmap(%p, %zu) failed: %m",
     VAR_0, VAR_1);
  VAR_0 = ((void*)0);
 }
}
