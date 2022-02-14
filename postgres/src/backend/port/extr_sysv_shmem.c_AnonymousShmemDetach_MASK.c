
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Datum ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(int VAR_3, Datum VAR_4)
{

 if (VAR_0 != ((void*)0))
 {
  if (FUNC_1(VAR_0, VAR_1) < 0)
   FUNC_0(VAR_2, "munmap(%p, %zu) failed: %m",
     VAR_0, VAR_1);
  VAR_0 = ((void*)0);
 }
}
