
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* zout; char* zout_start; char* zout_end; int z_expandable; } ;
typedef TYPE_1__ stbi__zbuf ;


 scalar_t__ FUNC_0 (char*,int) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static int FUNC_2(stbi__zbuf *VAR_0, char *VAR_1, int VAR_2)
{
   char *VAR_3;
   int VAR_4, VAR_5;
   VAR_0->zout = VAR_1;
   if (!VAR_0->z_expandable) return FUNC_1("output buffer limit","Corrupt PNG");
   VAR_4 = (int) (VAR_0->zout - VAR_0->zout_start);
   VAR_5 = (int) (VAR_0->zout_end - VAR_0->zout_start);
   while (VAR_4 + VAR_2 > VAR_5)
      VAR_5 *= 2;
   VAR_3 = (char *) FUNC_0(VAR_0->zout_start, VAR_5);
   if (VAR_3 == ((void*)0)) return FUNC_1("outofmem", "Out of memory");
   VAR_0->zout_start = VAR_3;
   VAR_0->zout = VAR_3 + VAR_4;
   VAR_0->zout_end = VAR_3 + VAR_5;
   return 1;
}
