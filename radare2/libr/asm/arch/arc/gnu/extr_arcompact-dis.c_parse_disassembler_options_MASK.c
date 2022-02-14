
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (char const*,char) ;

__attribute__((used)) static void
FUNC_2 (char *VAR_2)
{
  const char *VAR_3;
  for (VAR_3 = VAR_2; VAR_3 != ((void*)0); )
    {
   if (FUNC_0 (VAR_3, "simd"))
     {
       VAR_1 = 1;
     }
   if (FUNC_0 (VAR_3, "insn-stream"))
     {
    VAR_0 = 1;
     }

   VAR_3 = FUNC_1 (VAR_3, ',');

   if (VAR_3 != ((void*)0)) {
    VAR_3++;
   }
    }

}
