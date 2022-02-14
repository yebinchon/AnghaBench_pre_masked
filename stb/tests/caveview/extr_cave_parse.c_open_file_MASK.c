
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,char*,int,int) ;

__attribute__((used)) static void FUNC_3(int VAR_4, int VAR_5)
{
   if (!VAR_3 || VAR_1 != VAR_4 || VAR_2 != VAR_5) {
      char VAR_6[256];
      if (VAR_0 != ((void*)0))
         FUNC_0(VAR_0);
      FUNC_2(VAR_6, "r.%d.%d.mca", VAR_4, VAR_5);
      VAR_0 = FUNC_1(VAR_6, "rb");
      VAR_1 = VAR_4;
      VAR_2 = VAR_5;
      VAR_3 = 1;
   }
}
