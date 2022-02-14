
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stbi__zbuf ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(stbi__zbuf *VAR_0)
{
   int VAR_1 = FUNC_1(VAR_0);
   int VAR_2 = VAR_1 & 15;

   int VAR_3 = FUNC_1(VAR_0);
   if ((VAR_1*256+VAR_3) % 31 != 0) return FUNC_0("bad zlib header","Corrupt PNG");
   if (VAR_3 & 32) return FUNC_0("no preset dict","Corrupt PNG");
   if (VAR_2 != 8) return FUNC_0("bad compression","Corrupt PNG");

   return 1;
}
